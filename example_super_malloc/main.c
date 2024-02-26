#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void *super_malloc(size_t len)
{
    static int call = 0;

    if (call++ < 100)
        return (malloc(len));
    else
        return (NULL);
}

int super_write(int fd, const unsigned char *buffer, int len)
{
    static int call = 0;

    if (call++ < EXPLOSION_WRITE)
        return (write(fd, buffer, len));
    else
        return (-1);
}

#include <limits.h>
#include "libftprintf.h"

// \xf pour test injecter val < 0 , $?
int main(void)
{
    return (ft_printf("sdgkljsdfglksdfjgsldkfjgsdflkgjsdf;likjgsdf;kljg"));
}
