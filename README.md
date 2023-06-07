# ESTRUCTURA DE DATOS Y ALGORITMOS 2
Proyecto (RED SOCIAL): LET'S TRAVEL

#### NOMBRE DE LOS ESTUDIANTES:
Belén Méndez Echeverría

Carla Otaola Bernal

Ferran Mogas Ko

#### NIA DE LOS ESTUDIANTES:
268943

266426

268726

#### FECHA DE ENTREGA:
08-06-2023

## INFORME DEL PROYECTO:
### CONTENIDO:
1. Introducción

2. Objetivos del proyecto
   
   2.1 Se han cumplido los objetivos obligatorios 
   
   2.2 Se han cumplido los objetivos deseables
   
   2.3 Se han cumplido los objetivos de exploración

3. Solución
   
   3.1 Arquitectura del sistema
   
   3.2 Gestión de errores
   
   3.3 Diseño del modelo de datos
   
   3.4 Descripción y procesamiento del conjunto de datos

4. Referencias

5. Partes del código hechas con ayuda de IA

### INTRODUCCIÓN: 

Esta red social tiene como objetivo conectar a viajeros de todo el mundo, permitiéndoles compartir experiencias, recomendar destinos, planificar itinerarios y establecer conexiones significativas con personas apasionadas por los viajes. La inspiración para desarrollar esta red social de viajes surge de la pasión por explorar el mundo y la creencia en el poder de los viajes para enriquecer nuestras vidas. El deseo de crear una comunidad global donde los viajeros puedan conectarse, compartir conocimientos y descubrir nuevas aventuras impulsa el desarrollo de esta plataforma. Se inspira también en la necesidad de superar las barreras geográficas y culturales, permitiendo a las personas explorar destinos desconocidos, obtener información relevante y conectarse con personas que comparten su amor por los viajes. Se busca crear un espacio virtual donde los viajeros puedan encontrar inspiración, recibir recomendaciones personalizadas y construir relaciones significativas con otros amantes de los viajes. Se promueve fomentar la diversidad cultural, promoviendo la comprensión mutua y el intercambio de experiencias entre personas de diferentes países, trasfondos y perspectivasHemos logrado conseguir los objetivos que se detallan a continuación. Muchos de ellos han costado mucho trabajo y esfuerzo en desarrollarlos, no obstante, siempre es mejorable. El informe sigue una estrcutura clara, basándose en el desarollos de los objetivos obligatorios, deseables y de exploración.

### OBJETIVOS DEL PROYECTO:


#### SE HAN CUMPLIDO LOS OBJETIVOS OBLIGATORIOS:

##### Implementar como mínimo una Lista (List), una Pila (Stack) y una Cola (Queue) funcionales como parte de alguna de las funcionalidades del proyecto:

### LIST:
**VISTA GENERAL:**

'list': Es un puntero a una estructura de datos 'UsersList'. Representa la lista de usuarios y se utiliza como parámetro en las funciones.

'user': Es un puntero a una estrutura de datos 'User'. Representa un usuario que se agrega a la lista.

'node': Es un puntero a una estructura de datos 'UsersListNode'. Representa un nodo en la lista y se utiliza para agregar usuarios a la lista.

La estructura de datos utilizada es una lista doblemente enlazada ('UserList'). Cada nodo ('UserListNode') contiene un puntero al usuario y punteros al siguiente nodo ('next') y al nodo anterior ('prev').

El comportamineto esperado de las funciones es el siguiente:

'init_users_list': Iniciliza los valores de la lista. Establece los punteros 'first' y 'last' en nulo, el tamaño en cero y el indicador de lista ordenada como falso.

'add_user_to_list': Agrega un usuario a la lista. Crea un nuevo nodo, ajusta los punteros según si la lista está vacía o no, actualiza el tamaño y el indicador de lista ordenada.

'show_all_users_in_list': Muesttra todos los usuarios de la lista por su nombre de usuario.

'clear_users_list': Elimina todos los nodos de la lista.Si 'destroy_users' es verdadero, también detsruye los usuarios llamando a 'destroy_user'. Luego, llama a 'init_users_list' para restablecer la lista a su estado inicial.

