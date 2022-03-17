
#ifndef SDL_CHESS_GAME_H
#define SDL_CHESS_GAME_H

#include "../Field/Field.h"
#include "../Sidebar/Sidebar.h"
#include "../Menu/Menu.h"

class Game {
public:
	Field field;
	Sidebar sidebar;
	Menu menu;

	void start_game(SDL_Renderer *renderer);

	void new_figure(SDL_Renderer *renderer, int x, int y);

    void delete_figure(SDL_Renderer *renderer, int x, int y);
};


#endif //SDL_CHESS_GAME_H
