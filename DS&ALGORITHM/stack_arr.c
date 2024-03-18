//Implementing Stack using Arrays in C and develop functions to perform push and pop functions.
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Stack
{             //creating a structure
    int size; //maxSize                                            //members of structure
    int top;  //topMost element's index
    int *arr;
};

int isEmpty(struct Stack *ptr)
{ //function created to check wheather the stack is empty or not
    if (ptr->top == -1)
    {
        return 1; //return 1 if stack is empty
    }
    else
    {
        return 0; //return 0 if stack is not empty
    }
}

int isFull(struct Stack *ptr)
{ //function created to check wheather the stack is full or not
    if (ptr->top == ptr->size - 1)
    {
        return 1; //return 1 if stack is full
    }
    else
    {
        return 0; //return 0 if stack is not full
    }
}

void push(struct Stack *ptr, int val)
{ //function created to push the elements in stack
    if (isFull(ptr))
    {
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else
    {
        ptr->top++;               //pointer ptr access the struct member top
        ptr->arr[ptr->top] = val; //push element in top++ index
        printf("%d is pushed sucessfully\n", val);
    }
}

int pop(struct Stack *ptr)
{ //function created to pop the elements in stack
    if (isEmpty(ptr))
    {
        return INT_MIN;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
void displayElements(struct Stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Empty Stack!!!\n");
    }
    else
    {
        printf("Elements present in the stack are:\n");
        int tmp;
        tmp = ptr->top;
        while (tmp != -1)
        {
            printf("%d \n", ptr->arr[tmp]);
            --tmp;
        }
    }
}

int main()
{
    struct Stack *S = (struct Stack *)malloc(sizeof(struct Stack)); //location memory to stack
    printf("Enter the size of the stack\n");
    scanf("%d", &S->size);
    S->top = -1;
    S->arr = (int *)malloc(S->size * sizeof(int));
    int choice, val; //locate memory to array

    printf("Stack has been created successfully\n");

    printf("Before pushing, Full: %d\n", isFull(S));
    printf("Before pushing, Empty: %d\n\n", isEmpty(S));
    /* confirming the stack is empty*/
    while (1)
    {
        printf("enter the operation you want to perform\n");
        printf("\n press 1 for push\n press 2 for pop\n press 3 for display\n press 4 for exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the number to push\n");
            scanf("%d", &val);
            push(S, val);
            printf("\n");
            break;

        case 2:
            printf("Pop the element from stack \n");
            val = pop(S);
            //S->top == -1 && val == 0
            if (val==INT_MIN)
            {
                printf("Stack Underflow!!! \n");
            }
            else
                printf("The popped element is %d \n", val);
            break;

        case 3:
            displayElements(S);
            break;

        case 4:
            printf("Program is ended\n");
            printf("\n");
            exit(0);
            break;

        default:
            printf("Enter the correct option\n");
            printf("\n");
            break;
        }
    }
    return 0;
}