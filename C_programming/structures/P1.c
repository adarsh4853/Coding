#include<stdio.h>

typedef struct
{
	float real;
	float imaginary;
}complex;

complex add(complex a,complex b, complex c)
{
	c.real=a.real+b.real;
	c.imaginary=a.imaginary+b.imaginary;
	return c;
}

complex sub(complex a,complex b, complex c)
{
	c.real=a.real-b.real;
	c.imaginary=a.imaginary-b.imaginary;
	return c;
}

complex mul(complex a,complex b, complex c)
{
	c.real=a.real*b.real-a.imaginary*b.imaginary;
	c.imaginary=a.real*b.imaginary+b.real*a.imaginary;
}

int main()
{
	complex a,b,c;
	printf("Enter complex number 1: ");
	scanf("%f%f",&a.real,&a.imaginary);
	printf("Enter complex number 2: ");
	scanf("%f%f",&b.real,&b.imaginary);
	
	c=add(a,b,c);
	printf("Sum is %f%+fi\n",c.real,c.imaginary);
	
	c=sub(a,b,c);
	printf("Substraction is %f%+fi\n",c.real,c.imaginary);
	
	c=mul(a,b,c);
	printf("mulplication is %f%+fi\n",c.real,c.imaginary);
	return 0;	
}
	
	
