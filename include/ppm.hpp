#ifndef PPM_HPP
#define PPM_HPP

#include <string>
#include "pixel.hpp"
#include "image.hpp"

using std::string;

const string formats[] = {"P3", "P6"};

class PPM {
    private:
        unsigned int format;
        unsigned int colorRange;

        unsigned int resolutionX;
        unsigned int resolutionY;

        Image* image;

    public:
        PPM();
        PPM(unsigned int format, unsigned int colorRange, unsigned int resolutionX, unsigned int resolutionY, Image* _image = nullptr);
        ~PPM();

        unsigned int getFormat() const;
        unsigned int getColorRange() const;

        unsigned int getResolutionX() const;
        unsigned int getResolutionY() const;

        void setImage(Image* image);

        const string toString() const;

        friend ostream& operator<<(ostream& out, const PPM& ppm);
};

#endif