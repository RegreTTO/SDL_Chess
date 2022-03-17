#ifndef SDL_CHESS_SIDEBAR_H
#define SDL_CHESS_SIDEBAR_H

#include "../Field/Cell.h"

class Sidebar {
private:
	Cell **figures;
public:
	Sidebar();
	static void show_white(SDL_Renderer *renderer);
    static void show_black(SDL_Renderer *renderer);
};


#endif //SDL_CHESS_SIDEBAR_H
