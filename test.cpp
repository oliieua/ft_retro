#include "Game.hpp"
#include "Player.hpp"
#define W 115
#define H 30

int main()
{
	Game	g;
	Player	p;
	g.startGame();
	unsigned int	enemy_x = W + (rand() * time(0));
	unsigned int	enemy_y = (rand() * time(0)) % 30;
	bool			enemy = true;
	mvaddch(p.getPosY(), p.getPosX(), '>');
	mvaddch(enemy_y, enemy_x, '1');
	while (g.getStatus()) {
		clear();
		mvaddch(p.getPosY(), p.getPosX(), '>');
		mvaddch(enemy_y, enemy_x, '1');
		int key = getch();
		if (key == KEY_UP)
			p.moveUp();
		if (key == KEY_DOWN)
			p.moveDown();
		if (key == KEY_RIGHT)
			p.moveRight();
		if (key == KEY_LEFT)
			p.moveLeft();
		if (key == 27) {
			g.endGame();
		}
		enemy_x--;
		refresh();
		usleep(32000);
	}
}