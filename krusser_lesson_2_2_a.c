/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

// Реализовать функцию возведения числа a в степень b: без рекурсии

int Pow(int a, int n) {
    int result = 1;
    for(int i = 0; i < n; i++) {
        result *= a;
    }
    return result;
}
int main(int argc, char *argv[])
{
  int n, a;
  printf ("Input number a: ");
  scanf ("%d", &a);
  printf ("Input number n: ");
  scanf ("%d", &n);
  printf ("Summ digit: %d", Pow (a, n));
  return 0;
}
