#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int collatz(int input);

int main(int argc, char *argv[])
{
    // ensure proper usage
    if (argc != 2)
    {
        printf("Usage: recover data_file\n");
        return 1;
    }

    int input = atoi(argv[1]);
    int returned = collatz(input);
    printf("%i\n", returned);
}


int collatz(int input)
{

    if (input == 1)
    {
        return 0;
    }
    else if ((input % 2) == 0)
    {
        return 1 + collatz(input / 2);
    }
    else
    {
        return 1 + collatz((3 * input) + 1);
    }

}
