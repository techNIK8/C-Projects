#include <stdio.h>
#include <stdlib.h>
int main(){
    int array[3][3];
    int i;
    int j;
    int sum = 0;
    int mo;
    int array_min=9999999;

    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("enter the number for the [%d][%d] element, now is %d\n", i,j, array[i][j]);
            scanf("%d",&array[i][j]);
            sum+=array[i][j];
            if(array[i][j]<array_min){
                array_min=array[i][j];}


        }
    }
        printf("elements are:\n");
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                printf("[%d][%d]=%d",i,j,array[i][j]);
                if (j==3) printf("\n");

            }
        }
        mo=sum/9;
        printf("mo is %d, sum is %d, min is %d",mo,sum, array_min);
}



