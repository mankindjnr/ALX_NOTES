/**
 * binary search uses a divide and conquer method.
 * 
 * if no doors left, 
 *      return false
 * first - sort them in ascending order
 * check the middle value if it matches the target, 
 * if it is not a match,
 * check if the target is greater than the middle or less and then move to the side that it is
 * then repeat. going to the middle, less side or greater side from the middle of the set
*/

/**
 *if no doors left
        return false (this is the base case)
if number behind middle door
        return true
else if number < middle door
        serch left half (recurse - call the search algorthm again)
else if number  > middle door
        search right half (recurse - call the search algorithm again)
 * 
*/
#include <stdio.h>
#include <stdlib.h>

void draw(int n);
void draw_recurse(int n);

int main(void)
{
    int height;

    printf("height of pyramid: ");
    scanf("%d", &height);

    draw(height);
    draw_recurse(height);
}

void draw(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    printf("\n");
}

void draw_recurse(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        draw_recurse(n - 1);

        for (int k = 0; k < n; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}