#include <stdio.h>
#include <stdlib.h>
int prime_check(int x, int y);
int main()
{
    int n1, n2;
    printf("give two integers\n");
    scanf("%d %d", &n1, &n2);
    printf("prime numbers between %d and %d are:\n", n1,n2);
    prime_check(n1,n2);

}

 int prime_check(int x, int y)
{
    int i;
    int count_prime=0;
    for (i=x;i<y;++i){
    if ((i%2)!=0){
    printf("%d\n",i);
     count_prime++;

        }
    }
printf("%d\n",count_prime);
}
