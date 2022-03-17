
#include <fstream>
#include "Game.h"


void Game::start_game(SDL_Renderer *renderer) {
	field.init_figures();
	Cell **cells = Game::field.get_field();
	Sidebar::show_black(renderer);
    Sidebar::show_white(renderer);
	Sidebar::show_butt(renderer);
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cells[i][j].render(renderer);
			auto figure = cells[i][j].get_figure();
			if (figure != nullptr) figure->render(renderer);
		}
	}
}

void Game::new_figure(SDL_Renderer *renderer, int x, int y) {
    x /= 100;
    y /= 100;
    Sidebar tmp;

    std::pair<int, int> fig = sidebar.get_chosen_figure()->get_cell();
    tmp.choose_figure(fig.second, fig.first);

    Figure *ftmp = tmp.get_chosen_figure();
    ftmp->set_cell({x, y});

    this->field.get_field()[x][y].render(renderer);
    this->field.get_field()[x][y].set_figure(ftmp);
    this->field.get_field()[x][y].get_figure()->render(renderer);

}


