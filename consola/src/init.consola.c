#include "../include/init_consola.h"  // de este modo, incluyo el header correspondiente
#include <commons/log.h>

t_log* iniciar_logger(void)
{
	t_log* consola_log = log_create("consola.log", "LOG_CONSOLA", 1, LOG_LEVEL_INFO);
//	if(consola_log==NULL){
//		printf("No se pudo crear el logger \n");
//		exit(1);
//	}
//	else{
//		return consola_log;
//	}
}


