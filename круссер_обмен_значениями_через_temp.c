
#include <stdio.h>

// 3. Написать программу обмена значениями двух целочисленных переменных:
// a. с использованием третьей переменной;

int main (int argc, char *argv[])
{
  int a, b, temp;

  printf ("%s", "Input a first number 'a': ");
  scanf ("%d", &a);
  printf ("%s", "Input a second number 'b': ");
  scanf ("%d", &b);

temp = a;
a = b;
b = temp;

printf("new value of 'a' is: %d\n", a);
printf("new value of 'b' is: %d\n", b);

  return 0;
}



