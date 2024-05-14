#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[10];
   int i=0;


   for (i=0;i<10;i++){
    a[i]=rand();
    printf("%d\n",a[i]);
    }
    int position=1;
   int max_num=a[0];

    for (i=0;i<10;i++){
        if(a[i]>max_num){
            max_num=a[i];
            position=i;
        }



    }
        printf("max num is %d position is %d",max_num,position);




    }

