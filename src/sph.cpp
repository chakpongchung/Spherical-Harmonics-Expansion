#include "sh.h"
#include <iostream>
using namespace std;

int main()
{

    printf(
        "*******************************************************************\n");
    printf("test program for spherical-harmonic expansion   -cpchung    	   \n");
    printf(
        "*******************************************************************\n");

    cout << "main\n";

    sh temp;

    // hello world
    temp.test();
    // wigner
    cout << temp.a(1, 1, 1, 1, 1, 0) << endl;
    // coefficient for spherical harmonics expansion
    temp.print_a();
    // check the abs diff btw LHS and RHS
    temp.check_diff();

    return 0;
}
