#include <stdio.h>

/* This is the constructor function */
void __attribute__((constructor)) pre_main(void)
{
    printf("You're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");
}
