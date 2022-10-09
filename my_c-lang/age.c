#include <stdio.h>
#include <stdlib.h>

void calc(int year)
{
int age, sum, yob;
int *rec;
rec = &yob;
sum = (year - yob);


/*
printf("What year are we in?\n");
scanf("%d", rec);
*/
printf("what year were you born in?\n");
scanf("%d",rec);
printf("You are %d Years old\n", sum);
printf("the year : %d ,the sum %d, the yob : %d\n",year, sum, yob);
}

int main()
{
	calc(2022);

return (0);
}
