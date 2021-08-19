#include <iostream>
#include <fstream>

#include "../include/image.hpp"
#include "../include/ppm.hpp"

using std::cin;
using std::cout;
using std::endl;

using std::ofstream;

int main(void) {
    Image* image = new Image();

    int centerX = image->GetSizeX() / 2;
    int centerY = image->GetSizeY() / 2;

    for (int i = centerY-20; i < centerY+20; i++) 
        for (int j = centerX-20; j < centerX+20; j++) 
            image->SetValue(j, i, {0, 0, 255});

    
    PPM ppm(0, 255, DEFAULT_RES_X, DEFAULT_RES_Y, image);

    ofstream file("image.ppm");

    file << ppm;

    return 0;
}