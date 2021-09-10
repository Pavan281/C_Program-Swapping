#include <stdio.h>  //Header File
int main()    //main is declared as a function
{
    int x = 3, y = 2;     //x got assigned the value as 3 and y got assigned the value as 2
    // Code to swap 'x' and 'y'
    x = x + y;    // x now becomes 5
    y = x - y;    // y becomes 1
    x = x - y;    // x becomes 2
    printf("After Swapping: x = %d, y = %d", x, y);   //printf function is used to display the Output
    return 0;
}
