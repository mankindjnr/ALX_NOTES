/**
 * tail recursion means that recursion will be the last thing in that function.
 * nothing else after the recursive function will be executed.
 * 
 * if, after returning, there are statements after the recursive function to execute
 * that is a non-tail recursion - there is no keeping track of the recurse output(memory wastage)
*/
#include <stdio.h>

void print(int a)
{
    if (a < 1)
    {
        return;
    }
    else
    {
        printf("%d\n", a);
        print(a/2);//tail recursion - its the last function called and there is nothing 
                    //after it that will be executed.
    }
}
void main()
{
    print(10);
}