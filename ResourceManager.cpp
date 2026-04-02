#include "ResourceManager.h"
#include"Engine.h"
#include "SDL.h"

UResourceManager::UResourceManager()
{
}

UResourceManager::~UResourceManager()
{
	for (auto Iter : Resources)
	{
		if (Iter.second.Image)
		{
			SDL_FreeSurface(Iter.second.Image);
		}
		if (Iter.second.Texture)
		{
			SDL_DestroyTexture(Iter.second.Texture);
		}
	}
	Resources.clear();
}

Resource& UResourceManager::LoadTexture(std::string Filename, bool bIsColorKey, Uint8 R, Uint8 G, Uint8 B)
{
	if (Resources.find(Filename) != Resources.end())
	{
		return Resources.find(Filename)->second;
	}
	Resource NewResource;
	NewResource.Image = SDL_LoadBMP(Filename.c_str());

	if (bIsColorKey)
	{
		SDL_SetColorKey(NewResource.Image, SDL_TRUE, SDL_MapRGB(NewResource.Image->format, 255, 0, 255));
	}
	
	NewResource.Texture = SDL_CreateTextureFromSurface(GEngine->GetRenderer(), NewResource.Image);
		

	return NewResource;
}


