// lab8.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<stdio.h>
#include<iostream> 
#include <conio.h>  
#include <fstream> 
#include <stdlib.h> 
#include <errno.h>
//#pragma warning(disable : 4996) 

using namespace std;

void write_file();
void output_file();
int size, i;

int _tmain(int argc, _TCHAR* argv[])
{
	write_file();
	output_file();
	system("pause");
	return 0;
}


void write_file()
{
	char c;
	FILE *f;
	fopen_s(&f, "file.txt", "w+");
	cout << "enter strings:\n";
	while ((c = _getch()) != 26)
	if (c == 13) { fputc('\n', f); cout << endl; }
	else  { printf("%c", c); fputc(c, f); }

	size = i;
}
void output_file()
{
	char s[100];
	for (int k = 0; k < size; k++)
	{
		cout << s[i]; i++;
	}
}

