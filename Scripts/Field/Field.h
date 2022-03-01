

#ifndef SDL_CHESS_FIELD_H
#define SDL_CHESS_FIELD_H

#include "Cell.h"

class Field {
private:
	Cell **field;
public:
	Field();
	~Field();

	Cell **get_field();

	void init_figures();
};


#endif //SDL_CHESS_FIELD_H
