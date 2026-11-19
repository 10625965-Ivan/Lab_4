#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "tasks.h"

int main(void)
{
    setvbuf(stdout, NULL, _IONBF, 0);

    printf("Task 6\n");
    task6();

    printf("\nTask 9\n");
    task9();

    printf("\nTask 12\n");
    task12();

    printf("\nTask 15\n");
    task15();

    printf("\nTask 18\n");
    task18();

    printf("\nTask 21\n");
    task21();

    printf("\nTask 24\n");
    task24();

    printf("\nTask 27\n");
    task27();

    printf("\nTask 30\n");
    task30();

    printf("\nTask 33\n");
    task33();

    return 0;
}
