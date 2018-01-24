#include <stdio.h>
#define MAX_SIZE100
void main()
{
    int arr[MAX_SIZE];
    int N, i;
    printf("Enter size of the array: ");
    scanf("%d", &N);
    printf("Enter elements in the array: ");
    for(i=0; i<N; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Elements in the array: ");
    printArray(arr, 0, N);
}
