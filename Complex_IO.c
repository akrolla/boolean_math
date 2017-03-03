#include <stdio.h>
#include "complex.h"
#include "Complex.h"

complex read_complex(void)
{
complex num;
printf("Enter the Real number:\n");
scanf("%d", &num.real);
printf("Enter the Imaginary number:\n");
scanf("%d", &num.imag);
return num;
}


void write_complex(complex)
{
printf("%d + %di", num.real , num.imag);
}
