#include <stdio.h>
#include <gsl/gsl_sf_coupling.h>


int
main (void)
{
  //double x = 5.0;
  //double y = gsl_sf_bessel_J0 (x);
  double z= gsl_sf_coupling_3j(2*2,2*6,2*4,0,0,0);
  //printf ("J0(%g) = %.18e\n", x, y);
  printf("result is:  %.64f \n",z);
  return 0;
}