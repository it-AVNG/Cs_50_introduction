# Introduction to programming with C
## Primitives
* Source code --> complier --> machine code (0s and 1s). 
* a command line interface(cli) is much prefer due to writing can sometime faster than point and click
* some CLI jargon for making a file:
* $ code hello.c #create a file hello.c on the server
* $ make hello #make a compiled machine code from the hello file
* $ ./hello #run the hello compiled program that we made
* notice that the “ ./ “ means “at the file path”
* ‘stdio.h’ is a library where the functions exist, in c-language is called header files
* argument—> function —> returns value
* In C, it is important to tell the complier the type of variable it is going to use
* assignment a variable, we use ‘=’
* ‘%s’ means plugin string value here in C
* Remember ";" at the end of each statement
## Conditionals
* if (x == 'y' || x == 'Y') means if x equal to y OR to Y
* Syntax : else if (x == 'y' || x == 'Y') { ... }
## Loops
* [Sept 29th 2022]
note: only when we create a variable in C, we declare the type
syntax for increment: 
* counter +=1;
for increase by 1: counter++;
syntax for while loops:

int counter = 3;
    while (counter > 0)
    {
        printf("meow\n");
        counter--;
    }
equivalent for the above while loop
for (int i = 0; i < 3; i++)
    {
        printf("meow\n");
    }

* header files for standard use <stdbool.h> <stdio.h>
* do {work} while (condition) : continue to do the work while condition is true
* copy the start of the function to the top 