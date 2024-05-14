#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c=0;
    int i=0;
    char string[50];
    printf("enter string\n");
    scanf("%s",string);
  while(string[i]!='\0'){
  if (string[i]=='d'){
    c++;}
    i++;}
    printf("number of spaces are %d\n",c);

        }



