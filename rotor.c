#include "headers\rotor.h"
#include <ctype.h>
#include <stdio.h>

void initialize (Rotor *rotor, char blue, char red)
{ 
    // primera cara
    for (int i = 0; i < LENGHT; i++)
    {
        rotor->blue[i] = blue;
        if (blue > 89)
        {
            blue = 32;
        }
        else if (blue == 32)
        {
            blue = 65;
        }
        else 
        {
            blue++;
            continue;
        } 
    }
    // para el segundo arreglo
    for (int i = 0; i < LENGHT; i++)
    {
        rotor->red[i] = red;
        if (red > 89)
        {
            red = 32;
        }
        else if (red == 32)
        {
            red = 65;
        }
        else 
        {
            red++;
            continue;
        } 
    }
}

void rotate (Rotor rotor)
{
    // nada todavia
}

int match (Rotor rotor, int face)
{
    // nada todavia
    return 0;
}

char position ()
{
    // nada todavia
    return ' ';
} 