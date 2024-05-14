#include <stdio.h>


typedef struct time{
int seconds;
int minutes;
int hours;
}TIME;

TIME time_diff(TIME x, TIME y);
TIME diff;
TIME t1;
TIME t2;


int main()
{
printf("Enter start time: \n");
scanf("%d %d %d",&t1.hours,&t1.minutes,&t1.seconds);
printf("Enter end time: \n");
scanf("%d %d %d",&t2.hours,&t2.minutes,&t2.seconds);
time_diff(t1, t2);

}

TIME time_diff(TIME x, TIME y)
{
diff.hours=t2.hours-t1.hours;
diff.minutes=t2.hours-t1.hours;
diff.seconds=t2.seconds-t1.seconds;
printf("time difference is:%d %d %d\n",diff.hours, diff.minutes, diff.seconds);



}

