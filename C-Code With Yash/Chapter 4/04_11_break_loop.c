#include<stdio.h>

int main()
{
    for(int i=0; i<1000; i++)
    {
        printf("%d \n ", i);
        if(i==5){
            break;
        }
    }

    return 0;
}

    