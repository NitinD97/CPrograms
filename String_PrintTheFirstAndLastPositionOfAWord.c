#include<stdio.h>

void printPositions(char a[])
{
    int i=0;
    int flag=0;
    while(1)
    {

        if(flag==0 && a[i]!=' ')
        {
            printf("%c ",a[i]);
            flag=1;
        }
        else if(flag==1 && a[i]==' ')
        {
            printf("%c ",a[i-1]);
            flag=0;
        }
        else if(a[i]!=' ' && a[i+1]=='\0')
        {
            printf("%c ",a[i]);
            break;
        }
        i++;
    }
}

int main()
{
    char a[100];
    gets(a);
    printPositions(a);
    return 0;
}
