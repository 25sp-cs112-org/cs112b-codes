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
        Pair p2(1,5);
        REQUIRE(p2.getFirst() == 1);
        REQUIRE(p2.getSecond() == 5);
    }
}

TEST_CASE("operator +"){
    Pair p1(1, 2);
    Pair p2(2, 3);
    cout << p1 + p2 << endl;
}

// TEST_CASE("setters"){
//     Pair p;
//     p.setFirst("whatever");
//     p.setSecond("valentines");
    
//     REQUIRE(p.getFirst() == "whatever");
//     REQUIRE(p.getSecond() == "valentines");
// }

// TEST_CASE("toString"){
//     SECTION("tostring test"){
//         Pair p("I love you", "Amy");
//         REQUIRE(p.toString() == "Pair: <I love you, Amy>");
//         cout << p << endl;
//     }
// }

