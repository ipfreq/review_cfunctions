#include<stdio.h>




int main(void)
{
    int var=0x12345678;

    char *ptr=(char*)&var;

    for(int i=0 ; i <4;++i)
    {
        printf("%p  %02x \n",ptr,(unsigned char)*ptr++);
    }
// on this machine lowest byte of var stored in the lowest address so it is little endian...

    return 0;
}
