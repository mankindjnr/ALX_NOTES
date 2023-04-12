/**
 * 
 * THE CODE BELOW IS NOT FULLY CORRECT(logically) - syntax wise, its GREAT AND SERVES
 * ITS PURPOSE OF LINEAR SEARCH
 * the linear search, searching in a line, either left to right or right to left
 * you compare your target with those values in a set to see if they match
 * if they don't match, you continue, if you find it, stop and return true 
 * else, if you don't find it, return false
 * this is a for loop
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    //declaring an array of strings
    char* strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};
    /*static array - an array that never changes*/
    int numbers[] = {20, 500, 1, 5, 100, 1, 50};
    int n, i, length, string_length, j, result_compare;
    char *word;

    word = malloc(15 * sizeof(char));

    //ask and accept the user for the number to search for - return true if found 
    printf("Number: ");
    scanf("%d", &n);

    printf("name: ");
    scanf("%s", word);

    //the length of the array
    length = sizeof(numbers) / sizeof(numbers[0]);
    string_length = sizeof(strings) / sizeof(strings[0]);

    for (i = 0; i < length; i++)
    {
        if (numbers[i] == n)
        {
            printf("found the number\n");
        }

    }

    for (j = 0; j < string_length; j++)
    {

        result_compare = strcmp(strings[j], word);
        if (result_compare == 0)
        {
            printf("found string\n");
            free(word);
            return 0;
        }

    }

    free(word);
    return 1;
}