#include "mat2.hpp"


Mat2& Mat2::operator*=(Mat2 const& m) 
{
    float A_temp = e_00;
    float B_temp = e_01;
    float C_temp = e_10;
    float D_temp = e_11;

    A_temp = C_temp * m.e_01 + A_temp * m.e_00;
    B_temp = D_temp * m.e_01 + B_temp * m.e_00;
    C_temp = C_temp * m.e_11 + A_temp * m.e_10;
    D_temp = D_temp * m.e_11 + B_temp * m.e_10;

    e_00 = A_temp;
    e_01 = B_temp;
    e_10 = C_temp;
    e_11 = D_temp;

    return *this;
}

Mat2 operator *(Mat2 const& m1, Mat2 const& m2)
{
    Mat2 temp{ m1 };
    temp *= m2;

    return temp;
}