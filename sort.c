#include  <stdio.h>
#define ARRAY_SIZE 5

sort()
{
    int numbers[ARRAY_SIZE], i ,j ,temp;

	// Read Input
    for (i = 0; i < ARRAY_SIZE; i++)
    {
		printf("\nEnter the Number : %d  : ", (i+1));
        scanf("%d", &numbers[i]);
    }
        
    // Array Sorting - Ascending Order
    for (i = 0; i < ARRAY_SIZE; ++i)
    {
        for (j = i + 1; j < ARRAY_SIZE; ++j)
        {
            if (numbers[i] > numbers[j])
            {
                temp =  numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    
    printf("Sorting Order Array: \n");
    for (i = 0; i < ARRAY_SIZE; ++i)
        printf("%d\n", numbers[i]);
        
    return 0;
}
