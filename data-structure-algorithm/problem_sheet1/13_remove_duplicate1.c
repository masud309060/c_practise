#include <stdio.h>

void sort(int n1, int n2)
{
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

int remove_duplicates(int *nums, int arr_size)
{
    if (arr_size <= 1)
    {
        return arr_size;
    }

    int i = 0, j, count = 1;
    while (i < arr_size)
    {
        for (j = i + 1; j < arr_size && nums[i] == nums[j]; j++)
        {
        }
        if (j < arr_size)
        {
            nums[count++] = nums[j];
        }
        i = j;
    }

    return count;
}

int main()
{
    int nums[] = {1, 1, 2, 3, 4, 4, 5, 6, 6, 6, 5};
    int size = sizeof(nums) / sizeof(nums[0]);
    printf("Original array:\n");
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", nums[i]);
    }

    int count = remove_duplicates(nums, size);
    printf("\nAfter removing duplicates from the above sorted array:\n");
    for (i = 0; i < count; i++)
    {
        printf("%d ", nums[i]);
    }

    printf("\n");
    return 0;
}