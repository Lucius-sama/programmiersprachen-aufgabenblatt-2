#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "vec2.hpp"
#include "mat2.hpp"

TEST_CASE("vec2", "[Vec2]") 
{
    SECTION("test init") 
    {
        Vec2 a = {};
        REQUIRE(a.x == Approx(0.0f));
        REQUIRE(a.y == Approx(0.0f));

        Vec2 b = { 5.1f, -9.3f };
        REQUIRE(b.x == Approx(5.1f));
        REQUIRE(b.y == Approx(-9.3f));
    }
    SECTION("test addition", "[Plus]")
    {
        Vec2 w = { 0.0f, 5.5f };
        Vec2 e = { -1.3f, 5.5f };
        
        e += w;

        REQUIRE(e.x == Approx(-1.3f));
        REQUIRE(e.y == Approx(11.0f));
    }
    SECTION("test subtraction", "[Minus]") 
    {
        Vec2 w = { -3.0f, 2.0f };
        Vec2 e = { -5.0f, 5.5f };

        e -= w;

        REQUIRE(e.x == Approx(-2.0f));
        REQUIRE(e.y == Approx(3.5f));
    }
    SECTION("test multiplication", "[mal]") 
    {
        Vec2 e = { 0.0f, -4.0f };
        float x = 4.0f;
        
        e *= x;

        REQUIRE(e.x == Approx(0.0f));
        REQUIRE(e.y == Approx(-16.0f));
    }
    SECTION("test division", "[geteilt, lol]") 
    {
        Vec2 e = { 40.0f, -4.0f };
        float xvideos = 4.0f;
        float niklas = 0;               //Das ist witzig weil Niklas ist eine Null.

        e /= xvideos;

        REQUIRE(e.x == Approx(10.0f));
        REQUIRE(e.y == Approx(-1.0f));

        e /= niklas;

        REQUIRE(e.x == Approx(10.f));
        REQUIRE(e.y == Approx(-1.0f));
    }
    SECTION("test adding Vecs 2gether", "[now there is two of them]")
    {
        Vec2 x{ 5.0f, -5.5f };
        Vec2 y{ 2.5f, -4.5f };

        Vec2 z = x + y;
        Vec2 z2 = z + x;

        REQUIRE(z.x == Approx(7.5f));
        REQUIRE(z.y == Approx(-10.0f));
        REQUIRE(z2.x == Approx(12.5f));
        REQUIRE(z2.y == Approx(-15.5f));
    }
    SECTION("test subtracting Vecs", "[back 2 1]")
    {
        Vec2 s{ 6.0f, -3.3f };
        Vec2 t{ 6.1f, -8.1f };

        Vec2 f = s - t;
        Vec2 u = f - s;

        REQUIRE(f.x == Approx(-0.1f));
        REQUIRE(f.y == Approx(4.8f));
        REQUIRE(u.x == Approx(-6.1f));
        REQUIRE(u.y == Approx(8.1f));
    }
    SECTION("VECMULT", "[idk]")
    {
        Vec2 x{ 3.0f, -4.5f };

        float f = 2.0;
        float niklas = 0.0;

        Vec2 z = x * f;
        Vec2 v = z * f;
        Vec2 y = niklas * x;

        REQUIRE(z.x == Approx(6.0f));
        REQUIRE(z.y == Approx(-9.0f));
        REQUIRE(v.x == Approx(12.0f));
        REQUIRE(v.y == Approx(-18.0f));
        REQUIRE(y.x == 0.0);
        REQUIRE(y.y == 0.0);
    }
    SECTION("VECDIV", "[idc]")
    {
        Vec2 x{ 3.0f, -4.5f };

        float v = 2.0;
        float niklas = 0.0;

        Vec2 z = x / v;
        Vec2 l = z / v;
        Vec2 y = x / niklas;

        REQUIRE(z.x == Approx(1.5f));
        REQUIRE(z.y == Approx(-2.25f));
        REQUIRE(l.x == Approx(0.75f));
        REQUIRE(l.y == Approx(-1.125f));
        REQUIRE(y.x == Approx(3.0f));
        REQUIRE(y.y == Approx(-4.5f));
    }
}

TEST_CASE("mat2", "[neo]")
{
    SECTION("test init") 
    {
        Mat2 a = {};
        REQUIRE(a.e_00 == Approx(1.0f));
        REQUIRE(a.e_10 == Approx(0.0f));
        REQUIRE(a.e_01 == Approx(0.0f));
        REQUIRE(a.e_11 == Approx(1.0f));

        Mat2 b = { 2.1f, 3.1f, 1.0f, 4.3f };
        REQUIRE(b.e_00 == Approx(2.1f));
        REQUIRE(b.e_10 == Approx(3.1f));
        REQUIRE(b.e_01 == Approx(1.0f));
        REQUIRE(b.e_11 == Approx(4.3f));
    }
    SECTION("test mat mult", "[neos_nightmare]")
    {
       
        }   
    
    
}

int main(int argc, char* argv[])
{
    return Catch::Session().run(argc, argv);
}
