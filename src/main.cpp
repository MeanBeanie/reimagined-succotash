#include <iostream>
#include <vector>

#include "SFML/Graphics.hpp"
#include "countrySelect.hpp"

int main(){
    sf::RenderWindow window(sf::VideoMode(1300, 730), "War Sim");

    sf::Sprite map;
    sf::Texture mapTex;
    mapTex.loadFromFile("src/resources/map.png");
    map.setTexture(mapTex);

    // Countries
    std::vector<Country> countries;
    Country alaska({
            Vertex(140, 57),
            Vertex(106, 52),
            Vertex(59, 62),
            Vertex(63, 67),
            Vertex(58, 70),
            Vertex(38, 74),
            Vertex(54, 76),
            Vertex(26, 87),
            Vertex(26, 95),
            Vertex(20, 98),
            Vertex(32, 100),
            Vertex(7, 112),
            Vertex(57, 94),
            Vertex(65, 94),
            Vertex(74, 90),
            Vertex(94, 94)
    }, "Alaska");
    countries.push_back(alaska);
    Country nwTerr({
        Vertex(99, 94),
        Vertex(141, 58),
        Vertex(193, 57),
        Vertex(223, 39),
        Vertex(252, 49),
        Vertex(260, 44),
        Vertex(305, 42),
        Vertex(317, 59),
        Vertex(247, 94)
    }, "Northwest Territories");
    countries.push_back(nwTerr);
    Country alberta({
        Vertex(101, 96),
        Vertex(218, 96),
        Vertex(200, 119),
        Vertex(189, 141),
        Vertex(101, 141)
    }, "Alberta");
    countries.push_back(alberta);
    Country ontario({
        Vertex(220, 96),
        Vertex(245, 96),
        Vertex(273, 117),
        Vertex(273, 133),
        Vertex(265, 150),
        Vertex(279, 159),
        Vertex(246, 170),
        Vertex(262, 159),
        Vertex(249, 153),
        Vertex(241, 141),
        Vertex(192, 141)
    }, "Ontario");
    countries.push_back(ontario);
    Country quebec({
        Vertex(267, 152),
        Vertex(286, 118),
        Vertex(301, 107),
        Vertex(313, 86),
        Vertex(331, 93),
        Vertex(334, 104),
        Vertex(348, 95),
        Vertex(355, 120),
        Vertex(363, 123),
        Vertex(335, 136),
        Vertex(338, 152),
        Vertex(311, 164),
        Vertex(308, 148),
        Vertex(291, 158),
        Vertex(280, 158),
        Vertex(267, 152)
    }, "Quebec");
    countries.push_back(quebec);
    Country wus({
        Vertex(114, 143),
        Vertex(196, 143),
        Vertex(189, 196),
        Vertex(151, 196),
        Vertex(145, 217),
        Vertex(120, 220),
        Vertex(103, 214),
        Vertex(93, 214),
        Vertex(81, 187)
    }, "Western U.S.");
    countries.push_back(wus);
    Country eus({
        Vertex(198, 143),
        Vertex(224, 147),
        Vertex(246, 168),
        Vertex(280, 160),
        Vertex(296, 159),
        Vertex(307, 150),
        Vertex(307, 159),
        Vertex(231, 222),
        Vertex(229, 248),
        Vertex(220, 226),
        Vertex(161, 244),
        Vertex(151, 227),
        Vertex(138, 224),
        Vertex(147, 218),
        Vertex(153, 198),
        Vertex(191, 198)
    }, "Eastern U.S.");
    countries.push_back(eus);
    Country cenAmer({
        Vertex(94, 216),
        Vertex(149, 229),
        Vertex(161, 246),
        Vertex(156, 260),
        Vertex(169, 281),
        Vertex(196, 266),
        Vertex(189, 290),
        Vertex(209, 292),
        Vertex(209, 317),
        Vertex(234, 325),
        Vertex(219, 328),
        Vertex(193, 302),
        Vertex(167, 209),
        Vertex(124, 272),
        Vertex(126, 263),
        Vertex(109, 257),
        Vertex(96, 238)
    }, "Central America");
    countries.push_back(cenAmer);
    Country venezuela({
        Vertex(231, 330),
        Vertex(259, 308),
        Vertex(295, 319),
        Vertex(336, 341),
        Vertex(339, 344),
        Vertex(334, 352),
        Vertex(307, 356),
        Vertex(306, 343),
        Vertex(285, 345),
        Vertex(288, 353),
        Vertex(280, 359),
        Vertex(275, 353),
        Vertex(264, 355),
        Vertex(263, 382),
        Vertex(262, 375),
        Vertex(251, 372),
        Vertex(240, 362),
        Vertex(226, 356)
    }, "Venezuela");
    countries.push_back(venezuela);
    Country peru({
        Vertex(225, 357),
        Vertex(244, 366),
        Vertex(250, 373),
        Vertex(261, 376),
        Vertex(251, 385),
        Vertex(247, 397),
        Vertex(257, 409),
        Vertex(263, 412),
        Vertex(268, 415),
        Vertex(280, 408),
        Vertex(286, 420),
        Vertex(303, 426),
        Vertex(306, 425),
        Vertex(315, 439),
        Vertex(318, 445),
        Vertex(314, 451),
        Vertex(321, 465),
        Vertex(335, 474),
        Vertex(332, 484),
        Vertex(331, 485),
        Vertex(322, 476),
        Vertex(301, 463),
        Vertex(299, 460),
        Vertex(292, 463),
        Vertex(287, 462),
        Vertex(281, 465),
        Vertex(269, 442),
        Vertex(265, 446),
        Vertex(243, 429),
        Vertex(226, 398),
        Vertex(217, 384),
        Vertex(223, 375),
        Vertex(218, 370)
    }, "Peru");
    countries.push_back(peru);


    while(window.isOpen()){
        
        sf::Event event;
        while(window.pollEvent(event)){
            switch(event.type){
                case sf::Event::Closed:{
                    window.close();
                }
            }
        }

        for(Country c : countries){
            if(c.checkCol(window.mapPixelToCoords(sf::Mouse::getPosition(window)).x, window.mapPixelToCoords(sf::Mouse::getPosition(window)).y)){
                std::cout << "MOUSE OVER COUNTRY: " << c.name << "\n";
            }
        }

        window.clear(sf::Color(209, 190, 168, 255));
        window.draw(map);
        window.display();
    }
    return 0;
}