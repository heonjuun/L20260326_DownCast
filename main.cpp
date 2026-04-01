#include <iostream>
#include "Engine.h"
#include "World.h"

//#include"SDL.h"
//사용할 라이브러리 복사
// include경로 추가
// lib 경로 추가
// library 파일 등록
//#include"SDL_main.h"

//삼각함수를 그리기 위한 매스라이브러리
//#include"math.h"
//#define _USE_MATH_DEFINES
//
//#include<random>
//
////사용할 라이브러리 파일 추가
//#pragma comment(lib,"SDL2")
//#pragma comment(lib,"SDL2main")

using namespace std;

//int SDL_main(int argc, char* argv[])
//{
//	//좀더 좋은 난수를 얻기위해 랜덤라이브러리 사용
//	std::random_device RandomDevice;
//	std::mt19937 RandomGenerator(RandomDevice());
//
//	std::uniform_int_distribution<int> DistX(0, 640);
//	std::uniform_int_distribution<int> DistY(0, 480);
//
//	std::uniform_int_distribution<int> DistR(0, 255);
//	std::uniform_int_distribution<int> DistG(0, 255);
//	std::uniform_int_distribution<int> DistB(0, 255);
//	std::uniform_int_distribution<int> DistA(0, 255);
//
//	SDL_Init(SDL_INIT_EVERYTHING);
//
//	// 캔버스
//	SDL_Window* MyWindow= SDL_CreateWindow("Hello",300,300,1040,880,SDL_WINDOW_SHOWN);
//
//	
//
//	//GPU, 붓
//	SDL_Renderer* MyRender= SDL_CreateRenderer(MyWindow, -1, 0);
//
//
//
//	// --- 원 설정 ---
//	int centerX = 400; // 원의 중심 X
//	int centerY = 300; // 원의 중심 Y
//	int radius = 150;  // 원의 반지름
//
//	
//	while (true)
//	{
//		SDL_Event MyEvent;
//		SDL_PollEvent(&MyEvent);
//
//		if (MyEvent.type == SDL_QUIT)
//		{
//			break;
//		}
//		//CPU하는거 ->GPU가 할일을 적어줌 매우 많이
//		//GPU한테 보낼 명령어 모음
//		//윈도우 컬러
//
//		SDL_SetRenderDrawColor(MyRender, 255, 255, 255, 255);
//
//		SDL_RenderClear(MyRender);
//
//
//		//int Radius = 200;
//		//int CenterX = 500;
//		//int CenterY = 500;
//		//int Size = 15;
//
//		//for (int Theta = 0; Theta <= 360; Theta+= Size)
//		//{
//		//	SDL_SetRenderDrawColor(MyRender, 0, 255, 0, 255);
//		//	float Radian1 = (float)Theta * 3.141592f / 180.f;
//		//	float Radian2 = (float)(Theta+Size) * 3.141592f / 180.f;
//		//	int X1 = Radius * SDL_cos(Radian1)+ CenterX;
//		//	int Y1 = Radius * SDL_sin(Radian1)+ CenterY;
//		//	int X2 = Radius * SDL_cos(Radian2) + CenterX;
//		//	int Y2 = Radius * SDL_sin(Radian2) + CenterY;
//		//	SDL_RenderDrawLine(MyRender, X1,Y1,X2,Y2);
//		//}
//
//
//
//		
//		//double step = 0.01;
//		//for (double Angle = 0; Angle < 2 * M_PI; Angle += step)
//		//{
//		//	SDL_SetRenderDrawColor(MyRender, 0, 255, 0, 255);
//		//	// 공식: x = r * cos(θ), y = r * sin(θ)
//		//	int x = centerX + (int)(radius * cos(Angle));  //코사인은 x좌표구할때 원의 x축+ 반지름*
//		//	int y = centerY + (int)(radius * sin(Angle)); //사인은 y좌표 구할때 
//		//	SDL_RenderDrawPoint(MyRender,x,y);
//		//}
//
//		//for (int i = 0; i < 90; ++i)
//		//{
//		//	//어떻게 그릴지 정하는 명령어
//		//	//붓고르기
//		//	SDL_SetRenderDrawColor(MyRender, DistR(RandomGenerator), DistG(RandomGenerator), DistB(RandomGenerator), DistA(RandomGenerator));
//
//		//	//사각형 그려
//		//	//SDL_Rect MyRect = { DistX(RandomGenerator), DistY(RandomGenerator), DistX(RandomGenerator), DistY(RandomGenerator) };
//		//	//SDL_RenderDrawRect(MyRender, &MyRect);
//		//}
//
//		//CPU가 GPU에게 그리라고 명령
//		SDL_RenderPresent(MyRender);
//	}
//
//
//	SDL_DestroyRenderer(MyRender);
//
//	SDL_DestroyWindow(MyWindow);
//
//	SDL_Quit();
//
//	return 0;
//}

//int SDL_main(int argc, char* argv[])
//{
//	GEngine->GetWorld()->Load("level01.umap");
//
//	GEngine->Run();
//
//	delete GEngine;
//
//	return 0;
//}



