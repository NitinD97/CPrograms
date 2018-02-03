#include<stdio.h>
/* There is a 2-D array: 
9   8   7   6
5   4   3   2
1   6   5   4
traverse the array to find all the trees/branches of the tree from a given position!
If position is 1,3 i.e. 7
It should print 
1 4 5 7 5 2

7->4->1
print 1
7->4
print 4
7->4->5
print 5
7
print 7
7->2->5
print 5
7->2
print 2
*/
void traverse(int row,int col,int a[][col],int rPosition, int cPosition);

void traverse(int row,int col,int a[][col],int rPosition, int cPosition)
{
    //printf("At a[%d][%d]",rPosition,cPosition);
    if(rPosition<0 || rPosition>row-1 || cPosition<0 || cPosition >col-1)
    {
        return;
    }
    else
    {
        //Going left
        traverse(row,col,a,rPosition+1,cPosition-1);
        printf("%d ",a[rPosition][cPosition]);
        //Going Right
        traverse(row,col,a,rPosition+1,cPosition+1);
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

    traverse(r,c,a,rPosition-1,cPosition-1);

}