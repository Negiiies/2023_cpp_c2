#include "AsciiMap.hpp"

int AsciiMap::get_cell(int x, int y)
{
    return (map.at(x + y * _width));
}

void AsciiMap::set_cell(int x, int y, char c)
{
    map.at(x + y * _width) = c;
}
AsciiMap::AsciiMap(int width, int height)
{
    this->_width  = width;
    this->_height = height;
    map.resize(width * height, ' ');
}

unsigned int AsciiMap::height()
{
    return _height;
}

unsigned int AsciiMap::width()
{
    return _width;
}

void AsciiMap::to_stream(std::ostream &out)
{
    auto i{0U};
    auto j{0U};

    while (i != _width * _height) {
        if (j == _width) {
            out << std::endl;
            j = 0;
        }
        out << map[i];
        j += 1;
        i += 1;
    }
    out << std::endl;
}