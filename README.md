spherical harmonics expansion and the general solution of the scalar product of rotational gradient operator.
========================================================================


TUTORIAL
--------


http://nbviewer.jupyter.org/github/chakpongchung/spherical-harmonics-expansion/blob/master/Master-Project.ipynb


USE CASES:
----------

One of the use cases we find is in nematic polymer simulation. We used it to find out the parameters that can coverge to  periodic pattern for 1D sturcture.

DEMO:
https://drive.google.com/drive/folders/0B07OecC53Z0dMnpnbVpqNjV4VkE



The core algorithm is now implemented with boost and GNU scientific library in C/C++. It is now used SymPy in python since SciPy 2015.
http://docs.sympy.org/dev/aboutus.html#sympy-development-team

The relevant notations used and derivatiosns are attaced in the corresponding folders here.


To use the code-snippets in linux, you can run it in the terminal with
$ bash ./run.sh

To test, go to the src folder and:
$ make


LIBRARIES DEPENDENCIES:
-----------------------

Boost C++ Libraries 
www.boost.org/

GSL - GNU Scientific Library - GNU Project
www.gnu.org/software/gsl/

SymPy
http://www.sympy.org/

Please send email to chakpongchung@gmail.com if you have questions.

