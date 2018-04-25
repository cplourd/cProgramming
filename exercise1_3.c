//Exercise 1-3. Modify the temperature conversion program to print
// a header above the table
#include <stdio.h>

main()
{
  float fahr, celsius;
  printf("Fahrenheit-Celsius Table\n");
  for(fahr = 0; fahr <= 300; fahr += 20){
    celsius = (5.0/9.0) * (fahr - 32.0);
    printf("%6.2f %6.2f\n", fahr, celsius);
  }


}
