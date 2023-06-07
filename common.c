#include "common.h"

#include <time.h>


int random_int(int max)
{
    //Las variables estáticas funcionan de manera similar a las variables globales, pero su alcance se limita a la función en la que se definen.
    //Estas variables solo se inicializan una vez y luego la instrucción de asignación en su inicialización se ignora.
    //Conservan su valor anterior cada vez que se accede a la función.
    static bool first_time = true;
    if (first_time)
    {
        srand((unsigned int) time(NULL));
        first_time = false;
    }

    return rand() % max;
}

char read_csv_token(FILE* f, char* buffer) //Lee un token (una palabra) hasta que llegue a un separador y devuelve uno de los dos
{
    int count = 0; //Para saber el número de caracteres que hemos leído  (hasta llegar a parar)
    int ch; //Guardaremos el resultado de la condición fgetsc
    while ((ch = fgetc(f)) != EOF) //EOF = -1 //Estamos leyendo caracteres de uno en uno, y cada caracter se guarda en ch
    {
        if (ch == CSV_SEPARATOR || ch == CSV_ENDLINE) //Leemos caracter a caracter. Cada vez que leo un caracter miro si
            // es una coma o un salto de linea, si es eso para de contar y devuelve el caracter que me ha hecho parar.
        {
            buffer[count] = '\0'; //'\0' final de un string
            return ch;
        }
        else{ //Sino lo es, guarda el caracter en el buffer y se suma uno en el contador
            buffer[count] = ch;
            count++; //count=tamaño de la palabra, siempre empieza en 0.
        }
    }
    buffer[count] = ch; //si hemos llegado al final del archivo, lo interpretaremos como un final de línea.
    return CSV_ENDLINE;
}
//atoi: función que pide un string y devuelve un entero. Si no es un número devuelve un 0
//Si lo que tenemos que leer es un número:
char read_csv_number(FILE* f, int* number)
{
    char buffer[50];
    char stop = read_csv_token(f, buffer);
    *number = atoi(buffer);

    //La función atoi devuelve 0 en caso de error
    if (*number == 0)
        printf("[CSV number parser error]: Cannot concert '%s' to int.\n", buffer);

    return stop;
}
