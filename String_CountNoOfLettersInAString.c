#include<stdio.h>

/*
    It will count the number of alphabets in a String
*/

int countLetters(char a[])
{
    int cnt=0;
    int i;
    while(a[i]!='\0')
    {
        if((a[i]>=65 && a[i]<91) || (a[i]>=97 && a[i]<123))
        {
            cnt++;
        }
        i++;
    }
    return cnt;
}

int main()
{
    char a[100];
    gets(a);
    int noOfLetters=countLetters(a);
    printf("No of Letters: %d",noOfLetters);
}