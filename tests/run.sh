clear

g++ -Wall -c print_a.c
g++ -L/usr/local/lib print_a.o -lgsl -lgslcblas -lm
./a.out
rm ./a.out
rm ./*.o