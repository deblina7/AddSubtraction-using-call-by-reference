//Quick Quiz add and subtraction using call by reference
#include<stdio.h>
int addsub(int*a,int*b)
{
    int temp;
    temp = *a;
    *a = *a + *b;
    *b = temp - *b;
    return;
}
int main()
{
    int x=4,y=3;
    printf("The value before changing %d,%d",x,y);
    addsub(&x,&y);
    printf("\nThe value after add %d and subtraction %d",x,y);
    return 0;
}