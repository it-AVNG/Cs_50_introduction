# include <cs50.c>
# include <stdio.h>

int main(void) 
{
    int x = get_int("What 's x? :");
    int y = get_int("What 's y? :");

    if(x < y) 
    {
        printf("x is less then y");
    }
    else if (x > y) 
    {
        printf("x is not less then y");
    }
    else 
    {
        printf("x is equal to y");
    }
}