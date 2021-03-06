/** $Id: debug.h 1182 2008-12-22 22:08:36Z dchassin $
	Copyright (C) 2008 Battelle Memorial Institute
	@file debug.h
	@version $Id: debug.h 1182 2008-12-22 22:08:36Z dchassin $
	@addtogroup debug
	@ingroup core
 @{
 **/

#ifndef _DEBUG_H
#define _DEBUG_H

void exec_sighandler(int sig);
int exec_debug(struct sync_data *data, int pass, int index, OBJECT *obj);
char *strsignal(int sig);

#endif
/**@}*/
