#ifndef IMAGE_HPP
#define IMAGE_HPP

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

        const int& GetSizeX() const;
        const int& GetSizeY() const;

        void SetSizeX(const int& sizeX);
        void SetSizeY(const int& sizeY);

        void SetValue(const int& x, const int& y, const Pixel& value);
        const Pixel& GetValue(const int& x, const int& y) const;
};

#endif