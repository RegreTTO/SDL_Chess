//
// Created by aleks on 16.03.2022.
//

#include <fstream>
#include "Sidebar.h"
#include "../Figure/Figures.h"

void Sidebar::show(SDL_Renderer *renderer) {
	const int x = 900;
	const int y = 0;
	int i = x;
	int j = y;
	std::string s;
	std::string sprites[6] = {"../sprites/king.txt", "../sprites/queen.txt", "../sprites/rook.txt",
	                          "../sprites/bishop.txt", "../sprites/knight.txt", "../sprites/pawn.txt"};
	for (const auto &a : sprites) {
		SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
		SDL_Rect rect = {i, j, 101, 100};
		SDL_RenderDrawRect(renderer, &rect);
		SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
		SDL_Rect rect1 = {i+1, j+1, 99, 100};
		SDL_RenderDrawRect(renderer, &rect1);
		std::ifstream file(a);
		while (!file.eof()) {
			std::getline(file, s);
			for (char c : s) {
				if (c == '%') {
					SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
					SDL_RenderDrawPoint(renderer, i, j);
				} else if (c == '#') {
					SDL_RenderDrawPoint(renderer, i, j);
					SDL_SetRenderDrawColor(renderer, 202,204,198, 255);
				}
				i++;
			}
			j++;
			i = x;
		}
	}
}

Sidebar::Sidebar() {
	this->figures = new Cell*[6];
	for(int i = 0; i < 6;i++){
		this->figures[i] = new Cell[2];
	}
	this->figures[0][0].set_figure(new King({0,0}, 0));
	this->figures[0][1].set_figure(new King({0,1}, 1));

	this->figures[1][0].set_figure(new Queen({1,0}, 0));
	this->figures[1][1].set_figure(new Queen({1,1}, 1));

	this->figures[2][0].set_figure(new Rook({2,0}, 0));
	this->figures[2][1].set_figure(new Rook({2,1}, 1));

	this->figures[3][0].set_figure(new Bishop({3,0}, 0));
	this->figures[3][1].set_figure(new Bishop({3,1}, 1));

	this->figures[4][0].set_figure(new Knight({4,0}, 0));
	this->figures[4][1].set_figure(new Knight({4,1}, 1));

	this->figures[5][0].set_figure(new Pawn({5,0}, 0));
	this->figures[5][1].set_figure(new Pawn({5,1}, 1));

}
