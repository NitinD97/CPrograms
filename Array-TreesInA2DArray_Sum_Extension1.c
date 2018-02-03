#include<stdio.h>
/*There is a 2D array
1 2 3 4
5 6 7 8
9 10 11 12
Take a position to start like 1,3 
Take a number from user 22 
Get the sum of all branches until it is equal to the number given by user
if Number is matched print "Found!"
else print "Not Found!"

It should print "Found!" in the above case
*/


int traverse(int row,int col,int a[][col],int rPosition, int cPosition,int sum,int sumFromUser);

int traverse(int row,int col,int a[][col],int rPosition, int cPosition,int sum, int sumFromUser)
{
    //printf("At a[%d][%d]",rPosition,cPosition);
    if(rPosition<0 || rPosition>row-1 || cPosition<0 || cPosition >col-1)
    {
        //printf("Sum at branch: %d\n",sum);
        return 0;
    }
    else
    {
        sum=sum+a[rPosition][cPosition];
        if(sum>sumFromUser)
        {
            return 0;
        }
        else if(sum==sumFromUser)
        {
            return 1;
        }
        else
        {
            int hasMatched=0;
            //Going left
            hasMatched=traverse(row,col,a,rPosition+1,cPosition-1,sum,sumFromUser);
            if(hasMatched==1)
            {
                return 1;
            }

            //Going Right
            hasMatched=traverse(row,col,a,rPosition+1,cPosition+1,sum,sumFromUser);
            if(hasMatched==1)
            {
                return 1;
            }
            /*if(rPosition>=row-1 || cPosition<=0 || cPosition >=col-1)
            {
                printf("Sum at branch: %d\n",sum);
            }*/
        }
    }
}

int main()
{
    printf("Enter the rows and columns: ");
    int r,c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    int i,j;
    printf("Enter the values: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("Enter the position of the element to start: ");
    int rPosition,cPosition;
    scanf("%d %d",&rPosition,&cPosition);

    int sumFromUser;
    printf("Enter the sum to be checked: ");
    scanf("%d",&sumFromUser);

    int hasMatched=traverse(r,c,a,rPosition-1,cPosition-1,0,sumFromUser);

    if(hasMatched==1)
    {
        printf("Found!");
    }
    else
    {
        printf("Not Found!");
    }


}