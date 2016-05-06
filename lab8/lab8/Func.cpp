#include"stdafx.h"
#include"Func.h"

using namespace std;

int size, i;
void write_file(char* t)
{
	FILE *f;
	fopen_s(&f,t, "wt");
	if (f == NULL)
	{
		perror("Error opening file");
		system("pause");
	}
	else
	{
		char c;
		cout << "enter strings:\n";
		while ((c = _getch()) != 26)
		if (c == 13) { fputc('\n', f); cout << endl; }
		else  { printf("%c", c); fputc(c, f); }
		size = i;
	}
	fclose(f);
}

void output_file(char* t)
{
	FILE *f;
	fopen_s(&f, t, "r");
	if (f == NULL)
	{
		perror("Error opening file");
		system("pause");
	}
	else
	{
		char s[100];
			for (int k = 0; k < size; k++){
				printf("%s", s[i]); i++;
			}		
	}
	fclose(f);
}

void number(char *t)
{
	FILE *f;
	fopen_s(&f, t, "r");
	if (f == NULL)
	{
		perror("Error opening file");
		system("pause");
	}
	int count = 0;
	char s[100];
	char b[8] = " ,.\n\t";
	char *tok;
	char *next = NULL;
	while (fgets(s, 100, f)){
		for (tok = strtok_s(s, b, &next); tok; tok = strtok_s(NULL, b, &next))
		{
			if (strlen(tok) == 2 )
				count++;
		}
	}
	cout<< count;
	fclose(f);
}

void change(char *t, char *n)
{
	FILE *f;
	fopen_s(&f, t, "r");
	if (f == NULL)
	{
		perror("Error opening file");
		system("pause");
	}
}