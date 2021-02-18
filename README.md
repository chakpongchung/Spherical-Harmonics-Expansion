spherical harmonics expansion and the general solution of the inner product of rotational gradient operator.
========================================================================


TUTORIAL
--------


https://nbviewer.jupyter.org/github/chakpongchung/Spherical-Harmonics-Expansion/blob/master/derivation.ipynb


![Image of Yaktocat](http://stsdas.stsci.edu/download/mdroe/plotting/_images/entry1.png)


USE CASES:
----------

One of the use cases we find is in nematic polymer simulation. We used it to find out the parameters that can coverge to  periodic pattern for 1D sturcture.

DEMO:  
https://drive.google.com/drive/folders/0B07OecC53Z0dMnpnbVpqNjV4VkE



The core algorithm is now implemented(with minimal dependencies) with Boost C++ Libraries and GNU Scientific Library(GSL) in C/C++. It can also be used with SymPy in Python since SciPy 2015.  
http://docs.sympy.org/dev/aboutus.html#sympy-development-team

The relevant notations used and derivatiosns are attaced in the corresponding folders here.


To test the code-snippets in linux, you can run it in the terminal with:

    tests$ bash ./run.sh


To use, go to the src folder and:

    src$ make


LIBRARIES DEPENDENCIES:
-----------------------
Updates:  
starting from c++17, Associated Legendre Polynomials(hence the function for Spherical Harmonics) are supported in C++17  .

Boost C++ Libraries 
www.boost.org/

GSL - GNU Scientific Library - GNU Project
www.gnu.org/software/gsl/

SymPy
http://www.sympy.org/

Please email to chakpongchung@gmail.com if you have any questions.

