/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

// Реализовать функцию возведения числа a в степень b: *рекурсивно, используя свойство четности степени.

int Pow (int a, int n)
{
  if (n == 0)
    {
      return 1;
    }
  else if (n == 1)
    {
      return a;
    }
  else if (n % 2 == 0)
    {
      return Pow (a * a, n / 2);
    }
  else
    return Pow (a * a, n / 2) * a;
}

int main (int argc, char *argv[])
{
  int n, a;
  printf ("Input number a: ");
  scanf ("%d", &a);
  printf ("Input number n: ");
  scanf ("%d", &n);
  printf ("Summ digit: %d", Pow (a, n));
  return 0;
}
