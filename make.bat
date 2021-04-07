gcc -c node.c
gcc -c list.c
gcc node.o list.o main.c -o main
del *o