#include "Player.h"
#include "Engine.h"
#include"GamePlayStatics.h"
#include"ResourceManager.h"

APlayer::APlayer(int InX, int InY, char InMesh)  
{
	X = InX;
	Y = InY;
	Mesh = InMesh;
	ZOrder = 100;

	R = 255;
	G = 0;
	B = 0;

	//Load("Data/player.bmp");

	Resource TempResource= GEngine->GetResourceManager()->LoadTexture("Data/player.bmp", true, 255, 0, 255);
	Image = TempResource.Image;
	Texture = TempResource.Texture;
	
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
			SpriteIndexY = 2;
			SpriteIndexX = 0;
		}
		if (keycode == SDLK_s)
		{
			Y++;
			SpriteIndexY = 3;
			SpriteIndexX = 0;
		}
		if (keycode == SDLK_a)
		{
			X--;
			SpriteIndexY = 0;
			SpriteIndexX = 0;
		}
		if (keycode == SDLK_d)
		{
			X++;
			SpriteIndexY = 1;
			SpriteIndexX = 1;
		}
		if (keycode == SDLK_ESCAPE)
		{
			GEngine->Stop();
		}
	}
	ElapsedTime += UGamePlayStatics::GetWorldDeltaSeconds();
	if (ElapsedTime>= ExecutionTime)
	{
		SpriteIndexX++;
		SpriteIndexX = SpriteIndexX % 5;
		ElapsedTime = 0;
	}

	//+UGamePlayStatics
}

//void APlayer::Load(std::string Filename)
//{
//	Image = SDL_LoadBMP(Filename.c_str());
//
//	SDL_SetColorKey(Image, SDL_TRUE, SDL_MapRGB(Image->format, 255, 0, 255));//영화찍을때 크로마키 같은 컨셉
//
//	Texture = SDL_CreateTextureFromSurface(GEngine->GetRenderer(), Image);
//}

void APlayer::Render()
{
	int TileSize = 30;
	
	//애니메이션
	int TotalFrames = 5;
	int Frame = (SDL_GetTicks() / 150) % TotalFrames;

	int FrameWidth = Image->w / 5;
	int FrameHeigt = Image->h / 5;

	SDL_Rect SourceRect = { SpriteIndexX * FrameWidth, SpriteIndexY * FrameHeigt,FrameWidth,FrameHeigt };

	SDL_Rect DestinationREct = { X * TileSize, Y * TileSize, TileSize,TileSize };

	SDL_RenderCopy(GEngine->GetRenderer(), Texture, &SourceRect, &DestinationREct);

	





	
	//AActor::Render();
	//__super::Render();
}
