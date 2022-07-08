// C Program to Find Largest Number Using Dynamic Memory Allocation

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *ptr,n,highest,i;
    printf("\nEnter the number of elements-");
    scanf("%d",&n);
    ptr = (int*)malloc(n * sizeof(int));
    if(ptr == NULL)
    {
        printf("\nMemory not allocated");
        exit(0);
    }
    else
    {
        printf("\nMemory successfully allocated");
        printf("\nInput positive elements:-");
        for(i=0;i<n;i++)
        {
            scanf("%d",&ptr[i]);
        }
    }
    highest = ptr[0];
    for(i=1;i<n;i++)
    {
        if(ptr[i]>highest)
        {
            highest = ptr[i];
        }
    }
    printf("\nThe largest element among them is:- %d",highest);

    
    return 0;
}