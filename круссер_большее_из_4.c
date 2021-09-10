#include <stdio.h>

// 2. Найти максимальное из четырех чисел. Массивы не использовать

int LargestNumber (int x1, int x2)
{
  int result;

  if (x1 > x2)
    {
      result = x1;
    }
  else
    {
      result = x2;
    }

  return result;
}

int main (int argc, char *argv[])
{
  int a, b, c, d;

  printf ("%s", "Input a first number: ");
  scanf ("%d", &a);
  printf ("%s", "Input a second number: ");
  scanf ("%d", &b);
  printf ("%s", "Input a third number: ");
  scanf ("%d", &c);
  printf ("%s", "Input a fourth number: ");
  scanf ("%d", &d);

  if (LargestNumber (a, b) > LargestNumber (c, d))
    {
      printf ("The largest number is: %i\n", LargestNumber (a, b));
    }
  else
    {
      printf ("The largest number is: %i\n", LargestNumber (c, d));
    }

  return 0;
}
