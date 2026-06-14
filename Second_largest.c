#include <stdio.h>

// Function to find the second largest element
int findSecondLargest(int arr[], int size)
{
    int largest, secondLargest;
    int i;

    // Assume first two elements are largest and second largest
    if (arr[0] > arr[1])
    {
        largest = arr[0];
        secondLargest = arr[1];
    }
    else
    {
        largest = arr[1];
        secondLargest = arr[0];
    }

    // Check remaining elements
    for (i = 2; i < size; i++)
    {
        // If current element is greater than largest
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        // If current element is between largest and second largest
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main()
{
    int arr[] = {12, 45, 7, 89, 34, 67};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = findSecondLargest(arr, size);

    printf("Second largest element is: %d\n", result);

    return 0;
}