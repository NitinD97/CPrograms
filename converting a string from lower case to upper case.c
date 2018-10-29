#include<stdio.h>
 
int main()
{
    char text[100];
    int i;
     
    printf("Enter any string: ");
    gets(text);
     
    printf("Entered string is: %s\n",text);
     
    //convert into upper case
    for(i=0;text[i]!='\0';i++)
    {
        if(text[i]>='a' && text[i]<='z')
            text[i]=text[i]-0x20;
    }
    printf("String in Upper case is: %s\n",text);
     
    //convert into lower case
    for(i=0;text[i]!='\0';i++)
    {
        if(text[i]>='A' && text[i]<='Z')
            text[i]=text[i]+0x20;
    }
    printf("String in Lower case is: %s\n",text);
 
    return 0;
}