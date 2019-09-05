#include <stdio.h>
#include <cs50.h>

void swap(char *x, char *y);
int main(void)
{
    // taking count for numbers
    printf("How many characters are you entering? ");
    int count = get_int();
    
    // creating the array
    char array[count];
    
    // taking integers as input
    
    for (int i=0; i<count; i++)
    {
        printf("Please enter integer number %i: ", (i+1));
        array[i] = get_char();
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
    printf("Please enter the character you want to search: ");
    char search = get_char();
    
    for (int i=0; i<count; i++)
    {
        if (search == array[i])
        {
            printf("The character is on the list\n");
            return 0;
        }
    }
    
    printf("The character is not on the list\n");
    
}

void swap(char *x, char *y)
{
    char temp[1];
    temp[0] = *x;
    *x = *y;
    *y = temp[0];
}
