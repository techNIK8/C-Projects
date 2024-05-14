#include <stdio.h>
#include <stdlib.h>

int main()
{
int n;
int i, t1, t2;
t1=2;
int j=0;
int nextTerm;
printf("give me n\n");
scanf("%d", &n );
if (n<20){
for (i=0;i<=n;i++){
 nextTerm=pow(t1,5)-t1;
 printf("%d ",nextTerm);
 j++;
 if(j==5) printf("\n");
 t1=nextTerm;

}
}
else return(0);



}

