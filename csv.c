#include "csv.h"


char read_csv_token(FILE* f, char* buffer) //Lee un token (una palabra) hasta que llegue a un separador y devuelve uno de los dos.
{
    int count = 0; //Para saber el número de caracteres que hemos leído  (hasta llegar a parar.
    int ch; //Guardaremos el resultado de la condición fgets.
    while ((ch = fgetc(f)) != EOF) //EOF = -1 //Estamos leyendo caracteres de uno en uno, y cada caracter se guarda en ch.
    {
        if (ch == CSV_SEPARATOR || ch == CSV_ENDLINE) //Leemos caracter a caracter. Cada vez que leo un caracter miro si es una coma o
            //un salto de linea, si es eso para de contar y devuelve el caracter que me ha hecho parar.
        {
            buffer[count] = '\0'; //'\0' final de un string
            return ch; //Si no lo es, guarda el caracter en el buffer y se suma uno en el contador.
        }
        else
        {
            buffer[count] = ch; //si hemos llegado al final del archivo, lo interpretaremos como un final de línea.
            count++; //count=tamaño de la palabra, siempre empieza en 0.
        }
    }

    return CSV_ENDLINE;
}

//La función atoi: función que pide un string y devuelve un entero. Si no es un número devuelve un 0.
//Si lo que tenemos que leer es un número:
char read_csv_number(FILE* f, int* number)
{
    char buffer[50];
    char stop = read_csv_token(f, buffer);
    *number = atoi(buffer);

    if (*number == 0)
        printf("[CSV number parser error]: Cannot concert '%s' to int.\n", buffer);

    return stop;
}


User* read_user_from_csv_row(FILE* f)
{
    User* user = create_user();

    char stop;

    stop = read_csv_token(f, user->username);

    if (stop != CSV_SEPARATOR)
    {
        destroy_user(user);
        printf("Invalid CSV row.\n");
        return NULL;
    }
    stop = read_csv_number(f, &user->born_year);

    if (stop != CSV_SEPARATOR)
    {
        destroy_user(user);
        printf("Invalid CSV row.\n");
        return NULL;
    }
    stop = read_csv_token(f, user->email);

    if (stop != CSV_SEPARATOR)
    {
        destroy_user(user);
        printf("Invalid CSV row.\n");
        return NULL;
    }
    stop = read_csv_token(f, user->current_location);

    if (stop != CSV_SEPARATOR)
    {
        destroy_user(user);
        printf("Invalid CSV row.\n");
        return NULL;
    }

    for (int i = 0; i < PREFERENCES_COUNT; ++i)
    {
        if (stop != CSV_SEPARATOR)
        {
            destroy_user(user);
            printf("Invalid CSV row.\n");
            return NULL;
        }
        stop = read_csv_token(f, user->preferences[i]);
    }

    if (stop != CSV_ENDLINE)
    {
        destroy_user(user);
        printf("Invalid CSV row 'endline'.\n");
        return NULL;
    }

    return user;
}

void fill_users_list_from_csv(UsersList* list, const char* filename)
{
    FILE* f = fopen(filename, "r");
    if (!f)
    {
        printf("CSV File '%s' not found.", filename);
        return;
    }

    while (!feof(f))
    {
        User* user = read_user_from_csv_row(f);
        if (user != NULL)
            add_user_to_list(list, user);
    }

    fclose(f);
}