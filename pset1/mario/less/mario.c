#include <stdio.h>
#include <cs50.h>

// Print pyramid of height no more than 23.

int main(void)
{
    // Get user to input height between 1 and 23.
    int height;

    do
    {
        printf("Please specify a number between 0 and 23: ");
        height = get_int();
    }
    while (height < 0 || height > 23);

    // Loop to draw pyramid
    int row, gaps, hashes;
    for (row = 0; row < height; row ++)
    {
        for (gaps = height - row; gaps > 1; gaps --)
        {
            printf(" ");
        }
        for (hashes = 0; hashes < row + 2; hashes ++ )
        {
            printf("#");
        }
        printf("\n");
    }
}