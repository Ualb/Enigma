#include "headers/reflector.h"

void initializeReflect (Reflect *reflect, char glass)
{
    // unica cara
    for (int i = 0; i < LENGHT; i++)
    {
        reflect->glass[i] = glass;
        if (glass > 89)
        {
            glass = 32;
        }
        else if (glass == 32)
        {
            glass = 65;
        }
        else 
        {
            glass++;
            continue;
        } 
    }
}

int matchInReflect (Rotor *rotor, int positionInRotor, int face, Reflect *reflect) 
{
    for (int i = 0; i < LENGHT; i++)
    {
        if (face == 1) 
        {
            if (rotor->blue[positionInRotor] = reflect->glass[i])
            {
                return i;
            }
        }
        else if (face == 0) 
        {
            if (rotor->red[positionInRotor] = reflect->glass[i])
            {
                return i;
            }
        }        
    }
    return -1;
}

int matchInRotor (Reflect *reflect, int positionInReflect, Rotor *rotor, int face) 
{
    for (int i = 0; i < LENGHT; i++)
    {
        if (face == 1)
        {
            if (reflect->glass[positionInReflect] = rotor->blue[i])
            {
                return i;
            }
        }
        else if (face == 0)
        {
            if (reflect->glass[positionInReflect] = rotor->red[i])
            {
                return i;
            }
        }
    }
    return -1;
}