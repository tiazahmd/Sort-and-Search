#include <stdio.h>
#include <cs50.h>

void swap(int *x, int *y);
int main(void)
{
    // taking count for numbers
    printf("How many numbers are you entering? ");
    int count = get_int();
    
    // creating the array
    int array[count];
    
    // taking integers as input
    
    for (int i=0; i<count; i++)
    {
        printf("Please enter integer number %i: ", (i+1));
        array[i] = get_int();
    }
    
    //sorting - bubble sort
    int j=count-1;
    do
    {
        for(int i=0; i<j; i++)
        {
            if (array[i] > array[i+1])
            {
                swap(&array[i], &array[i+1]);
            }
        }
        j--;
    }
    while (j!=0);
    
    
    // linear search
    printf("Please enter the integer you want to search: ");
    int search = get_int();
    int yeslist = 0;
    
    for (int i=0; i<count; i++)
    {
        if (search == array[i])
        {
            printf("The number is on the list\n");
            yeslist++;
            break;
        }
    }
    
    if (yeslist == 0)
    {
        printf("The number is not on the list\n");
    }
    
}

void swap(int *x, int *y)
{
    int temp[1];
    temp[0] = *x;
    *x = *y;
    *y = temp[0];
}
