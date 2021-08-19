#ifndef PIXEL_HPP
#define PIXEL_HPP

#define DEFAULT_RES_X 800
#define DEFAULT_RES_Y 600
#define DEFAULT_COLOR_RANGE 255

#include <string>
using std::string;

typedef struct _Pixel {
    unsigned short r;
    unsigned short g;
    unsigned short b;

    const string toString() const{
        string s;

        s.append(std::to_string(r));
        s.push_back(' ');

        s.append(std::to_string(g));
        s.push_back(' ');

        s.append(std::to_string(b));

        return s;
    }
} Pixel;

#endif