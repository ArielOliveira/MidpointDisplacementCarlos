#include "../include/ppm.hpp"

PPM::PPM() :
    format(0),
    colorRange(DEFAULT_COLOR_RANGE),
    resolutionX(DEFAULT_RES_X),
    resolutionY(DEFAULT_RES_Y),
    image(nullptr) 
{}

PPM::PPM(unsigned int _format, unsigned int _colorRange, unsigned int _resolutionX, unsigned int _resolutionY, Image* _image) :
    format(_format),
    colorRange(_colorRange),
    resolutionX(_resolutionX),
    resolutionY(_resolutionY),
    image(_image) 
{}

PPM::~PPM() {
    delete image;
}

unsigned int PPM::getFormat() const { return format; }
unsigned int PPM::getColorRange() const { return colorRange; }

unsigned int PPM::getResolutionX() const { return resolutionX; }
unsigned int PPM::getResolutionY() const { return resolutionY; }

void PPM::setImage(Image* image) { this->image = image; }

const string PPM::toString() const {
    string s;

    s.append(formats[format]);
    s.push_back('\n');

    s.append(std::to_string(resolutionX));
    s.push_back(' ');

    s.append(std::to_string(resolutionY));
    s.push_back('\n');

    s.append(std::to_string(colorRange));
    s.push_back('\n');

    s.append(image->toString());

    return s;
}

ostream& operator<<(ostream& out, const PPM& ppm) {
    out << ppm.toString();

    return out;
}



