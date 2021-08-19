#ifndef IMAGE_HPP
#define IMAGE_HPP

#include <string>
#include <ostream>

using std::ostream;
using std::string;

#include "pixel.hpp"

class Image {
    private:
        Pixel** image; 
        
        int sizeX;
        int sizeY;

        void InitializeImage();
    public:
        Image();
        Image(const int& _sizeX, const int& _sizeY);
        Image(Pixel** _image, const int& _sizeX, const int& _sizeY);
        ~Image(); 

        void SetSizeX(const int& sizeX);
        const int& GetSizeX() const;

        void SetSizeY(const int& sizeY);
        const int& GetSizeY() const;

        void SetValue(const int& x, const int& y, const Pixel& value);
        const Pixel& GetValue(const int& x, const int& y) const;

        const string toString() const;
        
        friend ostream& operator<<(ostream& out, const Image& image);
};

#endif