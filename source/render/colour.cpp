#include "colour.h"
#include "../math/math_common.h"
#include "math.h"

Colour interpolate (const Colour& a, const Colour& b, double d) {
	return Colour(a.r*(1-d) + b.r*d, a.g*(1-d) + b.g*d, a.b*(1-d) + b.b*d);
}

Colour hsv(float H, float S, float V)
{
    Colour rgb;

	while (H>2*pi)
		H -= 2*pi;

	while (H<0)
		H += 2*pi;

	H /= (pi / 3);
	float fract = H - floor(H);

    float P = V*(1 - S);
    float Q = V*(1 - S*fract);
    float T = V*(1 - S*(1 - fract));

    if      (0. <= H && H < 1.)
        rgb.r = V, rgb.g = T, rgb.b = P;
    else if (1. <= H && H < 2.)
        rgb.r = Q, rgb.g = V, rgb.b = P;
    else if (2. <= H && H < 3.)
        rgb.r = P, rgb.g = V, rgb.b = T;
    else if (3. <= H && H < 4.)
        rgb.r = P, rgb.g = Q, rgb.b = V;
    else if (4. <= H && H < 5.)
        rgb.r = T, rgb.g = P, rgb.b = V;
    else if (5. <= H && H < 6.)
        rgb.r = V, rgb.g = P, rgb.b = Q;
    else
        rgb.r = 0, rgb.g = 0, rgb.b = 0;

    return rgb;
}
