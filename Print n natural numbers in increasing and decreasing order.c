#include <stdio.h>
#include <stdlib.h>

void increasing(int num1)
{
    if(num1 > 0)
    {
        increasing(num1-1); // head recursion
        printf("%d ",num1);
    }
    return;
}

void decreasing(int num2)
{
    if(num2 >= 1)
    {
        printf("%d ",num2);
        decreasing(num2-1); // tail recursion 
    }
    return;
}

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("\nIncreasing order:\n");
    increasing(n);
    printf("\nDecreasing order:\n");
    decreasing(n);
    return 0;
}
