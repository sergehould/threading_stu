/****************************************************************************
* 
*
*	Author				Date			Version
*				
*****************************************************************************/



#include <Windows.h>
#include "../header/public.h"
#include "../header/ncurses_init.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <curses.h>
#include <stdint.h>
#include <ctype.h>
#include <errno.h>
#include <sys/types.h>

#ifdef _WIN32
#define HAVE_STRUCT_TIMESPEC  // for win32 only. Because TIMESPEC is re-defined inside pthread.h
#endif
#include <pthread.h>


int main(void){
	/* Create and start your threads here */ 
	return 1;
	
}  
  
