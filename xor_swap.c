#include<stdio.h>

void swap(int *, int *); //forward declaration pass by reference ...

int main(void)
{
    int x=5, y=9;

    printf("x = %i  y = %i \n",x,y);

    swap(&x,&y); //pass by reference .

    printf(" After swapping .... \n");

    printf("x = %i  y = %i \n",x,y);

    return 0 ;
}

void swap(int *var1, int *var2)
{
    *var1=*var1^*var2;
    *var2=*var1^*var2;
    *var1=*var1^*var2;
}
