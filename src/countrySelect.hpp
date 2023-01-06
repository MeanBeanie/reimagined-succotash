#ifndef COUNTRYSELECT_H
#define COUNTRYSELECT_H

#include <vector>
#include <algorithm>
#include <string>

struct Vertex{
    float x, y;
    Vertex(float _x, float _y):x(_x), y(_y){};
};

const float offsetX = 0;
const float offsetY = 0;

class Country{
    public:
        Country(std::vector<Vertex> verts, std::string _n){for(Vertex v : verts){vertices.push_back(Vertex(v.x+offsetX, v.y+offsetY));} name = _n;};

        std::string name;

        std::vector<Vertex> vertices;
        bool checkCol(float mX, float mY);
};

#endif