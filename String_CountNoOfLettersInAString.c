#include<stdio.h>

/*
    It will count the number of alphabets in a String
*/

int countLetters(char a[])          //function definition to Count no. of letters
{
    int cnt=0;                      //initialize cnt=0
    int i;
    while(a[i]!='\0')               //Checking each letter of the array "a" upto null character 
    {
        if((a[i]>=65 && a[i]<91) || (a[i]>=97 && a[i]<123))         //condition to increment count for uppercase & lowercase letters in ASCII values
        {
            cnt++;
        }
        i++;
    }
    return cnt;         //Final count of the letters
}

int main()
{
    char a[100];
    gets(a);
    int noOfLetters=countLetters(a);
    printf("No of Letters: %d",noOfLetters);        //Function Call 
}
