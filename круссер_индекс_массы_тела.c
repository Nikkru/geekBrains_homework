#include <stdio.h>
#include <math.h>

// 1. Ввести вес и рост человека. 
// Рассчитать и вывести индекс массы тела по формуле I=m/(h*h); 
// где m-масса тела в килограммах, h - рост в метрах.

int main (int argc, char *argv[])
{
  int weight;
  int height;

  printf ("Inpute weight in kg: ");
  scanf ("%d", &weight);
  printf ("Inpute height in cm: ");
  scanf ("%d", &height);
  
  double heightInMeters = (double) height / 100;
  double bmi = (double) weight / pow (heightInMeters, 2);
  
  printf ("Your BMI is: %f\n", bmi);
   if (bmi <= 16) {
       printf("You're bonny");
   } else if (bmi <= 18) {
       puts("You're skinny");
   } else if (bmi <= 25) {
       puts("You're thin");
   } else if (bmi <= 35) {
       puts("You're plumpish");
   } else if (bmi <= 40) {
       puts("You're stout");
   } else {
       puts("You're fat");
   }

  return 0;
}
