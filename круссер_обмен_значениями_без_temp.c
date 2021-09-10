#include <stdio.h>

// 3. Написать программу обмена значениями двух целочисленных переменных:
// b. *без использования третьей переменной.


int main (int argc, char *argv[])
{
  int a, b;

  printf ("%s", "Input a first number 'a': ");
  scanf ("%d", &a);
  printf ("%s", "Input a second number 'b': ");
  scanf ("%d", &b);

a = a + b;
b = a - b;
a = a - b;

printf ("New value of 'a' is: %d\n", a);
printf ("New value of 'b' is: %d\n", b);

  return 0;
}


