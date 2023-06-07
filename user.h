#ifndef __USER_H__
#define __USER_H__

#include "common.h"

#define MAX_STRING_LEN 256 //la longitud máxima de los strings
#define PREFERENCES_COUNT 5 //cada usuario tiene que tener 5 preferencias 


struct User; //Estamos afirmando la existencia de un individuo conocido como "user" cuyas características específicas desconocemos, sin embargo, está presente.

typedef struct UsersListNode {
    struct User* user;
    struct UsersListNode* next;
    struct UsersListNode* prev;
} UsersListNode;

typedef struct {
    UsersListNode* first;
    UsersListNode* last;
    size_t size;
    bool sorted;
} UsersList;


typedef struct User {
    char username[MAX_STRING_LEN];
    int born_year;
    char email[MAX_STRING_LEN];
    char current_location[MAX_STRING_LEN];
    char preferences[PREFERENCES_COUNT][MAX_STRING_LEN];

    UsersList friend_requests;
} User;



// User FUNCTIONS /////////////////////////////////////////////////////////////////////////////

void init_user(User* user);

User* create_user();
void destroy_user(User* user);

const char* get_user_username(const User* user); //Tenemos una función que facilita la inicialización de un usuario.
//Esta función nos proporciona la preferencia de un usuario específico (user* u) en base a un índice dado (int idx).
// Realizamos cálculos con punteros, ya que si omitimos el asterisco (*) estaríamos copiando el contenido de la estructura.
void set_user_username(User* user, const char* username);

int get_user_born_year(const User* user);
void set_user_born_year(User* user, int year);

const char* get_user_email(const User* user);
void set_user_email(User* user, const char* email);

const char* get_user_current_location(const User* user);
void set_user_current_location(User* user, const char* location);

const char* get_user_preference(const User* user, size_t index);
void set_user_preference(User* user, size_t index, const char* preference);

void add_user_friend_request(User* user, User* friend_request);

const UsersList* get_user_friend_requests(const User* user);

void clear_user_friend_requests(User* user);


void show_fill_user_data_menu(User* user); //genera un formulario

// /////////////////////////////////////////////////////////////////////////////////////////////



// UsersList FUNCTIONS ////////////////////////////////////////////////////////////////////////

void init_users_list(UsersList* list); //inicializar la lista

void add_user_to_list(UsersList* list, User* user); //añadir un usuario a la lista

void show_all_users_in_list(const UsersList* list); //nos muestra la lista

void clear_users_list(UsersList* list, bool destroy_users); //borrar todos los elementos de la lista

size_t users_list_size(const UsersList* list);

bool users_list_empty(const UsersList* list);

User* search_user_by_username(const UsersList* list, const char* username);


User* read_user_from_csv_row(FILE* f);

void fill_users_list_from_csv(UsersList* list, const char* filename);

// /////////////////////////////////////////////////////////////////////////////////////////////


#endif //__USER_H__


