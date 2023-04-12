#include <stdio.h>

void display(int n)
{
    if (n < 1)
    {
        /**
         * return goes to where the recursive function is being called from - that is in the else
         * part where there is display(n - 1)
         * it then checks if there is a statement after display and executes them at that part.
         * here, when the base case is reached, n is at 1 (display(1)) where the statement prints 1
         * the function treads down until it closes but again it returns - as the base case says
         * and it returns to n = 2 (display(2)) 
         * this return, reverses the various input the recursive function has received
         * after reaching the first call of display(n -1) it will return to its initial call which
         * is in the main function and it ends the call
        */
        return;
    }
    else
    {
        printf("%d\n", n);
        display(n - 1);
        printf("\n%d", n);
    }
}

void main()
{
    int n = 4;
    display(n);
}