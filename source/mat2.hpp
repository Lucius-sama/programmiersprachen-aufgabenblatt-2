#ifndef MAT2_HPP
#define MAT2_HPP

#include<array>
#include <cmath>
#include"vec2.hpp"

struct Mat2 {
    float e_00 = 1.0f;
    float e_01 = 0.0f;
    float e_10 = 0.0f;
    float e_11 = 1.0f;

    Mat2& operator*=(Mat2 const& m);
    float deter() const;
};

Mat2 operator*(Mat2 const& m1, Mat2 const& m2);

Vec2 operator*(Mat2 const& m, Vec2 const& v);
Mat2 inverses(Mat2 const& m);
Mat2 transponierte(Mat2 const& m);
Mat2 rotations_matrix(float phi);

#endif