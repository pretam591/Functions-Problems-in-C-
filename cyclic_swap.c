// C Program Swap Numbers in Cyclic Order Using Call by Reference Cyclic.c

#include <stdio.h>

int swap(int,int*);

int main() {
    int n,arr[1000],i;
    printf("\nEnter the size of the array(max 1000):-");
    scanf("%d",&n);
    printf("\n Enter the array elements:-");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    swap(n,arr);
    printf("\nThe swapped numbers are:-");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

int swap(int n,int *ptr)
{
    int *temp,i;
    for(i=0;i<n-1;i++)
    {
        temp = ptr[i];
        ptr[i] = ptr[i+1];
        ptr[i+1]=temp;
    }
    temp = ptr[i];
    ptr[i] = ptr[0];
    ptr[0]=temp;
}