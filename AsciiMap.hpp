#ifndef ASCII_MAP_HPP_
#define ASCII_MAP_HPP_
#include <iostream>
#include <string>
#include <vector>

class AsciiMap {
public:
    int  get_cell(int y, int x);
    void set_cell(int y, int x, char c);
    void to_stream(std::ostream &out);
    AsciiMap(int height, int width);
    unsigned int height();
    unsigned int width();

private:
    unsigned int      _width;
    unsigned int      _height;
    std::vector<char> map;
};

#endif /* ASCII_MAP_HPP_ */