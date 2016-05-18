#include"stdafx.h"
#include"Func.h"

using namespace std;

const int N = 100;
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
		cout << "enter strings: (for finish enter Ctrl+z)\n";
		while ((c = _getch()) != 26)
		if (c == 13) { fputc('\n', f); cout << endl; }
		else  { printf("%c", c); fputc(c, f); }
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
		cout << endl;
		char c;
		while ((c = fgetc(f)) != EOF){
		cout << c;
		}
		}
	
	
	fclose(f);
}


void change(char* m, char* n)
{
	FILE *f, *file;
	char t[N]={'\0'};
	fopen_s(&f, m, "r");
	if (f == NULL)
	{
		perror("Error opening file");
		system("pause");
	}
	fopen_s(&file, n, "wt");
	if (file == NULL)
	{
		perror("Error opening file");
		system("pause");
	}
	int count = 0;
	char s[1000];
	char a[5] = "\n";
	char b[8] = " ;:,.\t";
	char *tok;
	char *tok1;
	char *next = NULL;
	while (fgets(s, 1000, f)){
		for (tok = strtok_s(s, a, &next); tok; tok = strtok_s(NULL, a, &next)){
			for (tok1 = strtok_s(tok, b, &next); tok1; tok1 = strtok_s(NULL, b, &next))
			{
				if (strlen(tok1) != 2)
				{
					strcat_s(t, sizeof(t)-strlen(t), tok1);
					strcat_s(t, sizeof(t)-strlen(t), " ");
				}
				else count++;
			}
			strcat_s(t, sizeof(t)-strlen(t), "\n");
			}
	}
	fputs(t, file);
	fprintf(file, "number: %d ", count);
	fclose(f);
	fclose(file);
}
