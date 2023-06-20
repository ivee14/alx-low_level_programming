#include "main.h"
#include <unistd.h>
/**
*Return:on success 1.
*/
int _putchar(char c)
{
        return(write(1,&c, 1));
}
