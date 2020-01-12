#include <stdio.h>
#include "rotor.c"
#include "reflector.c"
#include <stdlib.h>

int main (void) 
{
    Rotor *rotor1 = (Rotor *) malloc(LENGHT * 2); //lengt is 26
    Rotor *rotor2 = (Rotor *) malloc(LENGHT * 2);
    
    initialize(rotor1, 'L', 'B');
    initialize(rotor2, 'K', 'O');

    Reflect *reflect = (Reflect *) malloc(LENGHT);

    initializeReflect(reflect, 'Z');
    for (int i = 0; i < LENGHT; i++)
    {
        printf("%c -> %c -> %c\n", rotor1->blue[i], rotor1->red[i], reflect->glass[i]);
    } 
     
    return 0;
}