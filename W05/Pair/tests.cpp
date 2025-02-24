#define CATCH_CONFIG_MAIN

#include <string>
#include "Pair.h"
#include "catch.hpp"

using namespace std;


TEST_CASE("constructors"){
    SECTION("default"){
        // create an object of type Pair
        Pair<int> p;
        // test if the object created gives me 0 and 0
        REQUIRE(p.getFirst() == 0);
        REQUIRE(p.getSecond() == 0);
    }
    SECTION("explicit-value constructor"){
        Pair<int> p2(1,5);
        REQUIRE(p2.getFirst() == 1);
        REQUIRE(p2.getSecond() == 5);
    }
}

TEST_CASE("operator +"){
    Pair<int> p1(1, 2);
    Pair<int> p2(2, 3);
    cout << p1 + p2 << endl;
}

TEST_CASE("setters"){
    Pair<string> p;
    p.setFirst("whatever");
    p.setSecond("valentines");
    
    REQUIRE(p.getFirst() == "whatever");
    REQUIRE(p.getSecond() == "valentines");
}

TEST_CASE("toString"){
    SECTION("tostring test"){
        Pair<string> p("I love you", "Amy");
        REQUIRE(p.toString() == "Pair: <I love you, Amy>");
        cout << p << endl;
    }
}

TEST_CASE("doubles"){
    SECTION("default doubles"){
        Pair<double> p;

        REQUIRE(p.getFirst() == 0.0);
        REQUIRE(p.getSecond() == 0.0);
    }
}


TEST_CASE("pairs of dispairs"){
    Pair<Pair<int>> p;
    p.setFirst(Pair<int>(1,2));
    p.setSecond(Pair<int>(3,4));

    cout << p;

}