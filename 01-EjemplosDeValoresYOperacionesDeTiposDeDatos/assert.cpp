#include <iostream>
#include <iomanip>
#include <string>
#include <cassert>
#include <cstdio>


int main() {
    
    // bool
    assert (true);
    assert (false==false);
    assert (false!=true);
    assert (not false);
    assert (false == not true);
    assert (true and true);
    assert (false or true);
    assert ((false and false) == false);
    // double
    assert (2.0==1.0+1.0);
    assert (1.0==0.1*10.0);
    assert (1.0!=0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1);
    std::cout << std::setprecision(17);
    //char
    assert('a' != 'b');
    assert('d' + 'q' == 0xD5);
     assert( 'C' - 'A' == 2);
    assert('C' - 2 == 'A');
    assert('C' + 2 == 'E');
    assert('C' - 2 == 65);
    assert('C' - 2 == 65 and 'C' - 2 == 'A');
     //Int
    assert(123 == 123);
    assert (2 == 1 + 1);
    //string
    assert();

    //float y long double
    //Separadores para mejor visualización de números grandes '' y notación científica
    assert(0.23 > -1.0); 
    assert(3E2 == 3e2 );
    assert(3E2 == 3*10*10 );
    assert(3E2 == 300.0 );
    assert(3E6 == 3000000.0 );
    assert(3E6 == 3'000'000.0 );
    assert(2.0 + 1 == 3.0);
    assert(1.0);
  }
