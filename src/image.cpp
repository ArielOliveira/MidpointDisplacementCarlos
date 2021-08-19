#include "../include/image.hpp"

Image::Image() : sizeX(DEFAULT_RES_X), sizeY(DEFAULT_RES_Y) {  
    InitializeImage();
}

Image::Image(const int& _sizeX, const int& _sizeY)  : sizeX(_sizeX), sizeY(_sizeY) {
    InitializeImage();
}

Image::Image(Pixel** _image, const int& _sizeX, const int& _sizeY) : 
    sizeX(_sizeX),
    sizeY(_sizeY),
    image(_image) {
        
}

Image::~Image() {
    for (int i = 0; i < sizeY; i++)
        delete[] image[sizeY];

    delete[] image;
    image = nullptr;
}

void Image::SetSizeX(const int& sizeX) { this->sizeX = sizeX; }
const int& Image::GetSizeX() const { return sizeX; }

void Image::SetSizeY(const int& sizeY) { this->sizeY = sizeY; }
const int& Image::GetSizeY() const { return sizeY; }

void Image::SetValue(const int& x, const int& y, const Pixel& value) { 
    if (x < 0 || x > sizeX-1 || y < 0 || y > sizeY-1)
        throw "Out of bounds!";

    image[x][y] = value;
}

const Pixel& Image::GetValue(const int& x, const int& y) const {
    if (x < 0 || x > sizeX-1 || y < 0 || y > sizeY-1)
        throw "Out of bounds!";

    return image[x][y];
}

void Image::InitializeImage() {
    image = new Pixel*[sizeY];

    for (int i = 0; i < sizeY; i++)
        image[i] = new Pixel[sizeX];

    for (int i = 0; i < sizeY; i++)
        for (int j = 0; j < sizeX; j++)
            image[i][j] = {255, 0, 0};
}

const string Image::toString() const {
    string s;

    for (int i = 0; i < sizeY; i++) {
        for (int j = 0; j < sizeX; j++) {
             s.append(image[i][j].toString());
             s.push_back('\n');
        }
    }

    return s;
}
        
ostream& operator<<(ostream& out, const Image& image) {
    out << image.toString();

    return out;
}
