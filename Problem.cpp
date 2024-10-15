// Deep Patel
// Chapter 2
// Height Conversion problem

#include<iostream>
#include<string>

using namespace std;

int main()
{
	int height, feet, inches;

	height = 75;

	feet = height / 12;
	inches = height % 12;

	cout <<height<<" inches converts to "<<feet<<"'"<<inches<<"\"" << endl;

	return 0;

}

/*
75 inches converts to 6'3"

C:\Users\deepp\OneDrive\Desktop\CIS 2541\Chap 2  HeightProblem\x64\Debug\Chap 2  HeightProblem.exe (process 3876) exited with code 0.
Press any key to close this window . . .
*/