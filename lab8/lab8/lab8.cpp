// lab8.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include"Func.h"


using namespace std;

void write_file(char*);
void output_file(char*);
void change(char *);
//int size, i;

int _tmain(int argc, _TCHAR* argv[])
{
	write_file("file.txt");
	output_file("file.txt ");
	number("file.txt");
	//output_file();
	system("pause");
	return 0;
}



