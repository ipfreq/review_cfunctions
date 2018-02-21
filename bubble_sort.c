#include<stdio.h>
int dec(int,int);
int inc(int,int);
void bubble_sort(int array[],int size,int(*COMPARE)(int,int));

int main(void)
{

    int arr[]= {3,4,2,6,6};
    display(arr,5);
    bubble_sort(arr,5,dec);
    display(arr,5);

    return 0;
}


void bubble_sort(int array[],int size,int(*COMPARE)(int,int))
{
    for(int i=0; i<size; ++i)
    {
        for(int j=i+1; j<size; ++j)
        {
            if(COMPARE(array[i],array[j]))
            {
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }

}



int dec(int var1,int var2)
{
    return var1<var2?1:0;
}

int inc(int var1,int var2)
{
    return var1>var2?1:0;
}
void display(int arr[],int size)
{
    for(int i=0; i<size; ++i)
    {
        printf("%i  ",arr[i]);
    }
    puts("");
}
