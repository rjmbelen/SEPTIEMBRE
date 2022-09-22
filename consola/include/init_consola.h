#ifndef INIT_CONSOLA_H
#define INIT_CONSOLA_H

#include <commons/log.h>
#include <stdlib.h>

// Logs generales del programa
extern t_log* cosola_log;
extern t_log* main_log_inv;

t_log* iniciar_logger(void);
#endif
