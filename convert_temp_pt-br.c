//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
//----------------------------- This will only work whith CS50 library :(((((------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
#include <cs50.h>
#include <stdio.h>

int main (void)
{
    char t = get_char("Você quer converter para Fahrenheit ou Celsius? \n F ou C? ");

        // De Celsius para Fahrenheit
    if (t == 'F' || t == 'f')
    {
        double c = get_double("Digite a temperatura em Celsius: ");
        printf("%.2f°C = %.2f°F \n", c, 9 * c / 5 + 32);
    }
        // De Fahrenheit para Celsius
    else if (t == 'C' || t == 'c')
    {
        double f = get_double("Digite a temperatura em Fahrenheit: ");
        double r = 5 * f - 160; // Tive que separar a operação em duas linhas, pois em uma só dava erro. O computador acabava aproximando o 160/9 :(
        printf("%.2f°F = %.2f°C \n", f, r / 9);
    }
}