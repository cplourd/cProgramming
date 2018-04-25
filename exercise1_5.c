/*Excersise 1-5. Modify the temperature conversion program to print the table in
reverse order, that is, from 300 degrees to 0.*/

#include <stdio.h>

main()
{
  float fahr, celsius;
  printf("Fahrenheit-Celsius Table\n");
  for(fahr = 300; fahr >= 0; fahr -= 20){
    celsius = (5.0/9.0) * (fahr - 32.0);
    printf("%6.2f %6.2f\n", fahr, celsius);
  }


}
