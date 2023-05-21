#include <stdio.h>
 
int main()
{
    float celsius, fahrenheit;
    scanf("%f", &celsius);
 
    // Convert the temperature
    fahrenheit = ((celsius * 9)/5) + 32;
    // fahrenheit = ((9/5) * celsius) + 32;
    // fahrenheit = ((1.8 * celsius) + 32;
 
    printf("%.2f",fahrenheit);
 
    return 0;
}