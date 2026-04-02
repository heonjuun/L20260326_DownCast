#include <iostream>
#include"Engine.h"
#include"World.h"

#include<map>

using namespace std;

int SDL_main(int argc, char* argv[])
{
	//딕셔너리 함수
	//키랑 밸류값을 쌍으로 묵는다.이 자료는 키를 정하고 가기때문에 인덱스를 매기지 않는다.
	//std::map<std::string, std::string> Dictionary;
	//Dictionary["Hello"] = "안녕";
	//Dictionary["word"] = "단어";
	//Dictionary["A"] = "에이";
	//for (std::map<std::string, std::string>::iterator i = Dictionary.begin(); i != Dictionary.end(); i++)
	//{
	//	cout << (i->first) << "," << (i->second) << endl; //first는 키 second는 밸류
	//}
	//for (auto i : Dictionary)
	//{
	//	cout << i.first << i.second << endl;
	//}

	GEngine->GetWorld()->Load("level01.umap");

	GEngine->Run();

	delete GEngine;
	





	return 0;
}



//비트 마스킹
//Uint32 Number1 = SDL_RENDERER_SOFTWARE | SDL_RENDERER_ACCELERATED;
////byte Number2 = SDL_RENDERER_ACCELERATED;
//if (Number1 & SDL_RENDERER_SOFTWARE)
//{

//}
//스탠실 기법 0과 1 걸러내기



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

	//시계 만들기 ->비트 연산
	//0 1 단위 이진수
	//byte Number1 = 0b00000001;//0000 001
	//byte Number2 = 0b00000010;//0000 001

	//byte Number3 = Number1 | Number2;
	//SDL_Log("%d", Number3);

	//Number3 = Number1 & Number2;
	//SDL_Log("%d", Number3);

	//Number3 = !Number1; //!<- true false만 계산함(0 1) 비트 다뒤집지 않음 숫자보고 싶으면 ~ 써야함

	//Number3 = ~Number1;
	//SDL_Log("%d", Number3);

	//Number3 = Number1 ^ Number2;
	//SDL_Log("%d", Number3);



	//SDL_Log("%d",Number1);

	//Number1=Number1 << 1;//shift 연산
	//SDL_Log("%d", Number1);

	//Number1 = Number1 << 1;//shift 연산
	//SDL_Log("%d", Number1);

	//Number1 = Number1 << 1;//shift 연산
	//SDL_Log("%d", Number1);

//#include<bitset>
//typedef unsigned char byte;
//using byte = unsigned char;
//using Uint64 = unsigned long long;

//int main()
//{
//	bitset<5>bit("01001");
//	int N;
//	cin >> N;
//	int* arr1 = new int[N];
//	int* arr2 = new int[N];
//
//	for (int i = 0; i < N; i++)
//	{
//
//	}
//
//	//int arr1[5] = {9,20,28,18,11};
//	//int arr2[5] = { 9,20,28,18,11 };
//
//	return 0;
//}
// 
// 
//int main()
//{
//	//받을 숫자의 갯수
//	int InputNumber=0;
//
//	cin >> InputNumber;
//
//	//입력할 숫자
//	Uint64 Number=0;
//
//	int XorSum=0;
//	// 0011 0101 0111
//
//				//if (Number < pow(2, j)) //pow 제곱 하는 함수
//			//{
//			//	break;				
//			//}
//	for (int i = 0; i < InputNumber; i++)
//	{
//		cin >> Number;	
//		for (int j = 0; j < 63; j++)
//		{
//			Uint64 NPOT=(1 << j);
//			if (Number < NPOT)
//			{
//				XorSum = XorSum^ NPOT;
//				break;
//			}
//			
//		}
//		//Number = 2 ^ Number; 
//		//XorSum^= Number;
//	}
//	cout << XorSum;
//	
//	
//	
//	return 0;
//}