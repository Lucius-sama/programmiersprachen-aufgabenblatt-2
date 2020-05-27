#include "rect.hpp"


float Rect::circumference() {
    float a = max_.x - min_.x;
    float b = max_.y - min_.y;
    float result = 4 * a + 4 * b;
    return result;
}


void Rect::draw(Window const& w, float thickness) const {
    w.draw_line(min_.x, min_.y, max_.x, min_.y, color_.r, color_.g, color_.b, thickness);
    w.draw_line(max_.x, min_.y, max_.x, max_.y, color_.r, color_.g, color_.b, thickness);
    w.draw_line(min_.x, min_.y, min_.x, max_.y, color_.r, color_.g, color_.b, thickness);
    w.draw_line(min_.x, max_.y, max_.x, max_.y, color_.r, color_.g, color_.b, thickness);
    return;
}

bool Rect::is_inside(Vec2 const& v) {
    if (v.x > min_.x && v.x < max_.x && v.y > min_.y && v.y < max_.y) {
        return true;
    }
    return false;
}