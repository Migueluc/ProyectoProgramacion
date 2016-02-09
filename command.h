/* Implementa el intérprete de comandos
 * 
 * Autores: Miguel Marroyo, Raúl Navas
 * Version 1.0 
 * Fecha 5-2-2016
 */

#include <stdio.h>
#include <string.h>
#include "command.h"

#define CMD_LENGHT 30 /* Tamaño máximo para un comando*/

/* Declara la variable cmd y la inicializa a NO_CMD (-2). 
 * A continuación espera a que el usuario introduzca un comando. En función del comando introducido, asigna un valor a la variable cmd y lo devuelve. 
 * El valor de retorno será analizado por otras funciones para efectuar las acciones (next, back, quit)*/
T_Command get_user_input() {
    
    T_Command cmd = NO_CMD;
    char input[CMD_LENGHT] = "";
    
    if (scanf("%s", input) > 0) {
        if (!strcmp(input, "q") || !strcmp(input, "quit")) {
            cmd = QUIT;
        } else if (!strcmp(input, "n") || !strcmp(input, "next")) {
            cmd = NEXT;
        } else if (!strcmp(input, "b") || !strcmp(input, "back")) {
            cmd = BACK;
        } else {
            cmd = UNKNOWN;
        }
    }
    
    return cmd;
}
