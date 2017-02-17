#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("How many numbers do you want to enter? ");
    int len = get_int();
    
    int input[len]; // creating an array to store values
    
    for (int i=0; i<len; i++)
    {
        printf("Enter %ith number: ", i+1);
        input[i] = get_int();
    }
    
    // determining minimum and maximum value
    int min = input[0];
    int max = input[0];
    
    for (int i=1; i<len; i++)
    {
        if (input[i]>max)
        {
            max = input[i];
        }
        if (input[i]<min)
        {
            min = input[i];
        }
    }
    
    // creating an array for all the digits needed
    int digits[max+1];
    
    for (int i=0; i<max+1; i++)
    {
        digits[i] = 0; //giving all the elements of the array a default value
    }
    
    // counting numbers
    for (int i=0; i<len; i++)
    {
        digits[input[i]] = digits[input[i]] + 1; // increasing the value of default digit element (default is 0) by 1 each time
    }
    
    
    printf("Minimum = %i\n", min);
    printf("Maximum = %i\n", max);
    printf("Inputed integers are: ");
    
    for (int i=0; i<len; i++)
    {
        printf("%i ", input[i]);
    }
    
    printf("\n");
    
    // count sort algorithm
    int j=0;
    for (int i=0; i<max+1; i++)
    {
        if (digits[i] == 0) // if the default value is zero, the value is disregarded, because it's not used
        {
            //
        }
        else
        {
            do
            {
                input[j] = i; // updating the element's value with i
                j++; // updating j's value so that the next integer is stored in an updated address
                digits[i] = digits[i] - 1; // decreasing the count in digits by 1, tells that it's values are being accounted for
            }
            while(digits[i] != 0); //when digits hit 0, it becomes useless again and breaks the loop
        }
    }
    
    printf("The sorted numbers are: ");
    for (int i=0; i<len; i++)
    {
        printf("%i ", input[i]);
    }
    printf("\n");
}
