#include<stdio.h>
/*There is a 2-D array: 
1 2 3 4 5
6 1 2 3 4
5 6 1 2 3
Get the sum of all branches from a given position!!!
if position=1,3 i.e. value =3
Sum at branch: 9
Sum at branch: 5
Sum at branch: 7
Sum at branch: 9
*/
void traverse(int row,int col,int a[][col],int rPosition, int cPosition,int sum);

void traverse(int row,int col,int a[][col],int rPosition, int cPosition,int sum)
{
    //printf("At a[%d][%d]",rPosition,cPosition);
    if(rPosition<0 || rPosition>row-1 || cPosition<0 || cPosition >col-1)
    {
        //printf("Sum at branch: %d\n",sum);
        return;
    }
    else
    {
        sum=sum+a[rPosition][cPosition];
        //Going left
        traverse(row,col,a,rPosition+1,cPosition-1,sum);
        //printf("%d ",a[rPosition][cPosition]);
        //Going Right
        traverse(row,col,a,rPosition+1,cPosition+1,sum);
        if(rPosition>=row-1 || cPosition<=0 || cPosition >=col-1)
        {
            printf("Sum at branch: %d\n",sum);
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

    traverse(r,c,a,rPosition-1,cPosition-1,0);
}