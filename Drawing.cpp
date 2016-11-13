#include "Drawing.h"

void Drawing::updatePlayer()
{
	win.draw(ImageManagement::PlayerSheets::spr_player);
	win.display();
}

Drawing::~Drawing()
{
}
