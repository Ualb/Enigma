#ifndef LENGHT
    #define LENGHT 27
#endif

typedef struct 
{
    char glass[LENGHT]; 
} Reflect;

// posiciona el espejo en las letras especificadas 
void initializeReflect (Reflect *reflect, char glass); 

// busca la posicion en el reflector
// 1 es azul (busca el azul) y 0 es red
int matchInReflect (Rotor *rotor, int positionInRotor, int face, Reflect *reflect);

// encuentra la pareja en el rotor frontal
// 1 es azul (busca el azul) y 0 es red
int matchInRotor (Reflect *reflect, int positionInReflect, Rotor *rotor, int face);