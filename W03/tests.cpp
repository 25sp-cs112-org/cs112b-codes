#define CATCH_CONFIG_MAIN

#include <string>
#include "Pair.h"
#include "catch.hpp"

using namespace std;


TEST_CASE("constructors"){
    SECTION("default"){
        // create an object of type Pair
        Pair p;
        // test if the object created gives me 0 and 0
        REQUIRE(p.getFirst() == 0);
        REQUIRE(p.getSecond() == 0);
    }
    SECTION("explicit-value constructor"){
        Pair p2(2,3);
        REQUIRE(p2.getFirst() == 2);
        REQUIRE(p2.getSecond() == 3);
    }
}

TEST_CASE("setters"){
    Pair p;
    p.setFirst(5);
    p.setSecond(8);
    
    REQUIRE(p.getFirst() == 5);
    REQUIRE(p.getSecond() == 8);
}

TEST_CASE("toString"){
    SECTION("tostring test"){
        Pair p(1,5);
        REQUIRE(p.toString() == "Pair: <1, 5>");
    }
}