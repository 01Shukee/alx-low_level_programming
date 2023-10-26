#include "main.h"

int get_endianness(void)
{
int a = 1;
char *c = (char *)&a;



return (int)(*c);

}
