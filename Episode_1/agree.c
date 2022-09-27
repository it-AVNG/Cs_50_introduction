#include <cs50.c>
#include <stdio.h>

int main(void)
{
    char x = get_char("do you agree? ");
    if (x =='n'|| x == 'N')
    {
        printf("not agreed \n");
    }
    else if (x == 'y' || x == 'Y')
    {
        printf("agreed \n");
    }
}
