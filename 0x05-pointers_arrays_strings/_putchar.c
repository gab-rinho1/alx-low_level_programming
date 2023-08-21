#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @C: The character to print
 * REturn: On success 1.
 * On erro, -1 is return and erro is properly.
 */

int _putchar(char c)

{
        return (write(1,&c,1));

}
