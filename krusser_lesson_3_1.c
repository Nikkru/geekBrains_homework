/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

// 1. Попробовать оптимизировать пузырьковую сортировку. 
// Сравнить количество операций сравнения оптимизированной и не оптимизированной программы. 
// Написать функции сортировки, которые возвращают количество операций.
#include <stdio.h>


int Ar[10] = { 9, 1, 2, 0, 4, 5, 6, 7, 8, 3 };
int ArCopy[10] = { 9, 1, 2, 0, 4, 5, 6, 7, 8, 3 };

void swap (int *a, int *b)
{
  int t = *a;
  *a = *b;
  *b = t;
}

void print (int N, int *a)
{
  int i;
  for (i = 0; i < N; i++)
    printf ("%6i", a[i]);
  printf ("\n");
}

// фунция неоптимизированной сортирвки

int sorting (int *x, int n) {
    int count = 0;
    int i;
    int j = 0;
      for (i = 0; i < n; i++)
    for (j = 0; j < n-1; j++)
      if (x[j] > x[j + 1])
	{
	    count++;
	  swap (&x[j], &x[j + 1]);
	}
	return count;
}

// фунция оптимизированной сортирвки

int sortingOpt (int *x, int n) {
    int count = 0;
    int i;
    int j = 0;
         for (i = 0; i < n; i++)
    for (j = 1; j < n-1; j++) // исключаем уже пройденное сравнение
      if (x[j] > x[j + 1])
	{
	    count++;
	  swap (&x[j], &x[j + 1]);
	}
	return count;
}

int main (int argc, char *argv[])
{
  int count1;
  int count2;
  puts ("Array before sort");
  print (10, Ar);
  
  count1 = sorting(Ar, 10);
  count2 = sortingOpt(ArCopy,10);

  puts ("Array after sort");
  print (10, Ar);
  printf("Cycle Counter unoptimized sorting: %d", count1);
  printf("\n");
  printf("Cycle Counter optimized sorting: %d", count2);
  return 0;
}
