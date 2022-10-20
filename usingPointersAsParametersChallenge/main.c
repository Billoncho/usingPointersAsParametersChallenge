/*
Author:     Billy Gene Ridgeway
Date:       October 20th. 2022
Purpose:    Useing pointers as parameters course challenge in C.
*/

/*
    Write a function that squares a number by itself.
        The function should define as a parameter an int pointer.
        Inside the function, dereference the pointer and multiply it by itself.
    It should print out the value of the variable passed to the function.
*/
#include<stdio.h>
#include<string.h>

int squaredNum(int *ptrNum);
void sQ2(int* const num);

int main()
{
    int x = 2;
    int y = 3;

    printf("\nThe number before the square function is:        %d\n", x);

    squaredNum(&x);

    printf("The number after the square function is:         %d\n", x);

    squaredNum(&x);

    printf("The number after the second square function is:  %d\n", x);

    printf("The value of y before sQ2 = %d\n", y);

    sQ2(&y);

    printf("The value of y after sQ2 = %d\n", y);

    sQ2(&y);

    printf("The value of y after sQ2 again = %d\n", y);

    return 0;
}

// Square the value passed in with a pointer.

int squaredNum(int *ptrNum)
{
    *ptrNum = (*ptrNum) * (*ptrNum);
}

// Square the value passed in using a const pointer.

void sQ2(int* const num)
{
    *num = (*num) * (*num);
}