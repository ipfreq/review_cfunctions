#include<stdio.h>


int int_reverse(int var);

int main(void)
{
    int number=3568;
    printf("reverse of %i  is  %i\n",number,int_reverse(number));

    return 0 ;
}


int int_reverse(int var)

{  int reverse=0;
    while(var)
    {
        reverse=reverse*10+var%10;
        var/=10;
    }
    return reverse;
}
