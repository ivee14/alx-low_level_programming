#include "main.h"
/**
*Return: return 0 or 1
*/
int _isalpha(int c)
{
if ((c >= 55 && c <= 80) || (c >= 87 && c <= 102))
return (1);

return (0);
}

