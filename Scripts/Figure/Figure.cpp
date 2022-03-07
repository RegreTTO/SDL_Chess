
#include <fstream>
#include "Figure.h"


Figure::Figure(std::pair<int,int> cell, int color) {
	this->cell = cell;
	this->color = color;
}

void Figure::set_cell(std::pair<int, int> cell1) {
	this->cell = cell1;
}


void Figure::parse_picture(SDL_Renderer *renderer, const std::string& path) {
    const int x = this->get_cell().first*100+25;
    const int y = this->get_cell().second*100+25;
    int i = x;
    int j = y;
    std::ifstream file(path);
    std::string s;
    while (!file.eof()) {
        std::getline(file, s);
        const char *a = s.c_str();
        for (char c : s) {
            if (c == '%') {
                SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
                SDL_RenderDrawPoint(renderer, i, j);
            }
            else if (c == '#') {
                if (this->get_color() == 1)
                    SDL_SetRenderDrawColor(renderer, 205, 205, 205, 255);
                else
                    SDL_SetRenderDrawColor(renderer, 55, 55, 55, 255);
                SDL_RenderDrawPoint(renderer, i, j);
            }
            i++;
        }
        j++;
        i = x;
    }
}