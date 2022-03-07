

#ifndef SDL_CHESS_FIGURE_H
#define SDL_CHESS_FIGURE_H


#include "vector"
#include "string"

class Figure {
protected:
	std::pair<int, int> cell;
	std::string name;
	bool color;
public:
	explicit Figure(std::pair<int, int> cell, int color);

	virtual int get_color() { return color; }

	void set_cell(std::pair<int, int> cell1);

	std::pair<int, int> get_cell() { return cell; }

	virtual std::string get_name();

	virtual void render() = 0;

	void parse_picture(const std::string &path);
};


#endif //SDL_CHESS_FIGURE_H
