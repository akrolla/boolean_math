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
complex num;
printf("Enter a Real, followed by an Imaginary Number:\n")
scanf("%d %d ", &num.real , &num.imag);
printf("%d%di", &num.real , &num.imag);
return num;
}
