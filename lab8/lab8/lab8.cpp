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
void read_file();


int _tmain(int argc, _TCHAR* argv[])
{
	write_file();
	read_file();
	system("pause");
	return 0;
}


void write_file()
{
	char s[100];
	char c;
	FILE *f;
	fopen_s(&f,"file.txt", "wt");
	do
	{
		cout << "Input string:"; 
		gets_s(s);
		fputs(s, f);
		cout << "Continue?(Y/N)"; cin >> c;
	} while ((c != 'n') && (c != 'N'));
	fclose(f);
}
void read_file()
{
	char s[40];
	FILE *f;
	fopen_s(&f,"file.txt", "rt");
	while (!feof(f))
	{
		fgets(s, sizeof(s), f);
		printf("%s\n", s);
	}
	fclose(f);
}
