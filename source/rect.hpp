#ifndef RECT_HPP
#define RECT_HPP


#include "window.hpp"
#include "vec2.hpp"
#include "color.hpp"


class Rect {
public:
    Rect() :
        min_{ 0, 0 }, max_{ 7, 7 }, color_{ 0.5, 0.5, 0.5 }{}

    Rect(Vec2 const& v1, Vec2 const& v2, Color const& color) :
        min_{ v1 }, max_{ v1.x + v2.x, v1.y + v2.y }, color_{ color }{}

    float circumference();
    void draw(Window const& w, float f = 1.0f) const;
    bool is_inside(Vec2 const& v);

private:
    Vec2 min_, max_;
    Color color_;
};

#endif
