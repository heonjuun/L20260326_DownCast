#include "Player.h"
#include "Engine.h"

#include <iostream>

APlayer::APlayer(int InX, int InY, char InMesh)  
{
	X = InX;
	Y = InY;
	Mesh = InMesh;
	ZOrder = 100;

	R = 155;
	G = 55;
	B = 210;
}

APlayer::~APlayer()
{
}

void APlayer::BeginPlay()
{
	__super::BeginPlay();

}

void APlayer::Tick()
{
	__super::Tick();

	SDL_Event Event = GEngine->GetEvent();
	
	if (Event.type == SDL_KEYDOWN)
	{
		SDL_Keycode keycode = Event.key.keysym.sym;
		
		if (keycode == SDLK_w)
		{
			Y--;
			//Call Back
		}
		if (keycode == SDLK_s)
		{
			Y++;
		}
		if (keycode == SDLK_a)
		{
			X--;
		}
		if (keycode == SDLK_d)
		{
			X++;
		}
		if (keycode == SDLK_ESCAPE)
		{
			GEngine->Stop();
		}
	}

	UEngine::KeyCode = 0;
}

void APlayer::Render()
{
	//AActor::Render();
	__super::Render();
}