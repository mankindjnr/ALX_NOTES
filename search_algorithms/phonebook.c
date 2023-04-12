/**
 * inventing your own data type
 * 
 * typedef struct
 * {
 *      string name;
 *      string number;
 * }
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char *name;
    char *number;
}
person;

int main(void)
{
    //an array people with two variables of type person
    person people[2];

    int i;
    char *name;

    printf("enter the name: ");
    scanf("%s", name);
    
    //here we are going into person and assigning those variables using the dop operator
    people[0].name = "carter";
    people[0].number = "+2543445567";

    people[1].name = "David";
    people[1].number = "+2544446678765";

    for (i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found %s\n", people[i].number);
            return(0);
        }
    }

    printf("didn't find number for that name\n");
    return (1);
}