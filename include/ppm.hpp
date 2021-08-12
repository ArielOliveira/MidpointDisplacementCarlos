#ifndef PPM_HPP
#define PPM_HPP

#include <string>
#include "pixel.hpp"

using std::string;

const string formats[] = {"P3"};

class PPM {
    private:
        unsigned int format;
        unsigned int colorRange;

        unsigned int resolutionX;
        unsigned int resolutionY;

    public:
        PPM();
        PPM(unsigned int format, unsigned int colorRange, unsigned int resolutionX, unsigned int resolutionY);
        ~PPM();

        unsigned int getFormat() const;
        unsigned int getColorRange() const;

        unsigned int getResolutionX() const;
        unsigned int getResolutionY() const;
};

#endif