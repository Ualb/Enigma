#ifndef LENGHT
    #define LENGHT 27
#endif

#include "rotor.h";

typedef struct 
{
    char glass[LENGHT]; 
} Reflect;

// posiciona el espejo en las letras especificadas 
void initialize (Reflect *reflect, char glass); 

int matchReflect (Rotor *rotor, int positionInRotor, int face, Reflect *reflect);

// encuentra la pareja en el rotor frontal
// 1 es azul (busca el azul) y 0 es red
int matchFaceInRotor (Reflect *reflect, int positionInReflect, Rotor *rotor, int face);