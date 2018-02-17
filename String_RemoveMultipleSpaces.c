#include<stdio.h>
#include<stdlib.h>
/*if a string has multiple spaces 
suppose
abc      abd   abd
then it will remove all spaces except one
the the string will be
abc abd abd
*/

char * removeSpaces(char a[])
{
    int i=0, j=0, flag=0;
    while(a[i]!='\0')
    {
        if(flag==0 && a[i]!=' '){
            flag=1;
        }
        if(flag==1 && a[i]==' '){
            flag=0;
        }
        if(flag==0 && a[j-1]!=' ' && j!=0){
            a[j]=' ';
            j++;
        }
        if(i==j && a[i]!=' '){
            j++;
        }
        i++;
        if(i!=j && a[i]!=' '){
            a[j]=a[i];
            j++;
        }
       
    }
    a[j]='\0';
    return a;
}

int main()
{
    char *a;
    a=(char*)malloc(sizeof(char)*150);
    scanf("%[^\n]s",a);
    a=removeSpaces(a);
    printf("%s",a);
}