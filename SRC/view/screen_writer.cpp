//
// Created by y on 6/30/20.
//

#include "screen_writer.h"
#include <iostream>

void ScreenWriter::write(const char *str) const {
    std::cout<< "<<< ";
    std::cout<< str<< std::endl;
}