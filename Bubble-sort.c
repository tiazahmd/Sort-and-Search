#include <stdio.h>

#define NUMBERS 20

void swap(int *x, int *y);
int main(void)
{
    // creating an array of numbers
    int numbers[NUMBERS] = {122, 13, 9, 2, 44, 7, 81, 202, 16, 14, 
                            14, 51, 34, 19, 100, 150, 18, 10, 17, 11};
    
    puts("The unsorted numbers are: ");
    for (int i = 0; i < NUMBERS; i++) {
        printf("%d ", numbers[i]);
    }

    // sorting - bubble sort    
    int j = NUMBERS - 1;
    do
    {
        for (int i = 0; i < j; i++)
        {
            if (numbers[i] > numbers[i + 1])
            {
                swap(&numbers[i], &numbers[i + 1]);
            }
        }
        j--;
    }
    while (j != 0);
        
    puts("\nThe sorted numbers are: ");
    for (int i = 0; i < NUMBERS; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}