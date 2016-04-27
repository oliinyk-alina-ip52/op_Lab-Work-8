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

char *Input();
char s[10000];
void write_file();
int i, size;

int _tmain(int argc, _TCHAR* argv[])
{
	write_file();
	
	/*int value;
	FILE *Ptr;

	 fopen_s(&Ptr,"mass.txt", "w");
	printf("Enter value: \n");
	scanf_s("%d", &value);

	for (int i = 0; i<10; i++){
		fprintf(Ptr, "%d", value);
		scanf_s("%d", &value);
	}

	fclose(Ptr);*/
	system("pause");
	return 0;
}

void write_file()
{
	FILE *f;
	fopen_s(&f, "f.txt", "w");
	char ch;
	cout << "enter:\n";
	while ((ch = _getch()) != 17){
		if (ch == 13) { s[i] = '\0'; cout << endl; i++; }
		else { fprintf(f, "%c", ch); s[i++] = ch; i++; }
		size = i;
	}
		for (int k = 0; k < size; k++)
		{
			cout << s[i]; i++;
			fprintf(f, "%c", s[i]);
		}
	
	fclose(f);
}
