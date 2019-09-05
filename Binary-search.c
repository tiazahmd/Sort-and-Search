#include <stdio.h>
#include <cs50.h>

void swap(int *x, int *);
int midval(int x, int y);

int main(void)
{
    // taking count for characters
    printf("How many characters are you entering? ");
    int count = get_int();
    
    // creating the array
    int array[count];
    
    // taking string as an input and converting them to integers
    for (int i=0; i<count; i++)
    {
        printf("Please enter the character number %i: ", (i+1));
        array[i] = atoi(get_string());
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
    
    //binary search
    printf("Please enter the character you want to search: ");
    int search = atoi(get_string());
    int i=0;
    
    do
    {
        if (search == array[midval(i, count-1)])
        {
            printf("The character exists in the list.\n");
            return 0;
        }
        else if (search > array[midval(i, count-1)])
        {
            i = midval(i, count-1) + 1;
        }
        else if (search < array[midval(i,count-1)])
        {
            count = midval(i, count-1);
        }
    }
    while (count != i);
    
    printf("The character does not exist in the list.\n");

    
}

void swap(int *x, int *y)
{
    int temp[1];
    temp[0] = *x;
    *x = *y;
    *y = temp[0];
}

int midval(int x, int y)
{
    int z = (x+y)/2;
    return z;
}
