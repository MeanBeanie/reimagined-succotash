#ifndef BASE_H
#define BASE_h

#include "SFML/Graphics.hpp"
#include <string>

class Troop{
    public:
        float x, y;
        sf::Sprite sprite;
        sf::Texture tex;

        int health = 100;
        int range = 10;

        void setStats(int h, int r, float x = 0, float y = 0);
        void loadTex(std::string tp);

        void draw(sf::RenderWindow* window);
};

#endif