#include "SFML/Graphics.hpp"

int main(){
    sf::RenderWindow window(sf::VideoMode(450, 800), "War Sim", sf::Style::None);

    while(window.isOpen()){
        sf::Event event;
        while(window.pollEvent(event)){
            switch(event.type){
                case sf::Event::Closed:{
                    window.close();
                }
            }
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)){
            window.close();
        }


        window.clear();
        window.display();
    }
    return 0;
}