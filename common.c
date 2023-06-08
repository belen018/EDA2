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


int read_option(void)
{
    int value;
    if (scanf("%d", &value) != 1) //La función scanf devuelve un valor numérico que indica el número de elementos que ha podido escanear correctamente.
        //Si ha logrado escanear un elemento, el valor de retorno será 1.
        return -1;

    consume_stdin();

    return value;
}

void consume_stdin()
{
    char c;
    while ((c = getchar()) && (c != '\n') && (c != EOF));
}