#include <iostream>

#include"SDL.h"
#pragma comment(lib,"SDL2")
#pragma comment(lib,"SDL2main")

using namespace std;

int SDL_main(int argc, char* argv[])
{
	SDL_Init(SDL_INIT_EVERYTHING);

	SDL_Window* MyWindow = SDL_CreateWindow("SQuare Move",100,100,1000,800,SDL_WINDOW_SHOWN);

	SDL_Renderer* MyRender = SDL_CreateRenderer(MyWindow,-1,0);


	int X = 100;
	int Y = 100;
	int MoveSpeed = 50;
	while (true)
	{


		SDL_Event MyEvent;
		SDL_PollEvent(&MyEvent);

		SDL_SetRenderDrawColor(MyRender, 255, 255, 255, 255);
		SDL_RenderClear(MyRender);

		SDL_SetRenderDrawColor(MyRender, 155, 255, 0, 0);
		SDL_Rect MyRect = { X,Y,50,50 };
		SDL_RenderDrawRect(MyRender, &MyRect);

		if (MyEvent.type==SDL_KEYDOWN)
		{
			if (MyEvent.key.keysym.sym==SDLK_w)
			{
				Y-= MoveSpeed;
			}
			if (MyEvent.key.keysym.sym == SDLK_s)
			{
				Y+= MoveSpeed;
			}
			if (MyEvent.key.keysym.sym == SDLK_a)
			{
				X-= MoveSpeed;
			}
			if (MyEvent.key.keysym.sym == SDLK_d)
			{
				X+= MoveSpeed;
			}
		}
		SDL_RenderPresent(MyRender);

	}

	


	SDL_DestroyRenderer(MyRender);
	SDL_DestroyWindow(MyWindow);

	SDL_Quit();


	return 0;
}