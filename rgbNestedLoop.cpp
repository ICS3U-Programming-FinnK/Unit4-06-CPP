// Created by: Finn Kitor
// Created on: November 16th, 2023
// this program generates the different values of rgb using nested loops

#include <iostream>

int main() {
     // Loop for red (r) values
    for (int r = 0; r < 256; r++) {
         // Loop for green (g) values
        for (int g = 0; g < 256; g++) {
            //  Loop for blue (b) values
            for (int b = 0; b < 256; b++) {
                // Print the RGB color code and change the color of the output
                std::cout << "\033[38;2;" << r << ";" << g << ";" << b << "mRGB(" << r << ", " << g << ", " << b << ")\033[0m" << std::endl;
            }
         }
     }
    return 0;
}