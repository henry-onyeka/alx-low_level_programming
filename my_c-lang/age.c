#include <stdio.h>
#include <stdlib.h>

void calc(int year)
{
int age, sum, yob;
int *rec;
rec = &year;
sum = year - yob;

printf("What year are we in?\n");
scanf("%d", rec);
printf("what year were you born in?\n");
scanf("%d",&yob);
printf("You are %d Years old", sum);

}

void main()
{
	calc(year);
}
