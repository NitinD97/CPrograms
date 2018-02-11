#include<stdio.h>

int countWords(char a[])
{
    int i=0;
    int flag=0;
    int cnt=0;
    while(a[i]!='\0')
    {
        if(flag==0 && (a[i]!=' ' || a[i]!=','))
        {
            cnt++;
            flag=1;
        }
        if(flag==1 && (a[i]==' '|| a[i]==','))
        {
            flag=0;
        }
        i++;
    }

    return cnt;
}

int main()
{
    char a[100];
    gets(a);
    int noOfWords=countWords(a);
    printf("%d",noOfWords);
    return 0;
}