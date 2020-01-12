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

void rotate (Rotor *rotor)
{
    for (int i = 0; i < LENGHT; i++)
    {
        if (++(rotor->blue[i]) > 89)
        {
            rotor->blue[i] = 32;
        }
        else if (rotor->blue[i] == 32)
        {
            rotor->blue[i] = 65;
        }
        else
        {
            rotor->blue[i] += 1;
        }
    }
}

int match (Rotor *rotor, int face, int position)
{
    for (int i = 0; i < LENGHT; i++)
    {
        if (face == 1)
        {
            if (rotor->blue[i] == rotor->red[position])
            {
                return i;
            }
        }
        else if (face == 0)
        {
            if (rotor->red[i] == rotor->blue[position])
            {
                return i;
            }
        }
    }
    return -1;
}

char position ()
{
    // nada todavia
    return ' ';
} 