
//addition

complex add_complex(complex num1 , complex num2)
{
  complex ans;
  ans.real = num1.real + num2.real;
  ans.imag = num1.imag + num2.imag;
  return ans;
}




//negation

complex negate_complex(complex num1 , complex num2)
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
  ans.imag = (num1.real * num2.imag) + (num2.real*num1.imag);
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

 negate_complex(complex num1 , complex num2)
{
  ans.real = -1 * num.real;
  ans.imag = -1 * num.imag;
  return ans;
}




