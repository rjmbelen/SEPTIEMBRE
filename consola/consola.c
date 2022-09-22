#include "include/consola.h"  //REVISAR TODOS LOS NUMERALES Y COMILLAS
// ./include/  AGREGAR A TODOS LOS MODS 
#define MODULENAME "CON"


t_log* consola_log;
t_log* main_log_inv;

// Esta implementación es para tener múltiples consolas. 
//Ejemplo de uso en la terminal: ./consola  home/utnso/archivo.config  home/utnso/archivo.dat

int main(int argc, char** argv) {

consola_log= iniciar_logger();










	return 0;
}


/*
//tp 0 

t_config* iniciar_config(void)
{
	t_config* nuevo_config = config_create("cliente.config");
	if(nuevo_config==NULL){
		printf("No se pudo encontrar la ubicacion/path del config\n");
		exit(1);
	}
	else{
		return nuevo_config;
	}
}


//tp hernan

void iniciar_logger() {
	log_consola = log_create("consola.log", "LOG_CONSOLA", 1, LOG_LEVEL_INFO);

	// Inicializo el semaforo para el log global y asi sincronizar. Ver si es necesario en este modulo!
	pthread_mutex_init(&semaforo_log, NULL);

}


*/
//tp 0 -- el que va


