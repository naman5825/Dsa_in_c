#include <stdio.h>

// BINARY SEARCH FUNCTION
void binary_search(int a[], int n, int key)
{
    int low = 0;
    int high = n - 1;
    int mid = (low + high) / 2;
    while (low <= high)
    {
        if (a[mid] < key)
            low = mid + 1;
        else if (a[mid] == key)
        {
            printf("%d found at location %d\n", key, mid + 1);
            break;
        }
        else
            high = mid - 1;
        mid = (low + high) / 2;
    }
    if (low > high)
        printf("Not found! \n %d isn't present in the list.\n", key);
}

// DRIVER CODE
int main()
{
    int i, low, high, mid, n, key, array[100];
    printf("Enter number of elements : ");
    scanf("%d", &n);
    printf("\nEnter %d elements :\n ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);
    printf("Enter value to find\n");
    scanf("%d", &key);
    binary_seach(array, n, key);
    return 0;
}