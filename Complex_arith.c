
//addition

complex add_complex(complex num1 , complex num2)
{
  complex ans;
  ans.real = num1.real + num2.real;
  ans.imag = num1.imag + num2.imag;
  return ans;
}




//subtraction

complex subtract_complex(complex num1 , complex num2)
{
  complex ans;
  ans.real = num1.real - num2.real;
  ans.imag = num1.imag - num2.imag;
  return ans;
}
// multiplication

complex multiply_complex( complex num1 , complex num2)
{
  complex ans;
  ans.real = (num1.real * num2.real) - (num1.imag * num2.imag);
  ans.imag = (num1.real * num2.imag) + (num2.real * num1.imag);
  return ans;
}


//conjugate


complex conjugate_complex(complex num1)
{
  complex ans;
  ans.real = num1.real ;
  ans.imag = (-1 * num1.real);
  return ans;
}

//negate

 complex negate_complex(complex num1)
{
  complex ans;
  ans.real = -1 * num.real;
  ans.imag = -1 * num.imag;
  return ans;
}


//division 

void divide_complex(complex num1, complex num2)
{
 float ans_real, ans_imag;
  complex numer,denom;
 if( denom==0)
   printf("Error! Cannot divide by zero\n");
   else
   {
     numer = multiply(num1, conjugate_complex(num2));
     denom = multiply(num2, conjugate_complex(num2));
    ans_real = (float) numer.real / denom.real;
    ans_imag = (float) numer.imag / denom.real;
      if(ans_imag<0)
        printf("%f%fi ", ans_real , ans_imag);
   else
     printf ("%f + %fi\n", ans_real , ans_imag);
   }
}
