#include "user_list.h"
#include "user.h"


// UTILITY FUNCTIONS //

static UsersListNode* find_node(const UsersList* list, const char* username)
{
    for (UsersListNode* node = list->first; node != NULL; node = node->next)
        if (strcmp(node->user->username, username) == 0)
            return node;

    return NULL;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void init_users_list(UsersList* list) //Dar los valores iniciales a la list
{
    list->first = NULL;
    list->last = NULL;
    list->size = 0;
}

void add_user_to_list(UsersList* list, User* user) //Primero creamos un nodo y luego miramos si la listá esta vacía.
// Si está vacía, el nuevo nodo será el primero.
{
    UsersListNode* node = (UsersListNode*)malloc(sizeof(UsersListNode));
    node->user = user;
    node->next = NULL;

    if (list->first == NULL) //o list->last == NULL o list->size = 0
    {
        list->first = node;
        list->last = node;
        node->prev = NULL;
    }
    else
    {
        list->last->next = node;
        node->prev = list->last;
        list->last = node;
    }
    list->size++;
}

bool remove_user_from_list(UsersList* list, const char* username, bool delete_user)
{
    UsersListNode* node = find_node(list, username);
    if (node == NULL)
        return false;
}

void show_all_users_in_list(const UsersList* list)
{
    printf("All users:\n");
    for (UsersListNode* node = list->first; node != NULL; node = node->next)
        printf("    - %s\n", node->user->username);
    printf("\n");
}

void clear_users_list(UsersList* list, bool destroy_users)
{
    for (UsersListNode* node = list->first, *next; node != NULL; node = next)
    {
        next = node->next;
        if (destroy_users)
            destroy_user(node->user);
        free(node);
    }

    init_users_list(list);  //Usamos la función init_user_list() para inicializar los valores.
}

size_t users_list_size(const UsersList* list) { return list->size; } //Pide una lista; devuelve size_t.

bool users_list_empty(const UsersList* list) { return list->size == 0; }

User* search_user_by_username(const UsersList* list, const char* username) //Pide una lista; devuelve bool.
{
    UsersListNode* node = find_node(list, username);
    return node != NULL ? node->user : NULL;
}