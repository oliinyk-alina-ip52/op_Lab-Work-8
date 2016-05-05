#include"stdafx.h"
#include"Func.h"

using namespace std;

int size, i;
void write_file(char* t)
{
	FILE *f;
	fopen_s(&f,t, "w+t");
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
		while (!feof(f))
		{
			//fgets(s, 100, f);
				printf("%s", s[i]); i++;
			
		}
	}
	fclose(f);
}