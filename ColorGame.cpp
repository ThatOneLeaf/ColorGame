#include <iostream>       
#include <thread>        
#include <windows.h>
#include "ColorHeader.h"
using namespace std;
int main()
{
	//thread t1(colorgame::SpawnTimer);
	thread t2(colorgame::SpawnQuestions);
	//t1.join();
	t2.join();
	return 0;
}