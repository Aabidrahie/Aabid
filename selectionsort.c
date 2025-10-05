#include <stdio.h>

int main(void)
{
    int arr[] = {8,4,1,3,6,2,7,5,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i, j, min, temp;
    for (i=0;i<n-1;i++)
    {
    min = i;
    for (j=i+1;j<n;j++)
    {
    if (arr[j] < arr[min])
    {
    min = j;
    }
    }
    temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
}
    printf("The sorted array is:    ");
    for (i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;

}