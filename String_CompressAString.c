#include<stdio.h>
#include<stdlib.h>
/*if a string is
aaaabbccddd
compressed string will be
a4b2c2d3
*/

char *addNumber(char *cnt,char *a)
{


}

char * compressString(char a[])
{
    char *b;
    b=(char*)malloc(sizeof(char)*150);
    int i=0,cnt=0,j=0;
    char c[10];
    while(a[i]!='\0')
    {
        if(a[i]==a[i+1])
        {
            cnt++;
        }
        if(a[i]!=a[i+1])
        {
            cnt++;
            b[j]=a[i];
            itoa(cnt,c,10);
            printf("%s\n",c);
            int k=0;
            while(c[k]!='\0')
            {
                j++;
                b[j]=c[k];
                k++;
            }
            j++;
            cnt=0;
        }
        i++;
    }
    j++;
    b[j]='\0';
    return b;
}


int main()
{
    char *a;
    a=(char*)malloc(sizeof(char)*150);
    scanf("%[^\n]s",a);
    a=compressString(a);

    printf("%s",a);
}