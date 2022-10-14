#include <stdio.h>

void bubble_sort(int arr[], int n)
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter the number of numbers: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the number %d : ", (i + 1));
        scanf("%d", &arr[i]);
    }

    printf("Before sorting: \n");

    display(arr, n);

    bubble_sort(arr, n);

    printf("After sorting: \n");

    display(arr, n);
}