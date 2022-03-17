
#ifndef SDL_CHESS_MENU_H
#define SDL_CHESS_MENU_H

#include "SDL.h"
#include <fstream>
#include <string>

class Menu {
public:
    void parse_menu(SDL_Renderer *renderer, std::string path);
    void animate_menu(SDL_Renderer *renderer, int &counter, bool &up);
    bool is_in_menu = true;
};


#endif //SDL_CHESS_MENU_H
