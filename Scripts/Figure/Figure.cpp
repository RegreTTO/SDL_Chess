
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
    const int x = this->get_cell().first*100;
    const int y = this->get_cell().second*100;
    int i = x;
    int j = y;
    std::ifstream file(path);
    std::string s;
    while (!file.eof()) {
        std::getline(file, s);
        for (char c : s) {
            if (c == '%') {
                SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
                SDL_RenderDrawPoint(renderer, i, j);
            }
            else if (c == '#') {
                if (this->get_color() == 1)
                    SDL_SetRenderDrawColor(renderer, 202,204,198, 255);
                else
                    SDL_SetRenderDrawColor(renderer, 60,149,208, 255);
                SDL_RenderDrawPoint(renderer, i, j);
            }
            i++;
        }
        j++;
        i = x;
    }
}