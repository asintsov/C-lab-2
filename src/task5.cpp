#include <stdio.h>
#include "task5.h"
#include <stdlib.h>

char random(char r)
{
    switch (r)
    {
    case '0':
        return rand() % ('Z' - 'A' + 1) + 'A';
        break;
    case '1':
        return rand() % ('z' - 'a' + 1) + 'a';
        break;
    case '2':
        return rand() % ('9' - '0' + 1) + '0';
        break;
    }
}

char* password(char* line)
{
    for(int i=0; i<9; i++)
    {
        char r = rand() % ('2' - '0' + 1) + '0';
        line[i] = random(r);
    }
    line[9-1] = '\0';
    
    return line;
}
