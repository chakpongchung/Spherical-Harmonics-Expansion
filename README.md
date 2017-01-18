spherical harmonics expansion and the general solution of the scalar product of rotational gradient operator.
========================================================================


TUTORIAL
--------


http://nbviewer.jupyter.org/github/chakpongchung/spherical-harmonics-expansion/blob/master/Master-Project.ipynb


USE CASES:
----------

One of the use cases we find is in nematic polymer simulation. We used it to find out the parameters that can coverge to  periodic pattern for 1D sturcture.

https://drive.google.com/drive/folders/0B07OecC53Z0dMnpnbVpqNjV4VkE



The core algorithm is now implemented with boost and GNU scientific library in C/C++. It is now used SymPy in python since SciPy 2015.
http://docs.sympy.org/dev/aboutus.html#sympy-development-team

The relevant notations used and derivatiosns are attaced in the corresponding folders here.


To use the code-snippets in linux, you can run it in the terminal with
./run.sh

To use test the whole program, you can go to the src folder in the terminal, then
├── Makefile
├── sh.cpp
├── sh.h
├── sph
└── sph.cpp


LIBRARIES DEPENDENCIES:
-----------------------

Boost C++ Libraries 
www.boost.org/
GSL - GNU Scientific Library - GNU Project
www.gnu.org/software/gsl/
SymPy
http://www.sympy.org/

The current folder structure is:

├── code-snippets
│   ├── assert.cpp
│   ├── check_diff.cpp
│   ├── print_a.c
│   └── run.sh
├── Master-Project.ipynb
├── notations
│   ├── 1.pdf
│   ├── 2.pdf
│   ├── 3.pdf
│   ├── dot_product.pdf
│   ├── expansion.pdf
│   ├── identity.pdf
│   └── result.pdf
├── README.txt
└── src
    ├── Makefile
    ├── sh.cpp
    ├── sh.h
    ├── sph
    └── sph.cpp



Please send email to chakpongchung@gmail.com if you have questions.

