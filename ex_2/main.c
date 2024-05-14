#include <stdio.h>
int main(void)
{
int *ptr;
char ptr[]="Der Himmel ist blau";
printf("%d und Luecken sind %d\n",ptr[], space(ptr));
return 0;
}
int space(char *p)
{
int c=0;
while(*p != '\0')
{
if(*p == ' ') c++;
p++;
}
return c;
}
