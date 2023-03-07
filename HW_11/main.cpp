// Attached: HW_11 Extra Credit
// ====================================================
// File: main.cpp
// ====================================================
// Programmer: Nour Shinnawi
// Class: CIS 17A
// Instructor: Dennis Rainey
//
// Description: 
// This program 
// 
// ====================================================

#include <iostream>
#include <ctime>
#include <thread>
#include <Windows.h>
using namespace std;

void writeRoots();
void writeSquares();

int main()
{
	cout << "main: startup\n\n";
	thread workerThread();
	cout << "main: waiting for thread\n\n";
	workerThread.join();
	cout << "main: done\n\n";


	return 0;
}