#include "Goal.h"
#include"Engine.h"
#include"ResourceManager.h"

AGoal::AGoal(int InX, int InY, char InMesh)
{
	X = InX;
	Y = InY;
	Mesh = InMesh;
	ZOrder = 30;

	R = 0;
	G = 0;
	B = 255;
	//Load("Data/goal.bmp");
	Resource TempResource = GEngine->GetResourceManager()->LoadTexture("Data/goal.bmp", true, 55, 220, 15);
	Image = TempResource.Image;
	Texture = TempResource.Texture;
}

AGoal::~AGoal()
{
}
