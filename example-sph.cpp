#include <boost/lambda/lambda.hpp>
#include <boost/math/special_functions/spherical_harmonic.hpp>
#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;
int main()
{
    using namespace boost::lambda;
    using namespace boost::math;
    //typedef std::istream_iterator<int> in;

    //std::for_each(
        //in(std::cin), in(), std::cout << (_1 * 3) << " " );

    double a=spherical_harmonic_r(0,0,0,0);

    cout<<a<<endl;
}