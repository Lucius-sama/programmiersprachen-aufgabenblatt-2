#include"vec2.hpp"
#include<iostream>



Vec2& Vec2::operator+=(Vec2 const& v) {
    x += v.x;
    y += v.y;

    return *this;
}
Vec2& Vec2::operator-=(Vec2 const& v) {
    x -= v.x;
    y -= v.y;

    return *this;
}
Vec2& Vec2::operator*=(float s) {
    x *= s;
    y *= s;

    return *this;
}
Vec2& Vec2::operator/=(float s) {
    if (s == 0.0) {

        std::cout << "You cant divide by Zero\n";

        return *this;
    }


    else {
        x /= s;
        y /= s;

        return *this;
    }

}

Vec2 operator+(Vec2 const& u, Vec2 const& v) {
    Vec2 temp{ u };
    temp += v;

    return temp;
}

Vec2 operator-(Vec2 const& u, Vec2 const& v) {
    Vec2 temp{ u };
    temp -= v;

    return temp;
}

Vec2 operator*(Vec2 const& u, float s) {
    Vec2 temp{ u };
    temp *= s;

    return temp;
}

Vec2 operator/(Vec2 const& u, float s) {
    Vec2 temp{ u };
    temp /= s;

    return temp;
}

Vec2 operator*(float s, Vec2 const& v) {
    Vec2 temp{ v };
    temp *= s;

    return temp;
}