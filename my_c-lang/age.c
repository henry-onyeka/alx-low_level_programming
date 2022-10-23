#include <stdio.h>
#include <stdlib.h>

void calc(int year)
{
int age, sum, yob;
int *rec;
rec = &yob;
/*
printf("What year are we in?\n");
scanf("%d", rec);
*/
printf("Welcome , what year were you born in?\n");
scanf("%d",rec);
sum = year - yob;
printf("You are %d Years old\n", sum);
/**
age = 0;
while (age <=5)
{

if (age == 5)
{
printf("thank you for using our App!");

exit(0);
}
else 
{
	calc(2022);
}
age++;
}
*/
}
int main()
{
	calc(2022);

return (0);
}
