#include "menu.h"


// UTILITY FUNCTIONS //

static void create_new_user(UsersList* users)
{
    User* user = create_user();

    show_fill_user_data_menu(user);
    add_user_to_list(users, user);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void show_main_menu(UsersList* users) //Controla el menú principal (nos dará las 4 opciones)
{
    int option = -1;  //Opción escogida por el usuario
    while (option != 5)
    {
        printf("Main menu:\n");
        printf("    1) Insert new user\n");
        printf("    2) Show all users\n");
        printf("    3) Operate as specific user\n");
        printf("    4) Show top 10 trending topics\n");
        printf("    5) Exit\n\n");

        option = read_option(); //Preguntar al usuario cual de las 4 opciones quiere operar
        switch (option) //Encadenar if else...
        {
            case 1: //Cuando options haya calculado el valor 1 (creará un nuevo usuario)
                create_new_user(users);
                break;

            case 2: //Cuando options haya calculado el valor 2 (mostrará todos los usuarios)
                show_all_users_in_list(users);
                break;

            case 3: //Cuando options haya calculado el valor 3 (operaremos como un usuario en concreto)
                show_user_menu(users);
                break;

            case 4: //Cuando options haya calculado el valor 4 (exit)
                trendings_print_top_10();
                break;

            case 5: break;

            default:
                printf("Invalid option.\n\n");
                break;
        }
    }
}