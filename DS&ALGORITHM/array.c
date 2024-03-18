#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//function for inserting value into the Array
int insert(int *arr, int value, int index, int size)
{
    int i;
    //reallocating the size of the array
    arr = realloc(arr, (size + 1 * sizeof(int)));

    for (i = size + 1; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = value;
}

//function for searching an element
int search(int *arr, int value, int size)
{
    int i;
    for (i = 0; i < size; ++i)
    {
        if (arr[i] == value)
        {
            value = 1;
            break;
        }
    }
    if (value == 1)
    {
        return i;
    }
    return -1;
}

//function for deleting an element
int del(int *arr, int value, int size)
{
    int i, result;
    result = search(arr, value, size);
    if (result == -1)
    {
        return -1;
    }
    for (i = result; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
    return size - 1;
}

//function for displaying the Array
void display(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d]=%d\n", i, *(arr + i));
    }
}

int main()
{
    int *arr, option, size, value, index, result;
    int i;
    printf("How many elements do you want?\n");
    scanf(" %d", &size);

    //creating an array of size number of elements
    arr = (int *)calloc(size, sizeof(int));

    printf("Enter the elements:\n");
    for (i = 0; i < size; i++)
    {
        printf("Enter arr[%d]\n", i);
        scanf(" %d", &arr[i]);
    }
    printf("\n");

    do
    {
        printf("Implementation of List\n\n");
        printf("Choose the desired option\n\n");
        printf("1. Insert an element\n2. Delete an element\n3. Search for an element\n4. View the List\n5. Exit \n\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("\nEnter the value you want to insert:\n ");
            scanf("%d", &value);
            printf("In which index to insert\n");
            scanf("%d", &index);
            insert(arr, value, index, size);
            size++;
            //printf("\nValue Added at index: %d\n", size - 1);
            printf("Updated array is :\n");
            display(arr, size);

            break;
        case 2:
            printf("\nEnter the value you want to delete:\n");
            scanf("%d", &value);
            result = del(arr, value, size);
            if (result == -1 || size == 0)
            {
                printf("Element not found or Array is empty");
                break;
            }
            else
            {
                size = result;
                printf("Element is deleted\n");
            }
            printf("Array after deletion is:\n");
            display(arr, size);
            break;
        case 3:
            printf("\nEnter the value you want to search:\n");
            scanf("%d", &value);
            result = search(arr, value, size);
            if (result == -1 || size == 0)
                printf("Element not found or array is empty");
            else
                printf("Element found on index: %d", result);
            break;
        case 4:
            display(arr, size);
            break;
        case 5:
            printf("press Enter to exit");
            getch();
            exit(0);
            break;
        default:
            printf("\nEnter the correct option");
            break;
        }

        printf("\nPress Enter to continue\n\n");
        getch();
    } while (1);
    return 0;
}   