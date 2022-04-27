#define CATCH_CONFIG_MAIN
#include "catch.h"
#include "Functions.cpp"
#include "Functions.h"

TEST_CASE( "Arguments initialized") {
    string a = "while";
    string b = "whil_";
    string c = "whil_e";

    REQUIRE( Check(a) == true);
    REQUIRE( Check(b) == false);
    REQUIRE( Check(c) == true);
}
