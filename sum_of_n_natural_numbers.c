// C Program to Find the Sum of n Natural Numbers using Function

#include <stdio.h>

int sum_natural_numbers(int);

int main() {
    int n,s;
    printf("\nEnter the value of n:-");
    scanf("%d",&n);
    s = sum_natural_numbers(n);
    printf("\nThe sum of first %d natural numbers is- %d",n,s);
    return 0;
}

int sum_natural_numbers(int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    return(sum);
}