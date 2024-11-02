#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp>
#include <ftxui/screen/terminal.hpp>
#include <iostream>
#include <thread>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    std::string reset_position;
    int frame = 0;
    

   
    
    while (true)
    { 
        auto can = Canvas(500,500);

        can.DrawPointLine(30 - frame, 50, 70 - frame, 50);
        can.DrawPointLine(30 - frame, 30, 30 - frame, 50);
        can.DrawPointLine(30 - frame, 30, 70 - frame, 30);
        can.DrawPointLine(70 - frame, 30, 70 - frame, 50);
        can.DrawPointLine(30 - frame, 30, 50 - frame, 10);
        can.DrawPointLine(70 - frame, 30, 50 - frame, 10);
        can.DrawPointLine(48 - frame, 50, 48 - frame, 40);
        can.DrawPointLine(48 - frame, 40, 52 - frame, 40);
        can.DrawPointLine(48 - frame, 50, 52 - frame, 50);
        can.DrawPointLine(52 - frame, 50, 52 - frame, 40);
        can.DrawPointLine(60 - frame, 10, 60 - frame, 20); 
        can.DrawPointLine(65 - frame, 10, 65 - frame, 24); 
        can.DrawPointLine(35 - frame, 45, 35 - frame, 40);
        can.DrawPointLine(35 - frame, 40, 40 - frame, 40);
        can.DrawPointLine(40 - frame, 40, 40 - frame, 45);
        can.DrawPointLine(40 - frame, 45, 35 - frame, 45);
        can.DrawPointLine(60 - frame, 45, 60 - frame, 40);
        can.DrawPointLine(60 - frame, 40, 65 - frame, 40);
        can.DrawPointLine(65 - frame, 40, 65 - frame, 45);
        can.DrawPointLine(65 - frame, 45, 60 - frame, 45);

        can.DrawPointLine(130 - frame, 50, 170 - frame, 50);
        can.DrawPointLine(130 - frame, 30, 130 - frame, 50);
        can.DrawPointLine(130 - frame, 30, 170 - frame, 30);
        can.DrawPointLine(170 - frame, 30, 170 - frame, 50);
        can.DrawPointLine(130 - frame, 30, 150 - frame, 10);
        can.DrawPointLine(170 - frame, 30, 150 - frame, 10);
        can.DrawPointLine(148 - frame, 50, 148 - frame, 40);
        can.DrawPointLine(148 - frame, 40, 152 - frame, 40);
        can.DrawPointLine(148 - frame, 50, 152 - frame, 50);
        can.DrawPointLine(152 - frame, 50, 152 - frame, 40);
        can.DrawPointLine(160 - frame, 10, 160 - frame, 20); 
        can.DrawPointLine(165 - frame, 10, 165 - frame, 24); 
        can.DrawPointLine(135 - frame, 45, 135 - frame, 40);
        can.DrawPointLine(135 - frame, 40, 140 - frame, 40);
        can.DrawPointLine(140 - frame, 40, 140 - frame, 45);
        can.DrawPointLine(140 - frame, 45, 135 - frame, 45);
        can.DrawPointLine(160 - frame, 45, 160 - frame, 40);
        can.DrawPointLine(160 - frame, 40, 165 - frame, 40);
        can.DrawPointLine(165 - frame, 40, 165 - frame, 45);
        can.DrawPointLine(165 - frame, 45, 160 - frame, 45);

        can.DrawPointLine(230 - frame, 50, 270 - frame, 50);
        can.DrawPointLine(230 - frame, 30, 230 - frame, 50);
        can.DrawPointLine(230 - frame, 30, 270 - frame, 30);
        can.DrawPointLine(270 - frame, 30, 270 - frame, 50);
        can.DrawPointLine(230 - frame, 30, 250 - frame, 10);
        can.DrawPointLine(270 - frame, 30, 250 - frame, 10);
        can.DrawPointLine(248 - frame, 50, 248 - frame, 40);
        can.DrawPointLine(248 - frame, 40, 252 - frame, 40);
        can.DrawPointLine(248 - frame, 50, 252 - frame, 50);
        can.DrawPointLine(252 - frame, 50, 252 - frame, 40);
        can.DrawPointLine(260 - frame, 10, 260 - frame, 20); 
        can.DrawPointLine(265 - frame, 10, 265 - frame, 24); 
        can.DrawPointLine(235 - frame, 45, 235 - frame, 40);
        can.DrawPointLine(235 - frame, 40, 240 - frame, 40);
        can.DrawPointLine(240 - frame, 40, 240 - frame, 45);
        can.DrawPointLine(240 - frame, 45, 235 - frame, 45);
        can.DrawPointLine(260 - frame, 45, 260 - frame, 40);
        can.DrawPointLine(260 - frame, 40, 265 - frame, 40);
        can.DrawPointLine(265 - frame, 40, 265 - frame, 45);
        can.DrawPointLine(265 - frame, 45, 260 - frame, 45);

        can.DrawPointLine(330 - frame, 50, 370 - frame, 50);
        can.DrawPointLine(330 - frame, 30, 330 - frame, 50);
        can.DrawPointLine(330 - frame, 30, 370 - frame, 30);
        can.DrawPointLine(370 - frame, 30, 370 - frame, 50);
        can.DrawPointLine(330 - frame, 30, 350 - frame, 10);
        can.DrawPointLine(370 - frame, 30, 350 - frame, 10);
        can.DrawPointLine(348 - frame, 50, 348 - frame, 40);
        can.DrawPointLine(348 - frame, 40, 352 - frame, 40);
        can.DrawPointLine(348 - frame, 50, 352 - frame, 50);
        can.DrawPointLine(352 - frame, 50, 352 - frame, 40);
        can.DrawPointLine(360 - frame, 10, 360 - frame, 20); 
        can.DrawPointLine(365 - frame, 10, 365 - frame, 24); 
        can.DrawPointLine(335 - frame, 45, 335 - frame, 40);
        can.DrawPointLine(335 - frame, 40, 340 - frame, 40);
        can.DrawPointLine(340 - frame, 40, 340 - frame, 45);
        can.DrawPointLine(340 - frame, 45, 335 - frame, 45);
        can.DrawPointLine(360 - frame, 45, 360 - frame, 40);
        can.DrawPointLine(360 - frame, 40, 365 - frame, 40);
        can.DrawPointLine(365 - frame, 40, 365 - frame, 45);
        can.DrawPointLine(365 - frame, 45, 360 - frame, 45);

        can.DrawPointLine(10,66,500,66);
        can.DrawPointLine(10,52,500,52);

        can.DrawPointCircleFilled(-20 + frame, 63, 1); 
        can.DrawPointCircleFilled(-5 + frame, 63, 1); 
        can.DrawPointLine(-22 + frame, 61, -3 + frame, 61); 
        can.DrawPointLine(-22 + frame, 61, -22 + frame, 56); 
        can.DrawPointLine(-22 + frame, 56, -11 + frame, 56); 
        can.DrawPointLine(-11 + frame, 56, -11 + frame, 58); 
        can.DrawPointLine(-11 + frame, 58, -3 + frame, 58); 
        can.DrawPointLine(-3 + frame, 58, -3 + frame, 61); 

        can.DrawPointCircleFilled(40 + frame,63,1);
        can.DrawPointCircleFilled(55 + frame,63,1);
        can.DrawPointLine(38 + frame,61,57 + frame,61);
        can.DrawPointLine(38 + frame,61,38 + frame,56);
        can.DrawPointLine(38 + frame,56,49 + frame,56);
        can.DrawPointLine(49 + frame,56,49 + frame,58);
        can.DrawPointLine(49 + frame,58,57 + frame,58);
        can.DrawPointLine(57 + frame,58,57 + frame,61);

        can.DrawPointCircleFilled(100 + frame, 63, 1); 
        can.DrawPointCircleFilled(115 + frame, 63, 1); 
        can.DrawPointLine(98 + frame, 61, 117 + frame, 61); 
        can.DrawPointLine(98 + frame, 61, 98 + frame, 56); 
        can.DrawPointLine(98 + frame, 56, 109 + frame, 56); 
        can.DrawPointLine(109 + frame, 56, 109 + frame, 58); 
        can.DrawPointLine(109 + frame, 58, 117 + frame, 58); 
        can.DrawPointLine(117 + frame, 58, 117 + frame, 61); 

        can.DrawPointCircleFilled(160 + frame, 63, 1); 
        can.DrawPointCircleFilled(175 + frame, 63, 1); 
        can.DrawPointLine(158 + frame, 61, 177 + frame, 61); 
        can.DrawPointLine(158 + frame, 61, 158 + frame, 56); 
        can.DrawPointLine(158 + frame, 56, 169 + frame, 56); 
        can.DrawPointLine(169 + frame, 56, 169 + frame, 58); 
        can.DrawPointLine(169 + frame, 58, 177 + frame, 58); 
        can.DrawPointLine(177 + frame, 58, 177 + frame, 61); 

        can.DrawPointCircleFilled(220 + frame, 63, 1); 
        can.DrawPointCircleFilled(235 + frame, 63, 1); 
        can.DrawPointLine(218 + frame, 61, 237 + frame, 61);
        can.DrawPointLine(218 + frame, 61, 218 + frame, 56);
        can.DrawPointLine(218 + frame, 56, 229 + frame, 56); 
        can.DrawPointLine(229 + frame, 56, 229 + frame, 58); 
        can.DrawPointLine(229 + frame, 58, 237 + frame, 58); 
        can.DrawPointLine(237 + frame, 58, 237 + frame, 61); 

        can.DrawPointLine(100 - frame, 35, 100 - frame, 50);
        can.DrawPointLine(101 - frame, 35, 101 - frame, 50);
        can.DrawPointCircleFilled(100 - frame, 32, 4, Color::Green);

        can.DrawPointLine(200 - frame, 35, 200 - frame, 50);
        can.DrawPointLine(201 - frame, 35, 201 - frame, 50);
        can.DrawPointCircleFilled(200 - frame, 32, 4, Color::Green);

        can.DrawPointLine(300 - frame, 35, 300 - frame, 50);
        can.DrawPointLine(301 - frame, 35, 301 - frame, 50);
        can.DrawPointCircleFilled(300 - frame, 32, 4, Color::Green);

        can.DrawPointLine(10, 70, 500, 70);
        can.DrawPointLine(10, 84, 500, 84); 

        can.DrawPointCircleFilled(40 - frame, 82, 1); 
        can.DrawPointCircleFilled(55 - frame, 82, 1); 
        can.DrawPointLine(57 - frame, 80, 38 - frame, 80); 
        can.DrawPointLine(57 - frame, 80, 57 - frame, 75); 
        can.DrawPointLine(57 - frame, 75, 46 - frame, 75); 
        can.DrawPointLine(46 - frame, 75, 46 - frame, 77); 
        can.DrawPointLine(46 - frame, 77, 38 - frame, 77); 
        can.DrawPointLine(38 - frame, 77, 38 - frame, 80); 

        can.DrawPointCircleFilled(96 - frame, 82, 1); 
        can.DrawPointCircleFilled(111 - frame, 82, 1); 
        can.DrawPointLine(113 - frame, 80, 94 - frame, 80); 
        can.DrawPointLine(113 - frame, 80, 113 - frame, 75); 
        can.DrawPointLine(113 - frame, 75, 102 - frame, 75); 
        can.DrawPointLine(102 - frame, 75, 102 - frame, 77); 
        can.DrawPointLine(102 - frame, 77, 94 - frame, 77); 
        can.DrawPointLine(94 - frame, 77, 94 - frame, 80); 

        can.DrawPointCircleFilled(152 - frame, 82, 1); 
        can.DrawPointCircleFilled(167 - frame, 82, 1); 
        can.DrawPointLine(169 - frame, 80, 150 - frame, 80); 
        can.DrawPointLine(169 - frame, 80, 169 - frame, 75); 
        can.DrawPointLine(169 - frame, 75, 158 - frame, 75); 
        can.DrawPointLine(158 - frame, 75, 158 - frame, 77); 
        can.DrawPointLine(158 - frame, 77, 150 - frame, 77); 
        can.DrawPointLine(150 - frame, 77, 150 - frame, 80); 

        can.DrawPointCircleFilled(208 - frame, 82, 1); 
        can.DrawPointCircleFilled(223 - frame, 82, 1); 
        can.DrawPointLine(225 - frame, 80, 206 - frame, 80); 
        can.DrawPointLine(225 - frame, 80, 225 - frame, 75); 
        can.DrawPointLine(225 - frame, 75, 214 - frame, 75); 
        can.DrawPointLine(214 - frame, 75, 214 - frame, 77); 
        can.DrawPointLine(214 - frame, 77, 206 - frame, 77); 
        can.DrawPointLine(206 - frame, 77, 206 - frame, 80); 

        can.DrawPointCircleFilled(264 - frame, 82, 1); 
        can.DrawPointCircleFilled(279 - frame, 82, 1); 
        can.DrawPointLine(281 - frame, 80, 262 - frame, 80); 
        can.DrawPointLine(281 - frame, 80, 281 - frame, 75); 
        can.DrawPointLine(281 - frame, 75, 270 - frame, 75); 
        can.DrawPointLine(270 - frame, 75, 270 - frame, 77); 
        can.DrawPointLine(270 - frame, 77, 262 - frame, 77); 
        can.DrawPointLine(262 - frame, 77, 262 - frame, 80); 

        Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());
        Element lienzo = bgcolor(Color::White,canvas(&can));
        Render(pantalla, lienzo);
        std::cout << reset_position;
        pantalla.Print();
        reset_position = pantalla.ResetPosition(true);
        this_thread::sleep_for(.1s);

if (frame >= 300) {
    frame = 0;
} else {

    frame++;
}

    }

    return 0;
}