#include "pch.h"
#include <stdio.h>
#include <iostream>
#define _CRTDBG_MAP_ALLOC



// 定数マクロ
#define MY_SIZE 30

//関数マクロ
#define MY_LOG( log ) printf( "File:%s Line:%d Func:%s Log:%s\n", __FILE__, __LINE__, __func__, log)

//条件付きコンパイル
#ifdef _DEBUG
#define DBG_NEW new ( _NORMAL_BLOCK,__FILE__,__LINE__)
#else
#define DBG_NEW new
#endif

struct PointData {
	int x;
	int y;
	int z;
};

int main() 
{
	printf("my size:%d", MY_SIZE);
	MY_LOG("test");
	PointData *pPointData = DBG_NEW PointData;
	_CrtDumpMemoryLeaks();
#ifdef hhirai
	std::cout << "Hello hhirai!\n";
#elif hhirai
	std::cout << "Hello hhirai!\n";
#elif yakihiro
	std::cout << "Hello Yokoyama\n";
#elif stadayosi
	std::cout << "Hello sugita!\n";
#else
	std::cout << "Who?\n";
#endif

}
