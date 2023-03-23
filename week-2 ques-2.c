#include<stdio.h>
int main()
{
    int arr1[50], arr2[50], size1, size2, i, k, merge[100];
    printf("Enter array1 size:");
    scanf("%d", &size1);
    printf("Enter array1 elements:");
    for(i=0; i<size1; i++)
    {
        scanf("%d", &arr1[i]);
        merge[i]=arr1[i];
    }
    k=i;
    printf("Enter array 2 size:\n");
    scanf("%d", &size2);
    printf("Enter array 2 elements:");
    for (i=0; i<size2; i++)
    {
        scanf("%d", &arr2[i]);
        merge[k]= arr2[i];
        k++;
    }
    printf("The new array after merging is:\n");
    for(i=0; i<k; i++)
    printf("%d", merge[i]);
    printf("The new array after reversing is:\n");
    for(i=k-1; i>=0; i--)
    {
        printf("%d", merge[i]);
    }
    return 0;
}