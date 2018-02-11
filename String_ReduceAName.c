#include<stdio.h>
#include<stdlib.h>
/*if name of a person is 
Sachin Ramesh Tendulkar
change it to 
SR Tendulkar
and Display the result;
only O(n) complexity
*/

char* reduceName(char a[])
{
    char *b;
    b=(char*)malloc(sizeof(char)*150);
    int i=0,j=0,k=1,flag=0;
    b[0]=' ';
    while(a[i]!='\0')
    {
        if(flag==0 && a[i]!=' ')
        {
            flag=1;
            j++;
        }
        if(flag==1 && a[i]==' ')
        {
            k=j+1;
            flag=0;
        }
        if(a[i]!=' ')
        {
            b[k]=a[i];
            k++;
        }
        i++;
    }
    b[k]='\0';

    for(i=0;i<j;i++)
    {
        b[i]=b[i+1];
    }
    b[j-1]=' ';
    return b;
}

int main()
{
    char *a;
    a=(char*)malloc(sizeof(char)*150);
    scanf("%[^\n]s",a);
    a=reduceName(a);

    printf("%s",a);
}