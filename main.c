#include <stdio.h>
#include "rotor.c"
#include "reflector.c"
#include <stdlib.h>

int main (void) 
{
    Rotor *rotor1 = (Rotor *) malloc(LENGHT * 2); //lengt is 26
    Rotor *rotor2 = (Rotor *) malloc(LENGHT * 2);
    
    initialize(rotor1, 'A', 'B');
    initialize(rotor2, 'D', 'A');

    Reflect *reflect = (Reflect *) malloc(LENGHT);

    initializeReflect(reflect, 'D');
    for (int i = 0; i < LENGHT; i++)
    {
        printf("%c -> %c -> %c -> %c ->%c\n", rotor1->blue[i], rotor1->red[i], rotor2->blue[i], rotor2->red[i], reflect->glass[i]);
    } 

    // logica
    int positionRotor1 = match(rotor1, 0, 1);
    int positionRotor2 = match(rotor2, 0, positionRotor1);

    printf("\n%c", reflect->glass[positionRotor2]);
     
    return 0;
}