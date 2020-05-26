#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "vec2.hpp"


TEST_CASE("vec2", "[Vec2]") {
    SECTION("test init") {
        Vec2 a = {};
        REQUIRE(a.x == Approx(0.0f));
        REQUIRE(a.y == Approx(0.0f));

        Vec2 b = { 5.1f, -9.3f };
        REQUIRE(b.x == Approx(5.1f));
        REQUIRE(b.y == Approx(-9.3f));
    }
    SECTION("test addition", "[Plus]"){
        Vec2 q = { 0.7f, 3.5f };
        Vec2 w = { 0.0f, 5.5f };
        Vec2 e = { -1.3f, 5.5f };
        
        e += w;

        REQUIRE(e.x == Approx(-1.3f));
        REQUIRE(e.y == Approx(11.0f));
    }
}

int main(int argc, char* argv[])
{
    return Catch::Session().run(argc, argv);
}
