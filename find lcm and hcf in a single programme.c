//find gcdor hcf and lcm in a signle programme
// herer in this programme will execute the gcd value first then lcm value
#include <stdio.h>
#include <conio.h>

void main ()
{
	int num1,num2,rem;
	int lcm;
	printf ("Enter the first number :");
	scanf ("%d",&num1);
	printf ("Enter the second number :");
	scanf ("%d",&num2);
	int devint,divisor;
	if (num1>num2)
	{
		devint=num1;
		divisor=num2;
	}
	else //num1<num2
	{
		devint=num2;
		divisor=num1;
	}
	while (divisor!=0)
	{
		rem=devint%divisor;
		devint=divisor;
		divisor=rem;
	}
	printf ("The gcd or hcf of %d and %d is :%d",num1,num2,devint);
	// lcm * hcf = the product of two numbers
	lcm = (num1*num2)/devint;
	printf ("\nThe lcm of %d and %d is :%d",num1,num2,lcm);
getch();	
}