La complejidad de estas operaciones depende del tamaño de la lista. Las operaciones dee agregar un usuario a la lista ('add_user_to_list') y mostrar todos los usuarios en la lista ('show_all_users_in_list') tienen una complejidad de O(1) en promedio, ya que se realizan en tiempo constante independientemente del tamaño de la lista. En cambio, la operacion de eliminar todos los usuarios de la lista ('clear_users_list') tiene una complejidad de O(n), donde n es el número de nodos en la lista. Esto se debe a que debe iterar sobre tods los nodos de la lista para liberar la memoria y restablecer la lista.

Limitaciones o posibles mejoras: Sería útil añadir verificaciones de puntero nulo y manejo de errores para evitar comportamientos inesperados.

**TIEMPO:** 50 min

**UBICACIÓN:** Archivo: *'user.c'* líneas 115-165

### STACK:
**VISTA GENERAL:** 

La funcionalidad 'UsersStack' es una estructura que representa la pila de usuarios. Tiene un puntero llamado 'top' que apunta al nodo superior de la pila. 

*UsersStackNode* es una estructura que representa un nodo en la pila. Contiene un punturo al usuario y un puntero al siguiente nodo en la pila.

*User* Es una estructura que representa a un usuario. Los detalles de esta estructura se encuentran en archivo: 'user'

El propósito de este código es proporcionar operaciones básicas de una pila para gestionar usuarios. Dichas operaciones son: Inicializar la pila de usuarios, estableciendo el puntero 'top' en NULL (*init_users_stack*). Verificar si la pila está vacía (*users_stack_empty*) Agregar un usuario a la parte superior de la pila, crear un nuevo nodo, asignando el usuario al nodo y ajustando los punteros para que el nuevo nodo se convierta en el nodo superior de la pila (*pop_users_stack*). Delvolver el usuario en la parte superior de la pila sin eliminarlo (*get_users_stack_top*). Vaciar la pila de usuarios liberando todos los nodos (*clear_users_stack*), luego llama a la función *init_users_stack* para restablecer la pila a su estado inicial. Por último, *fill_stack_with_n_random_users_from_list* llena la pila con 'n' usuarios selecionados aleatoriamente de una lista de usuarios '*UserList*'. Utiliza la función '*random_int*' para generar un índice aleatorio y busca el nodo correspondiente en la lista para agregarlo a la pila.

La complejidad de este algoritmo depende de la cantidad de usuarios 'n' y el tamañano de la lista. Si asumimos que la función 'random_int' tiene un tiempo constante de O(1) y la búsqueda en la lista tiene un tiempo lineal de O(n), el rendimiento general sería O(n^2).

Dentro de este objetivo pueden haber las siguientes limitaciones o posibles mejoras: El código no realiza comporbaciones para garantizar que los punteros no sean nulos antes de realizar operaciones. Sería útil añadir verificaciones de puntero nulo y manejo de errores para evitar comportamientos inesperados.

**TIEMPO:** 180 min

**UBICACIÓN:** Ficheros: *'user_stack.c' y 'user_stack.h'*

### QUEUE:
**VISTA GENERAL:**

**TIEMPO:**

**UBICACIÓN:**

##### Implementar funcionalmente uno de los algoritmos de búsqueda que se verán dentro del curso (LinearSearch o BinarySearch):
**VISTA GENERAL:**

'*list*': Es un puntero constante a una estructura de datos: '*UsersList*'.Representa la lista de usuarios en la cual se realizará la búsqueda.

'*username*': Es un puntero constante a una cadena de caracteres ('char'). Representa el nombre del usuario que se busca en la lista.

'*node*': Es un puntero a un nodo de la lista ('UsersListNode'). Se utiliza para iterar sobre los nodos de la lista durante la búsqueda.

'*node->user->username*': Accede al nombre de usuario almacenado en el nodo actual de la lista.

