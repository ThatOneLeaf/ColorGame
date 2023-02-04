#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
namespace colorgame
{
	void SpawnTimer()
	{
		for (int i = 0; i < 30; i++) {
			cout << 30 - i << " seconds remaining" << endl;
			if (i == 30)
			{
				break;
				cout << "No time left!";
			}
			Sleep(1000);
		}
	}
	void CheckAnswer()
	{
		//code
	}
	void SpawnQuestions()
	{
		for (int i = 0; i < 30; i++) {
			string colors[4] = { "Red","Yellow","Blue","Green" };
			string colorId[4] = { "4","6","1","2" };
			int ranColor = rand() % 4 + 0;
			int ranColorId = rand() % 4 + 0;
			string newcolor = "Color 0" + colorId[ranColor];
			system(newcolor);
			cout << newcolor << endl;
			//textcolor(1);
			cout << colors[ranColorId] << endl;
			Sleep(1000);
			//cout << "Level " << x;
		}
	}
}