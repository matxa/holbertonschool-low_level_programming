#!bin/bash
gcc -wall -werror -wextra -c *.c
ar rc liball.a *.o
