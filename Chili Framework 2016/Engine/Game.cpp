/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#include "MainWindow.h"
#include "Game.h"

Game::Game( MainWindow& wnd )
	:
	wnd( wnd ),
	gfx( wnd )
{
}

void Game::Go(){
	gfx.BeginFrame();	
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel(){


}

void Game::ComposeFrame(){
	gfx.PutPixel(704, 550, 255, 255, 255);
	gfx.PutPixel(705, 550, 255, 255, 255);
	gfx.PutPixel(706, 550, 255, 255, 255);
	gfx.PutPixel(707, 550, 255, 255, 255);

	gfx.PutPixel(700, 545, 255, 255, 255);
	gfx.PutPixel(700, 544, 255, 255, 255);
	gfx.PutPixel(700, 543, 255, 255, 255);
	gfx.PutPixel(700, 542, 255, 255, 255);

	gfx.PutPixel(696, 550, 255, 255, 255);
	gfx.PutPixel(695, 550, 255, 255, 255);
	gfx.PutPixel(694, 550, 255, 255, 255);
	gfx.PutPixel(693, 550, 255, 255, 255);

	gfx.PutPixel(700, 553, 255, 255, 255);
	gfx.PutPixel(700, 554, 255, 255, 255);
	gfx.PutPixel(700, 555, 255, 255, 255);
	gfx.PutPixel(700, 556, 255, 255, 255);
	
	
}
