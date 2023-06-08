#include "menu.h"


void show_fill_user_data_menu(User* user)
{
    int status = 0;

    while (status != 1)
    {
        printf("Write a username:\n");
        status = scanf("%s", user->username); //Si no detecta un string, devolverá un 0 en lugar de un 1.
        //Dado que esto ocurre dentro de un bucle while, si no se ha retornado un valor de 1, se volverá a solicitar información del usuario.
    }

    status = 0;
    while (status != 1)
    {
        printf("Write a born year:\n");
        status = scanf("%d", &user->born_year);
    }

    status = 0;
    while (status != 1)
    {
        printf("Write an email:\n");
        status = scanf("%s", user->email);
    }

    status = 0;
    while (status != 1)
    {
        printf("Write a current location:\n");
        status = scanf("%s", user->current_location);
    }

    for (int i = 0; i < PREFERENCES_COUNT; ++i)
    {
        status = 0;
        while (status != 1)
        {
            printf("Write preference %d/%d:\n", (i + 1), PREFERENCES_COUNT); //El 1r %d es la i y el 2n %d es PREFERENCES_COUNT.
            status = scanf("%s", user->preferences[i]); //user->preferences es un array de string, por lo que cogmos el de la posición i.
        }
    }

    printf("\n");
}