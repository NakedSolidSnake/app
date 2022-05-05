#include "mathe/mathe.h"
#include "print/print.h"
#include <stdio.h>

int main (int argc, char *argv[])
{
    int a = 10;
    int b = 12;

    printf ("Sum %d + %d = %d\n",  a, b, mathe_sum(a, b));
    printf ("Sub %d - %d = %d\n",  a, b, mathe_sub(a, b));
    
    prin_message ("Hello World");

    return 0;
}