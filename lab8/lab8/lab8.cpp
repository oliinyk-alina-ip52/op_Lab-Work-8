// lab8.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include"Func.h"


 using namespace std;

void write_file(char*);
void output_file(char*);
int number(char *);
void change(char*, char*);
//int size, i;

int _tmain(int argc, _TCHAR* argv[])
{
	write_file("file.txt");
	output_file("file.txt ");
	change("file.txt", "new_file.txt");
	//number("file.txt", "new_file.txt");
	output_file("new_file.txt");
	system("pause");
	return 0;
}



