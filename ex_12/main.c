#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    int n;
    int sum=0;
    printf("insert n\n");
    scanf("%d",&n);
 for (i=4; i<=4*n; i+=4)
 {
     if (n<10){
     sum+=i*i;
     printf("%d", sum);
     }
     else printf("n must be <10\n");
     return 0;artemisistzufrieden



 }


}
