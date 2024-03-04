#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "perso.hpp"

class Board
{
public:
    int width;
    int height;
    std::vector<std::vector<Element *>> buffer;

    Board(int w, int h) : height(h), width(w), buffer(w, std::vector<Element *>(h))
    {
    }
};