La estructura de datos utilizada es una lista enlazada ('UserList) que contiene nodos ('UsersListNode') que a su vez almacenan usuarios ('User').

El algoritmo utilizado para buscar un usuario por nombre de usuario es un enfoque de búsqueda lineal. Itera sobre los nodos de la lista, comparando el nombre de usuario del nodo actual con el nombre de usuario buscado utilizando la función 'strcmp' para determinar si son iguales.

La complejidad del algoritmo de búsqueda lineal es O(n), donde n es el número de nodos en la lista. Esto significa que el tiempo de ejecución del algoritmo aumenta de manera proporcional al tamaño de la lista.

En este objetivo se encuentran las siguientes limitaciones o posibles mejoras: La búsqueda lineal puede ser ineficiente en grandes listas, ya que se debe iterar sobre todos los elementos hasta encontrar el usuario o llegar al final de la lista. El algoritmo tampoco maneja casos en los que el nombre de usuario buscado es nulo. Una mejora adicional podría ser implementar algún tipo de índice o estructura de datos auxiliar para acelerar las búsquedas por nombre de usuario.

**TIEMPO:** 20 min

**UBICACIÓN:** Fichero: *'user.c'* líneas: 172-179.

##### Implementar funcionalmente uno de los algoritmos de ordenamiento que se verán a lo largo del curso (InsertionSort, BubbleSort, MergeSort o QuickSort):
**VISTA GENERAL:**

**TIEMPO:**

**UBICACIÓN:**

##### Implementar o bien un Diccionario (Dictionary) o bien una tabla Hash (HashTable) funcionales:
**VISTA GENERAL:**

**TIEMPO:**

**UBICACIÓN:**

#### SE HAN CUMPLIDO LOS OBJETIVOS DESEABLES: 

##### Leer datos de una fuente externa como un archivo de texto o CSV (No implica guardado de datos):
**VISTA GENERAL:**

'f': Es un puntero 'FILE'. Representa el archivo CSV del cual se leerán los datos del usuario.

'user': Es un puntero a una estructura de datos 'User'. Representa el usuario que se está leyendo desde el archivo CSV.

'stop': Es una variable del tipo 'char'. Representa el carácter de parada que indica el final de un campo en el archivo CSV.

La estructura de datos utilizada es una estructura 'User', que contiene los campos 'username', 'born_year', 'email', 'current_location' y 'preferences'. Cada campo es un arreglo de caracteres ('char') que almacena la información correspondiente al usuario.

El algoritmo utilizado tiene como objetivo leer un usuario desde una fila en un archivo CSV. Sigue los siguientes pasos:

1. Crea un nuevo usuario utilizando la función 'create_user()', que devuelve un puntero a una estructura 'User' vacía. 
 
2. Lee el campo 'username' desde el archivo CSV utilizando la función 'read_csv_token(f, user->username)'. El carácter de parada ('stop') indica si se ha leído correctamente el campo. 

3. Si el campo no termina con el separador CSV esperado, se destruye el usuario creado anteriormente, se muestra un mensaje de error y se retorna un puntero nulo.

4. Los pasos 2 y 3 se repiten para los campos 'born_year', 'email', 'current_location' y 'preferences'. Se verifica que cada campo termine con el separador CSV esperado.

5. Finalmente, se verifica que la fila CSV termine con el carácter de fin de línea ('CSV_ENDLINE'). Si no es así, se destruye el usuario, se muestra un mensaje de error y se retorna un puntero nulo.

6. Si todo el proceso se realiza sin problemas, se retorna el puntero al usuario creado y leído correctamente desde el archivo CSV.

El comportamiento esperado del algoritmo es leer los campos del usuario desde la fila CSV y crear una estructura de usuario válida con la información correspondiente.

La complejidad del algoritmo depende del tamaño de la fila CSV y el número de campos que se deben leer. Cada llamada a las funciones 'read_csv_token' y 'read_csv_number' tiene una complejidad de O(m), donde m es la longitud del campo a leer.

Limitaciones o posibles mejoras: El algoritmo asume que el formato del archivo CSV es correcto y sigue una estructura predefinida. No se realizan validaciones exhaustivas para todos los posibles errores de formato. No se maneja el caso en el que no se pueda crear el usuario correctamente debido a problemas de memoria.

**TIEMPO:** 180 min

**UBICACIÓN:** Fichero: *'user.c'* líneas: 183-241

##### Red Social temática y con una capa de personalización a nivel conceptual:
**VISTA GENERAL:**

**TIEMPO:**

**UBICACIÓN:**

#### SE HAN CUMPLIDO LOS OBJETIVOS DE EXPLORACIÓN: 

##### Implementar funcionalidad show several random users, dentro de la funcionalidad de operar como un usuario específico:
**VISTA GENERAL:**

'users': Es un puntero a una estructura de datos 'UsersList'. Representa la lista de usuarios disponibles para enviar solicitudes de amistad.

'main_user': Es un puntero a una estructura de datos 'User'. Representa el usuario principal que enviará las solicitudes de amistad.

'stack': Es una estructura de datos de pila 'UsersStack'. Se utiliza para almacenar temporalmente usuarios seleccionados al azar de la lista de usuarios.

El algoritmo utilizado tiene como objetivo mostrar una serie de usuarios de la lista para que el usuario principal pueda enviarles solicitudes de amistad. Sigue los siguientes pasos:

1. Se inicializa una pila de usuarios (stack) utilizando la función init_users_stack.

2. Se llena la pila de usuarios con 3 usuarios seleccionados al azar de la lista de usuarios utilizando la función fill_stack_with_n_random_users_from_list.

3. Se muestra un mensaje introductorio al usuario principal.

4. Se inicia un bucle mientras la pila de usuarios no esté vacía.

5. Se extrae un usuario de la pila utilizando la función pop_users_stack.

6. Si el usuario extraído no es nulo, se muestra un menú al usuario principal para decidir si enviarle una solicitud de amistad.

7. El usuario principal puede seleccionar entre las opciones 1, 2 o 3: enviar solicitud, no enviar solicitud o cancelar.

8. Dependiendo de la opción seleccionada, se ejecutan diferentes acciones. Si se selecciona la opción 1, se agrega la solicitud de amistad utilizando la función add_user_friend_request. Si se selecciona la opción 3, se limpia la pila de usuarios utilizando la función clear_users_stack.

9. Si el usuario principal no ha seleccionado una opción válida, se muestra un mensaje de opción inválida.

10. El bucle continúa hasta que la pila de usuarios esté vacía.

11. Se muestra un mensaje de finalización.

El comportamiento esperado del algoritmo es mostrar al usuario principal una serie de usuarios y permitirle enviar solicitudes de amistad a los usuarios seleccionados.

La complejidad del algoritmo depende del número de usuarios en la lista y el número de usuarios seleccionados al azar (en este caso, 3). Si hay n usuarios en la lista, la complejidad sería O(n).

Limitaciones o posibles mejoras: No se realiza una validación exhaustiva de las entradas del usuario principal. Sería recomendable agregar comprobaciones adicionales para garantizar que se introduzcan valores válidos y manejar errores de entrada incorrecta.

**TIEMPO:** 30 min

**UBICACIÓN:** Fichero: *'main.c'* líneas: 41-84

##### Implementar las funcionalidades de lectura y guardado de datos (Información de los usuarios y sus contactos, y demás que se quiera añadir) desde un archivo externo (.txt o csv):
**VISTA GENERAL:**

'list': Es un puntero a una estructura de datos UsersList. Representa la lista de usuarios a la cual se agregarán los usuarios leídos desde el archivo CSV.

'filename': Es un puntero a una cadena de caracteres que contiene el nombre del archivo CSV.

'f': Es un puntero a FILE. Representa el archivo CSV que se abrirá para lectura

El algoritmo utilizado tiene como objetivo llenar la lista de usuarios ('list') a partir de un archivo CSV. Sigue los siguientes pasos:

1. Intenta abrir el archivo CSV en modo lectura utilizando la función 'fopen'.

2. Si la apertura del archivo no tiene éxito, muestra un mensaje de error indicando que el archivo no se encontró y devuelve la función.

3. Dentro de un bucle 'while', lee usuarios desde el archivo CSV utilizando la función 'read_user_from_csv_row'.

4. Si se pudo leer un usuario válido desde el archivo (es decir, el puntero al usuario no es nulo), se agrega a la lista utilizando la función 'add_user_to_list'.

5. El bucle continúa hasta que se alcanza el final del archivo ('feof' indica que no se pueden leer más datos).

6. Una vez que se han leído todos los usuarios del archivo CSV, se cierra el archivo utilizando la función 'fclose'.

El comportamiento esperado del algoritmo es llenar la lista de usuarios con los usuarios leídos desde el archivo CSV.

La complejidad del algoritmo depende del número de usuarios en el archivo CSV y el tiempo de ejecución de las funciones 'read_user_from_csv_row' y 'add_user_to_list'. Si hay n usuarios en el archivo, la complejidad sería O(n).

Limitaciones o posibles mejoras: No se realizan validaciones exhaustivas del formato y contenido del archivo CSV. Si el archivo no sigue el formato esperado, se pueden producir errores o comportamientos inesperados.

**TIEMPO:** 30 min

**UBICACIÓN:** Archivo: *'user.c'* líneas: 243-260

### SOLUCIÓN:

#### Arquitectura del sistema: 

En el cual, encontramos diferentes bloques:

Servidor: responsable de recibir y procesar las solicitudes de los clientes, gestionar la lógica empresarial y devolver las respuestas adecuadas. Gestiona la comunicación con los clientes a través de sockets y coordina las interacciones con las bases de datos. 
Base de datos: este componente almacena y recupera datos relacionados con las redes sociales, como perfiles de usuarios, publicaciones, amistades, etc. Gestión eficiente de datos utilizando un sistema de gestión de base de datos (DBMS). 
Clientes de Red: Aplicaciones que utilizan los usuarios para acceder a las redes sociales. Permite a los usuarios registrarse, iniciar sesión, encontrar amigos, publicar contenido y realizar otras actividades relacionadas con las redes sociales. Comunicándose con el servidor a través de la red.
Interfaz de Usuario (UI): Es la interfaz gráfica o textual con la que interactúan los usuarios para utilizar la red social. Ofrezca a los usuarios una forma intuitiva y fácil de usar para realizar acciones en las redes sociales, como ver publicaciones, comentar y enviar mensajes.

!(diagrama_1.png)

#### Gestión de errores: 

En este proyecto, los errores se han manejado usando técnicas de manejo de errores de C, y cuando ocurrieron errores, se usaron mecanismos tales como excepciones y códigos de error de retorno para indicar y manejar condiciones excepcionales. 

El razonamiento detrás del manejo de errores es asegurar que el sistema sea robusto y pueda manejar situaciones inesperadas o incorrectas. La detección y el manejo adecuados de errores evitan errores críticos y brindan una experiencia de usuario más confiable.

!


#### Diseño del modelo de datos: 

Tenemos una entidad de "Usuario" que almacena información sobre los usuarios registrados, como nombre de usuario, nombre, contraseña y fecha de registro. Existe una relación de "amigo" que conecta a dos usuarios y representa la amistad entre ellos. La entidad 'Publicaciones' almacena información sobre las publicaciones realizadas en la red social. Cada publicación tiene un identificador, un autor (una referencia al identificador del usuario) y un contenido. Descripción y procesamiento del conjunto de datos: 

#### Descripción y procesamiento del conjunto de datos: 
La descripción y el procesamiento de los conjuntos de datos utilizados en las redes sociales depende de los requisitos específicos del proyecto. Esto puede variar desde datos de usuario y perfil hasta publicaciones, comentarios y otras interacciones. Los conjuntos de datos se pueden almacenar en bases de datos, leer y procesar mediante consultas SQL o métodos de acceso a bases de datos específicas... 

### REFERENCIAS:
Esta sección tendría que incluir las referencias utilizadas en el informe. Estas referencias incluyen cualquier sitio web,
material de lectura, publicaciones o libros utilizados para la inspiración. **(Hacerlo al último, SOLO SI ES NECESARIO)**

### PARTES DEL CÓDIGO HECHAS CON AYUDA DE IA: **(Hacerlo al último, SOLO SI ES NECESARIO)**
