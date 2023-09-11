// Conditionals
#include <stdio.h>

// int main(void)
// {
//     int x, y;
//     // Get input for x
//     printf("What's x? ");
//     scanf("%d", &x);
//     // Get input for y
//     printf("What's y? ");
//     scanf("%d", &y);
//     // Compare x and y
//     if (x < y)
//     {
//         printf("x is less than y\n");
//     }
//     else if (x > y)
//     {
//         printf("x is greater than y\n");
//     }
//     else
//     {
//         printf("x is equal to y\n");
//     }
//     return 0;
// }

// CONSOLE:
// What's x? 7
// What's y? 8
// x is less than y

#include <stdio.h>

int main(void)
{
    // Prompt user to agree
    printf("Do you agree? ");
    
    char c;
    scanf(" %c", &c); // Note the space before %c to consume any leading whitespace

    // Check whether agreed
    if (c == 'Y' || c == 'y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'N' || c == 'n')
    {
        printf("Not agreed.\n");
    }

    return 0;
}

// CONSOLE:
// Do you agree? no
// Not agreed.