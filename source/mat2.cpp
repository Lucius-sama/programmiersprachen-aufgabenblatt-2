#include "mat2.hpp"


Mat2& Mat2::operator*=(Mat2 const& m) 
{
    e_00 = e_10 * m.e_01 + e_00 * m.e_00;
    e_01 = e_11 * m.e_01 + e_01 * m.e_00;
    e_10 = e_10 * m.e_11 + e_00 * m.e_10;
    e_11 = e_11 * m.e_11 + e_01 * m.e_10;

    return *this;
}

Mat2 operator *(Mat2 const& m1, Mat2 const& m2)
{
    Mat2 temp{ m1 };
    temp *= m2;

    return temp;
}

Vec2 operator*(Mat2 const& m, Vec2 const& v) 
{
    Vec2 sol;

    sol.x = m.e_00 * v.x + m.e_10 * v.y;
    sol.y = m.e_01 * v.x + m.e_11 * v.y;

    return sol;
}

float Mat2::deter() const 
{
    return e_00 * e_11 - e_10 * e_01;
}

Mat2 inverses(Mat2 const& m) 
{
    float f = 1 / (m.e_00 * m.e_11 - m.e_10 * m.e_01);
    Mat2 result{ f * m.e_11, f * -m.e_10, f * -m.e_01, f * m.e_00 };

    return result;
}

Mat2 transponierte(Mat2 const& m) 
{

    Mat2 result{ m.e_00, m.e_01, m.e_10, m.e_11 };

    return result;
}

Mat2 rotations_matrix(float phi) 
{
    Mat2 result{ std::cos(phi), -std::sin(phi), std::sin(phi), -std::cos(phi) };

    return result;
}
