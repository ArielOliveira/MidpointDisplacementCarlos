#include "../include/ppm.hpp"

PPM::PPM() :
    format(0),
    colorRange(DEFAULT_COLOR_RANGE),
    resolutionX(DEFAULT_RES_X),
    resolutionY(DEFAULT_RES_Y) 
{}

PPM::PPM(unsigned int _format, unsigned int _colorRange, unsigned int _resolutionX, unsigned int _resolutionY) :
    format(_format),
    colorRange(_colorRange),
    resolutionX(_resolutionX),
    resolutionY(_resolutionY) 
{}

PPM::~PPM() {}

unsigned int PPM::getFormat() const { return format; }
unsigned int PPM::getColorRange() const { return colorRange; }

unsigned int PPM::getResolutionX() const { return resolutionX; }
unsigned int PPM::getResolutionY() const { return resolutionY; }



