#define CATCH_CONFIG_MAIN
#include <sstream>
#include <stdexcept>

#include "List.h"
#include "catch.hpp"
using namespace std;

TEST_CASE("constructors and prepend") {
    SECTION("default") {
        List<int> p;
        REQUIRE(p.getSize() == 0);
    }
    SECTION("prepend") {
        List<int> p;
        p.prepend(11);
        REQUIRE(p.getSize() == 1);
        p.prepend(22);
        REQUIRE(p.getSize() == 2);
        REQUIRE(p.getFirst() == 22);
    //     REQUIRE(p.getItem(1) == 22);
    //     PyList p2(p);
    //     REQUIRE(p2.getSize() == 2);
    //     REQUIRE(p2.getItem(0) == 11);
    //     REQUIRE(p2.getItem(1) == 22);

    //     p.setItem(0, 33);
    //     REQUIRE(p2.getItem(0) == 11);
    //     p2.append(44);
    //     REQUIRE(p.getSize() == 2);
    }
}

// TEST_CASE("setItem and getItem") {
//     SECTION("success") {
//         PyList p;
//         p.append(22);
//         // successful test: index 0
//         p.setItem(0, 11);
//         REQUIRE(p.getItem(0) == 11);
//     }
//     SECTION("test errors") {
//         PyList p;
//         REQUIRE_THROWS_AS(p.setItem(-1, 234), invalid_argument);
//         REQUIRE_THROWS_AS(p.setItem(5, 234), invalid_argument);
//         REQUIRE_THROWS_AS(p.getItem(-1), invalid_argument);
//         REQUIRE_THROWS_AS(p.getItem(5), invalid_argument);
//     }
// }

// TEST_CASE("append") {
//     SECTION("empty array") {
//         PyList p;
//         p.append(11);
//         REQUIRE(p.getItem(0) == 11);
//         REQUIRE(p.getSize() == 1);
//     }
//     SECTION("non-empty array") {
//         PyList p;
//         for (int i = 0; i < 1000; i++) {
//             p.append(i);
//             REQUIRE(p.getItem(i) == i);
//             // The size is always one bigger than the i-th item
//             REQUIRE(p.getSize() == i + 1);
//         }
//     }
// }

// TEST_CASE("injector operator") {
//     PyList p;
//     p.append(11);
//     p.append(22);
//     p.append(33);
//     p.append(44);
//     ostringstream s;
//     s << p;
//     REQUIRE(s.str() == "[11, 22, 33, 44, ]");
// }

// TEST_CASE("operator[]"){
//     PyList p;
//     p.append(10);
//     p.append(20);
//     p.append(30);
//     p.append(40);
//     REQUIRE(p[3] == 40);
// }

// TEST_CASE("removeAt"){
//     PyList p;
//     p.append(10);
//     p.append(20);
//     p.append(30);
//     p.append(40);
//     p.removeAt(1);
//     REQUIRE(p[1] == 30);
//     REQUIRE(p.getSize() == 3);
// }

// TEST_CASE("Fraol's test"){
//     PyList p;
//     p.append(10);
//     p.append(20);
//     p.append(30);
//     p.append(40);
//     p.testFraol(0);
// }