#ifndef MENU_H_
#define MENU_H_

#include <stdio.h>
#include <stdlib.h>

#include "../lib/utilidade.h"

#ifdef _WIN32        // Caso o sistema operacional seja windows
#define clear "cls"  // o clear vai ser o comando cls
#endif
#if defined(unix) || defined(__unix__) || defined(__unix) || (defined(__APPLE__) && defined(__MACH__))  // Caso seja unix like
#define clear "clear"                                                                                   // o clear sera o comando clear
#endif

char menuInicial();

#endif

