#include "Menu.h"


void Menu::parse_menu(SDL_Renderer *renderer, std::string path) {
    const int x = 0;
    int i = x;
    int j = 0;
    std::ifstream file(path);
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

void Menu::animate_menu(SDL_Renderer *renderer, int &counter, bool &up) {
    std::string path;
    path = "../sprites/menu/menu" + std::to_string(counter) + ".txt";
    parse_menu(renderer, path);

    if (up && counter < 9) counter++;
    else if (!up && counter > 1) counter--;
    else if (up && counter == 9) {
        counter--;
        up = false;
    }
    else if (!up && counter == 1) {
        counter++;
        up = true;
    }

}
