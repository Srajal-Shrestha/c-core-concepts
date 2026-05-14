#include <stdio.h>

int main(void)
{
    int height, row, col;
    do
    {
        printf("Height: ");
        scanf("%d", &height);
    }while (height < 1 || height > 8);
    for (row = 0; row < height; row++)
    {
        for (col = 0; col < height - row - 1; col++)
        {
            printf(" ");
        }
        for (col = 0; col < row + 1; col++)
        {
            printf("#");
        }
        printf("\n");
    }
}
