#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include <fcntl.h>
#include "library/libft.h"
 
int main(void)
{
    int filedesc = open("testfile.txt", O_WRONLY | O_CREAT);
 
    ft_putchar_fd('a', filedesc);
   
    return 0;
}