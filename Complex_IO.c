#include <stdio.h>
#include "complex.h"
#include "Complex_IO.h"

complex read_complex(void)
{
complex num;
printf("Enter the Real number:\n");
scanf("%d", &num.real);
printf("Enter the Imaginary number:\n");
scanf("%d", &num.imag);
return num;
}


void write_complex(complex num)
{
if(num.imag>0)
printf("%d + %di\n", num.real , num.imag);
else
	{
	printf("%d%di\n", num.real , num.imag);
	}
}
