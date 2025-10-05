#include <stdio.h>

int main(void)
{
    int arr[] = {8, 4, 1, 3, 6, 2, 7, 5, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, min, temp;

    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    // Selection sort with step display
    for (i = 0; i < n - 1; i++)
    {
        min = i;  // Assume current index has the minimum value

        // Find index of the smallest element in remaining array
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        // Swap only if a smaller element was found
        if (min != i)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }

        // Display the array after each pass
        printf("After pass %d: ", i + 1);
        for (int k = 0; k < n; k++)
        {
            printf("%d ", arr[k]);
        }
        printf("(swapped %d and %d)\n", arr[min], arr[i]);
    }

    printf("\nSorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
