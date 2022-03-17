#include "Field.h"

void Field::board_click(SDL_Renderer *renderer, int x, int y) {
	x /= 100;
	y /= 100;
	if (field[x][y].get_figure() != nullptr || this->chosen_cell != nullptr) {
		if (this->chosen_cell == nullptr) {
			if (this->chosen_cell == &field[x][y]) {
				this->chosen_cell->clear(renderer);
				this->chosen_cell = nullptr;
				return;
			}
			this->chosen_cell = &this->field[x][y];
			this->chosen_cell->select(renderer);
		} else {
			this->move_figure(renderer, this->chosen_cell->get_figure(), &field[x][y]);
			this->chosen_cell = nullptr;
		}
	}
}

void Field::mouse_click_handler(SDL_Renderer *renderer, int x, int y) {
	if (x < 800 && y < 800) {
		board_click(renderer, x, y);
	}
	if (800 < x && x < 1000 && 700 <= y && y <= 1000) {

		for (int i = 0; i < 8; ++i)
			for (int j = 0; j < 8; ++j)
				field[i][j].set_figure(nullptr);

		init_figures();
		for (int i = 0; i < 8; i++)
			for (int j = 0; j < 8; j++) {
				field[i][j].render(renderer);
				auto figure = field[i][j].get_figure();
				if (figure != nullptr) figure->render(renderer);
			}


	}
}

