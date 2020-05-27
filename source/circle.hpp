#ifndef CIRCE_HPP
#define CIRCLE_HPP

#include "vec2.hpp"
#include "color.hpp"
#include "window.hpp"

class Circle {
public:
    Circle() :
        center_{ 2, 2 }, radius_{ 1 }, color_{ 0.5, 0.5, 0.5 }{}

    Circle(Vec2 const& v1, float rad, Color const& color) :
        center_{ v1 }, radius_{ rad }, color_{ color }{}

    float circumference();
    void draw(Window const& w, float staerke = 1.0f) const;
    bool is_inside(Vec2 const& v);

private:
    Vec2 center_;
    float radius_;
    Color color_;
};

#endif