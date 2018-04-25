//Exercise 1-4. Write a program to print the corresponding Celsius to
// Fahrenheit table
#include <stdio.h>

main()
{
  float celsius, fahr;
  printf("Celsius-Fahrenheit Table\n");
  for(celsius = 0; celsius <= 300; celsius += 20){
    fahr = (9.0/5.0) * celsius + 32.0;
    printf("%6.2f %6.2f\n", celsius, fahr);
  }


}
