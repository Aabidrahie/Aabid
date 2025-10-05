#include <stdio.h>


int main(void)
{
    
    int arr[]={23, 12, 45, 20, 90, 89, 95, 32, 65, 19};
    int max = arr[0];
    int min = arr[0];
    int sum = 0;
    int fsum = 0;
    int lsum = 0;
    int difference;
    int n = sizeof(arr)/sizeof(arr[0]);
    int mid = (n+1)/2;
    printf("Array elements are: ");
    for(int i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
    for (int i=0;i<n;i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    printf("The highest element is: %d \n",max);
    for (int i=0;i<n;i++)
    {
        if (min > arr[i])
        min = arr[i];
    }
    printf("The smallest element is: %d \n",min);
    for (int i=0;i<n;i++)
    sum += arr[i];
    printf("The sum of elements is : %d\n",sum);

    for (int i=0;i < mid;i++)
    {
    fsum += arr[i];
    }
    printf("The sum of first half of elements is: %d\n",fsum);
    
    for (int i=mid;i < n; i++)
    {
        lsum += arr[i];
    }
    printf("The sum of second half od elements is: %d \n",lsum);
    difference = fsum - lsum;
    printf("The difference between first and second half is: %d", difference);
    return 0;
}