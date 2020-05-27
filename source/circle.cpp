#define _USE_MATH_DEFINES
#include <cmath>
#include "circle.hpp"


float Circle::circumference() 
{
    float umf = 2 * M_PI * radius_;

    return umf;
}

void Circle::draw(Window const& a, float staerke) const 
{
    for (int i = 0; i < 360; ++i) {

        float x = i * M_PI / 180.0;
        float y = (i + 1) * M_PI / 180.0;

        a.draw_line(center_.x + (radius_ * std::sin(x)), center_.y + (radius_ * std::cos(x)), center_.x + (radius_ * std::sin(y)), center_.y + (radius_ * std::cos(y)), color_.r, color_.g, color_.b, staerke);
    }
    return;
}

bool Circle::is_inside(Vec2 const& v) 
{
    float rad = sqrt(pow((v.x - center_.x), 2) + pow((v.y - center_.y), 2));
    while (rad < radius_) 
    {
        return true;
    }
    return false;
}