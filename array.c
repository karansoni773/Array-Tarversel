// Code by Karansoni7773
#include<stdio.h>
#define size 100
void main()
{
    int n,i,arr[size];
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter %d elements in the array:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Traversal Start:\n");
     for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }

}
