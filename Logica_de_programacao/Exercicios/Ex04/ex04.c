#include <stdio.h>
#include <stdlib.h>
#include "ex04.h"

const char* periodo(int hora){

    return  (hora >= 5 && hora <= 11) ? "Manha\n" :
            (hora >= 12 && hora <= 17)? "Tarde\n" :
            (hora >= 18 && hora <= 22)? "Noite\n" :
            (hora == 23 || hora == 24 || hora >= 1 && hora <= 4)? "Madrugada\n" :
            "Hora incorreta.\n";

}