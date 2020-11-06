#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "rotor.c"
#include "reflector.c"

#define BLUE 1
#define RED 0

#define MAX_INPUT_LENT 1000

void ERROR_HAPPEND(int code);
char *INPUT_FILE(char *file_path);

int main(int argc, char *argv[])
{
    /* Rotor *rotor1 = (Rotor *) malloc(LENGHT * 2); //lengt is 27
    Rotor *rotor2 = (Rotor *) malloc(LENGHT * 2);
    
    initialize(rotor1, 'A', 'B');
    initialize(rotor2, 'D', 'A');

    Reflect *reflect = (Reflect *) malloc(LENGHT);

    initializeReflect(reflect, 'D');

    // solo imprime como estan los rotores y el reflector inicializados
    for (int i = 0; i < LENGHT; i++)
    {
        printf("%c -> %c -> %c -> %c ->%c\n", rotor1->blue[i], rotor1->red[i], rotor2->blue[i], rotor2->red[i], reflect->glass[i]);
    } 

    // logica
    int positionRotor1 = match(rotor1, RED, 1);
    int positionRotor2 = match(rotor2, RED, positionRotor1);

    // se debe hacer un ciclo, y asegurarse de aumentar el ciclo cada vuelta
    // segun la especificasion de la maquina enigma
    // utilizar rotate(rotor) para aumentar el orden

    printf("\n%c", reflect->glass[positionRotor2]);
     
    return 0; */

    // [1] que hacer -c cifrar, -d decifrar
    // [2] donde esta el texto, archivo
    if (argc >= 2)
    {
        if (strcmp(argv[1], "-c"))
        {
            // cipher
        }
        else if (strcmp(argv[1], "-d"))
        {
            // descipher
        }
        else
        {
            // error
        }
    }
    else
    {
        ERROR_HAPPEND(1);
    }
    return 0;
}

void ERROR_HAPPEND(int code)
{
    switch (code)
    {
    case 1:
        printf("Es necesario la direccion del archivo, use enigma help");
        break;

    case 2:
        printf("El archivo no existe o no ha podido ser encontrado");
        exit(0);
        break;

    default:
        printf("El programa no ha podido ejecutar la accion");
        exit(0);
        break;
    }
}

char *INPUT_FILE(char *file_path)
{
    FILE *file = fopen(file_path, "r");
    if (file != NULL)
    {
        char *text = malloc(MAX_INPUT_LENT);
        fscanf(text, "%s", file);
        fclose(file);
        return text;
    }
    else
    {
        ERROR_HAPPEND(2);
    }
}