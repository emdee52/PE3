#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "pe3_references.h"
#include <iostream>

//9,11,14,16

TEST_CASE ( "increment with pointer", "[9]") { 
  int x = 0;
  int * y = &x;
  increment(y);
  REQUIRE( x == 1 ); // original x should be updated
}

TEST_CASE ( "increment with reference", "[11]") { 
  int x = 3;
  int &y = x;
  increment2(y);
  REQUIRE( x == 4 ); // original x should be updated
}

TEST_CASE ( "increment output parameter", "[14]") { 
  int x = 5;
  int *y = &x;
  int &z = x;
  increment3(z, y);
  REQUIRE( x == 6 ); // original x should be updated
}

TEST_CASE ( "class overload", "[16]") { 
    Foo bar1(100);
    Foo bar2(100);

    REQUIRE( bar1.get_num() == bar2.get_num() ); // should be equal

}