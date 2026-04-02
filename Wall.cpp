#include "Wall.h"
#include"Engine.h"
#include"ResourceManager.h"

AWall::AWall(int InX, int InY, char InMesh)
{
	X = InX;
	Y = InY;
	Mesh = InMesh;
	ZOrder = 1;
	R = 100;
	G = 100;
	B = 100;
	
	Resource TempResource = GEngine->GetResourceManager()->LoadTexture("Data/wall.bmp", true, 100, 100, 100);
	Image = TempResource.Image;
	Texture = TempResource.Texture;
	//Load("Data/wall.bmp");
}

AWall::~AWall()
{
}
