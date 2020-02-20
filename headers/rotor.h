#ifndef LENGHT
    #define LENGHT 27
#endif

typedef struct 
{
    char blue[LENGHT];
    char red[LENGHT];
} Rotor;

// posiciona las caras del rotor en las letras especificadas
// blue es la cara izquierda del rotor 
// red es su contracara derecha
void initialize (Rotor *rotor, char blue, char red);

// gira el rotor o hace avanzar en una posicion
void rotate (Rotor *rotor);

// encuentra la pareja del color opuesto
// 1 es azul (busca el azul) y 0 es red
int match (Rotor *rotor, int face, int position);