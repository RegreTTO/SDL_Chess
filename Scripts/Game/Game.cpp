
#include <fstream>
#include "Game.h"


void Game::start_game(SDL_Renderer *renderer) {
	field.init_figures();
	Cell **cells = Game::field.get_field();
	Sidebar::show_black(renderer);
    Sidebar::show_white(renderer);
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cells[i][j].render(renderer);
			auto figure = cells[i][j].get_figure();
			if (figure != nullptr) figure->render(renderer);
		}
	}
}


