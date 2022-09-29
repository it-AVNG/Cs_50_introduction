#include <stdio.h>
#include <cs50.c>
int get_size(void);
void print_grid(int size);

int main (void)
{
    // Get size of grid
    int n = get_size();
    
    //create a pound grid
    print_grid(n);

}

int get_size(void)
{
    int n ;
    do
    {
        n = get_int("Size: ");

    } while (n<1);
    return n;
}

void print_grid(int size)
{
    for (int i = 0; i < size; i++)//rows
    {
        for (int j = 0; j < size; j++)//columns
        {
            printf("#");   
        } 
        printf("\n");

    }

}