This is a project for spherical harmonics expansion and the general solution of the inner product of rotational gradient operator.

The core algorithm is now implemented with boost and GNU scientific library in C/C++ and SymPy in python.

The relevant notations used and derivatiosns are attaced in the corresponding folders here.
A corresponding detailed ipython notebook will be uploaded once finished

To use the code-snippets in linux, you can run it in the terminal with

# source compile.txt

To use test the whole program, you can go to the src folder in the terminal, then
├── Makefile
├── sh.cpp
├── sh.h
├── sph
└── sph.cpp

# make

LIBRARIES PREQUISITE:

Boost C++ Libraries 
www.boost.org/
GSL - GNU Scientific Library - GNU Project
www.gnu.org/software/gsl/
SymPy
http://www.sympy.org/

The current folder structure is:

├── code-snippets
│   ├── assert.cpp
│   ├── check_diff.cpp
│   ├── compile-print_a.txt
│   └── print_a.c
├── derivation
│   ├── draft.pdf
│   ├── identity.pdf
│   └── result.pdf
├── notations
│   ├── 1.pdf
│   ├── 2.pdf
│   ├── 3.pdf
│   ├── dot_product.pdf
│   └── expansion.pdf
├── notes.pdf
├── README.txt
└── src
    ├── Makefile
    ├── sh.cpp
    ├── sh.h
    ├── sph
    └── sph.cpp



It would be nice to know if you can compile the latest GSL library on Windows machine with Visual Studio.

Please send email to chakpongchung@gmail.com should you encounter any trouble using the code.

