
#include <fstream>
#include "Sidebar.h"
#include "../Figure/Figures.h"

void Sidebar::show_white(SDL_Renderer *renderer) {
	const int x = 900;
	const int y = 0;
	int i = x;
	int j = y;
	std::string s;
	std::string sprites[6] = {"../sprites/king.txt", "../sprites/queen.txt", "../sprites/rook.txt",
	                          "../sprites/bishop.txt", "../sprites/knight.txt", "../sprites/pawn.txt"};
	for (const auto &a: sprites) {
		SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
		SDL_Rect rect = {i, j, 101, 100};
		SDL_RenderDrawRect(renderer, &rect);
		std::ifstream file(a);
		while (!file.eof()) {
			std::getline(file, s);
			for (char c: s) {
				if (c == '%') {
					SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
					SDL_RenderDrawPoint(renderer, i, j);
				} else if (c == '#') {
					SDL_RenderDrawPoint(renderer, i, j);
					SDL_SetRenderDrawColor(renderer, 202, 204, 198, 255);
				}
				i++;
			}
			j++;
			i = x;
		}
		j--;
	}
}

void Sidebar::show_black(SDL_Renderer *renderer) {
	const int x = 800;
	const int y = 0;
	int i = x;
	int j = y;
	std::string s;
	std::string sprites[6] = {"../sprites/king.txt", "../sprites/queen.txt", "../sprites/rook.txt",
	                          "../sprites/bishop.txt", "../sprites/knight.txt", "../sprites/pawn.txt"};
	for (const auto &a: sprites) {
		SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
		SDL_Rect rect = {i, j, 101, 100};
		SDL_RenderDrawRect(renderer, &rect);
		std::ifstream file(a);
		while (!file.eof()) {
			std::getline(file, s);
			for (char c: s) {
				if (c == '%') {
					SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
					SDL_RenderDrawPoint(renderer, i, j);
				} else if (c == '#') {
					SDL_RenderDrawPoint(renderer, i, j);
					SDL_SetRenderDrawColor(renderer, 60, 149, 208, 255);
				}
				i++;
			}
			j++;
			i = x;
		}
		j--;
	}
}


Sidebar::Sidebar() {
	this->figures = new Cell *[6];
	for (int i = 0; i < 6; ++i) {
		this->figures[i] = new Cell[2];
		for (int j = 0; j < 2; ++j) {
			this->figures[i][j] = Cell(i, j);
		}
	}
	this->figures[0][0].set_figure(new King({0, 0}, 0));
	this->figures[0][1].set_figure(new King({0, 1}, 1));

	this->figures[1][0].set_figure(new Queen({1, 0}, 0));
	this->figures[1][1].set_figure(new Queen({1, 1}, 1));

	this->figures[2][0].set_figure(new Rook({2, 0}, 0));
	this->figures[2][1].set_figure(new Rook({2, 1}, 1));

	this->figures[3][0].set_figure(new Bishop({3, 0}, 0));
	this->figures[3][1].set_figure(new Bishop({3, 1}, 1));

	this->figures[4][0].set_figure(new Knight({4, 0}, 0));
	this->figures[4][1].set_figure(new Knight({4, 1}, 1));

	this->figures[5][0].set_figure(new Pawn({5, 0}, 0));
	this->figures[5][1].set_figure(new Pawn({5, 1}, 1));

	this->chosen_figure = this->figures[0][0].get_figure();
}

void Sidebar::mouse_click(SDL_Renderer *renderer, int x, int y) {
	if (x > 800 && x < 1000 && y < 600) {
		x -= 800;
		y /= 100;
		x /= 100;
		auto coords = this->chosen_figure->get_cell();
		this->selection_clear(renderer, &this->figures[coords.first][coords.second]);
		choose_figure(x, y);
		this->select_figure(renderer, &this->figures[y][x]);
		SDL_Log("%s", chosen_figure->get_name().c_str());
	}
}

void Sidebar::show_butt(SDL_Renderer *renderer) {
	const int x = 800;
	int j = 600;
	int i = x;
	std::ifstream file("../sprites/reset.txt");
	std::string s;
	while (!file.eof()) {
		std::getline(file, s);
		for (char c: s) {
			if (c == '#') {
				SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
				SDL_RenderDrawPoint(renderer, i, j);
			} else if (c == '.') {
				SDL_SetRenderDrawColor(renderer, 86, 192, 218, 255);
				SDL_RenderDrawPoint(renderer, i, j);
			}
			i++;
		}
		j++;
		i = x;
	}
}
