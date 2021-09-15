/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

// 1. Реализовать функцию перевода из десятичной системы в двоичную, используя рекурсию.

#include<stdio.h>

void Func (int n)
{
  if (n != 0)
    Func (n / 2);
    else return;

  printf ("%d", n % 2);
  return;
}

int main (int argc, char *argv[])
{
  int n;
  printf ("Input number: ");
  scanf ("%d", &n);
  Func (n);
  return 0;
}
