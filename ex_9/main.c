#include <stdio.h>
#include<math.h>

int main()
{
int n;
int sum=0;
int i=0;
printf("give n:\n");
scanf("%d",&n);
for(i=0;i<4*n;i+=4){
 sum+=pow(i,2);
}
printf("%d",sum);

}
