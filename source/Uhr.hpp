#ifndef UHR_HPP
#define UHR_HPP
#include "vec2.hpp"
#include "circle.hpp"


class Uhr
{
	Vec2 center = { 400.0f, 400.0f };
	Vec2 sec;
	Vec2 min;
	Vec2 hour;

	void display_time(Window const& win);
};

#endif // !UHR_HPP

