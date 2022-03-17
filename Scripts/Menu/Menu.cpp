#include "Menu.h"

void Menu::parse_menu(SDL_Renderer *renderer) {
    const int x = 0;
    int i = x;
    int j = 0;
    std::ifstream file("../sprites/menu.txt");
    std::string s;
    while (!file.eof()) {
        std::getline(file, s);
        for (char c : s) {
            if (c == 'b') {
                SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
                SDL_RenderDrawPoint(renderer, i, j);
            }
            else if (c == '.') {
                SDL_SetRenderDrawColor(renderer, 86, 192, 218, 255);
                SDL_RenderDrawPoint(renderer, i, j);
            }
            else if (c == 'g') {
                SDL_SetRenderDrawColor(renderer, 12, 147, 69, 255);
                SDL_RenderDrawPoint(renderer, i, j);
            }
            else {
                SDL_SetRenderDrawColor(renderer, 142, 183, 193, 255);
                SDL_RenderDrawPoint(renderer, i, j);
            }
            i++;
        }
        j++;
        i = x;
    }
}

