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
    
    // North America
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

    // Central America
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

    // South America
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
    Country argen({
        Vertex(269, 444),
        Vertex(281, 467),
        Vertex(299, 462),
        Vertex(321, 478),
        Vertex(319, 487),
        Vertex(332, 487),
        Vertex(336, 478),
        Vertex(338, 483),
        Vertex(328, 495),
        Vertex(328, 498),
        Vertex(347, 513),
        Vertex(341, 520),
        Vertex(326, 517),
        Vertex(335, 531),
        Vertex(327, 538),
        Vertex(317, 538),
        Vertex(317, 549),
        Vertex(315, 556),
        Vertex(316, 581),
        Vertex(334, 610),
        Vertex(322, 611),
        Vertex(302, 600),
        Vertex(282, 573),
        Vertex(275, 544),
        Vertex(270, 492),
        Vertex(266, 447)
    }, "Argentina");
    countries.push_back(argen);
    Country brazil({
        Vertex(265, 356),
        Vertex(274, 354),
        Vertex(280, 361),
        Vertex(290, 353),
        Vertex(387, 345),
        Vertex(292, 347),
        Vertex(302, 341),
        Vertex(306, 357),
        Vertex(310, 357),
        Vertex(326, 353),
        Vertex(335, 353),
        Vertex(340, 345),
        Vertex(345, 356),
        Vertex(391, 378),
        Vertex(409, 390),
        Vertex(408, 403),
        Vertex(393, 423),
        Vertex(392, 448),
        Vertex(382, 467),
        Vertex(360, 484),
        Vertex(355, 501),
        Vertex(348, 512),
        Vertex(329, 497),
        Vertex(340, 483),
        Vertex(321, 463),
        Vertex(316, 451),
        Vertex(320, 446),
        Vertex(315, 435),
        Vertex(308, 434),
        Vertex(303, 424),
        Vertex(287, 418),
        Vertex(282, 406),
        Vertex(368, 413),
        Vertex(260, 406),
        Vertex(253, 404),
        Vertex(249, 396),
        Vertex(252, 386),
        Vertex(262, 383),
        Vertex(264, 383),
        Vertex(267, 371),
        Vertex(264, 363),
        Vertex(267, 360),
    }, "Brazil");
    countries.push_back(brazil);

    // Green/Ice Land
    Country greenland({
        Vertex(378, 26),
        Vertex(421, 15),
        Vertex(501, 11),
        Vertex(534, 16),
        Vertex(495, 57),
        Vertex(438, 72),
        Vertex(417, 93),
        Vertex(402, 84),
        Vertex(403, 66),
        Vertex(410, 45),
        Vertex(398, 32),
        Vertex(378, 30),
    }, "Greenland");
    countries.push_back(greenland);
    Country iceland({
        Vertex(494, 75),
        Vertex(505, 72),
        Vertex(516, 71),
        Vertex(520, 74),
        Vertex(511, 79),
        Vertex(502, 81),
        Vertex(497, 78),
        Vertex(493, 78)
    }, "Iceland");
    countries.push_back(iceland);

    // Africa
    Country northAfr({
        Vertex(506, 202),
        Vertex(598, 197),
        Vertex(602, 213),
        Vertex(593, 229),
        Vertex(593, 246),
        Vertex(602, 258),
        Vertex(615, 260),
        Vertex(626, 260),
        Vertex(652, 275),
        Vertex(652, 291),
        Vertex(645, 303),
        Vertex(649, 312),
        Vertex(630, 325),
        Vertex(619, 328),
        Vertex(614, 335),
        Vertex(621, 352),
        Vertex(596, 352),
        Vertex(523, 342),
        Vertex(486, 304),
        Vertex(487, 266),
        Vertex(505, 237),
    }, "North Africa");
    countries.push_back(northAfr);
    Country egypt({
        Vertex(603, 214),
        Vertex(632, 227),
        Vertex(639, 215),
        Vertex(691, 223),
        Vertex(694, 236),
        Vertex(700, 258),
        Vertex(695, 262),
        Vertex(655, 262),
        Vertex(652, 273),
        Vertex(620, 257),
        Vertex(608, 257),
        Vertex(597, 250),
        Vertex(595, 244),
        Vertex(597, 237),
        Vertex(595, 227),
    }, "Egypt");
    countries.push_back(egypt);

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