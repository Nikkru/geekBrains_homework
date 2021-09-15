/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

// Реализовать функцию возведения числа a в степень b: рекурсивно

int Pow (int a, int n)
{
  if (n == 0)
    return 1;
  else if (n == 1)
    return a;
  else
    while (n)
      return Pow (a + a, n - 1);
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
