#include <stdio.h>
#include <time.h>

void swap(int *x, int *y);
int main(void)
{
    // creating an array of numbers
    int numbers[20] = {13,12,9,2,4,7,8,20,16,14,1,5,3,19,15,6,18,10,17,11};
    
    printf("The unsorted numbers are: %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i.\n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4], numbers[5], numbers[6], numbers[7], numbers[8], numbers[9], numbers[10], numbers[11], numbers[12], numbers[13], numbers[14], numbers[15], numbers[16], numbers[17], numbers[18], numbers[19]);
    
    // sorting - bubble sort
    
    int j=19;
    do
    {
        for (int i=0; i<j; i++)
        {
            if (numbers[i] > numbers[i+1])
            {
                swap(&numbers[i],&numbers[i+1]);
            }
        }
        j--;
    }
    while (j != 0);
    

    
    printf("The sorted numbers are: %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i.\n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4], numbers[5], numbers[6], numbers[7], numbers[8], numbers[9], numbers[10], numbers[11], numbers[12], numbers[13], numbers[14], numbers[15], numbers[16], numbers[17], numbers[18], numbers[19]);
}

void swap(int *x, int *y)
{
    int temp[1];
    temp[0] = *x;
    *x = *y;
    *y = temp[0];
}
