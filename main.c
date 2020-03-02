#include <stdio.h>
#include "rotor.c"
#include "reflector.c"
#include <stdlib.h>
#include <string.h>

#define BLUE 1
#define RED 0

#define MAX_INPUT_LENT 100

int main (void) 
{
    /* Rotor *rotor1 = (Rotor *) malloc(LENGHT * 2); //lengt is 27
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
    int positionRotor1 = match(rotor1, RED, 1);
    int positionRotor2 = match(rotor2, RED, positionRotor1);

    printf("\n%c", reflect->glass[positionRotor2]);
     
    return 0; */
    char *text = (char *) malloc(MAX_INPUT_LENT);

    printf("Enigma Cifrer Program\n");
    printf("input>");
    gets(text);
    printf("%s, %d", text, strlen(text));
    return 0;
}