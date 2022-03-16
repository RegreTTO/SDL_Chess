#ifndef SDL_CHESS_BUTTON_H
#define SDL_CHESS_BUTTON_H

#include "SDL.h"

class Button {
private:
	const int x1;
	const int x2;
	const int y1;
	const int y2;
public:
	Button(int x1, int y1, int x2, int y2) : x1(x1), y1(y1), x2(x2), y2(y2) {};

	void render(SDL_Renderer *renderer);

};


#endif //SDL_CHESS_BUTTON_H
