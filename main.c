#include <stdio.h>
#include "rotor.c"
#include <stdlib.h>

int main (void) 
{
    Rotor *rotor1 = (Rotor *) malloc(LENGHT * 2); //lengt is 26
    Rotor *rotor2 = (Rotor *) malloc(LENGHT * 2);
    
    initialize(rotor1, 'L', 'B');
    initialize(rotor2, 'K', 'O');

    
    /*for (int i = 0; i < LENGHT; i++)
    {
        printf("%c -> %c\n", rotor1->blue[i], rotor1->red[i]);
    } */
     
    return 0;
}