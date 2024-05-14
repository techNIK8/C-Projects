#include <stdio.h>
#include <stdlib.h>
int test;

typedef struct line {
int x1,y1;
int x2,y2;
}LINE;


int main()
{
 LINE line1;
 LINE line2;


 printf("int test;give line1\n");
 scanf("%d %d %d %d",&line1.x1,&line1.y1,&line1.x2,&line1.y2);
 printf("give line2\n");
 scanf("%d %d %d %d",&line2.x1,&line2.y1,&line2.x2,&line2.y2);
 testing_shit(line1, line2);
 printf("test=%d", test);
}

 int testing_shit(LINE x,LINE y)
 {test= x.x1+y.x1;
 }


