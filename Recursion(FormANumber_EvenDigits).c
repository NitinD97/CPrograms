#include<stdio.h>

/************
Form a number using even digits using recursion
846523 will become
8462
i.e. all the odd digits get removed
--Also checked for -ve Numbers 
************/


/*********
All the fuunctions are as follows
***********/
int formNumber();/*It will remove the odd digits and return the final number*/
int evenDigits();/*It will set some variable, check the number for +ve/-ver, and call formNumber()*/


int evenDigits(int n)
{
  	int power=1,sum=0,flag=0;
  	if(n<0)
    {
        n=n*-1;
        flag=1;
    }

  	int no=formNumber(n,power);

  	if(flag)
        return no*(-1);

  	return no;
}

int formNumber(int n,int p)
{
    int sum=0;
    if(n&1)
    {
        if(n==0||n==1)
            return 0;
        else
            return formNumber(n/10,p);
    }
    else
    {
        if(n<10)
            return p*n;
        else
        {
            int rem=n%10;
            sum=sum+(rem*p);
            return sum+formNumber(n/10,p*10);
        }
    }
}

int main()
{
    int no=-163505;
    no=evenDigits(no);
    printf("RESULT is: %d",no);
    return 0;
}
