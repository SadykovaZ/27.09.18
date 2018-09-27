#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
using namespace std;
ifstream in_file("in.txt");
ofstream out_file("out.txt");
ifstream in1_file("in1.txt");
ifstream in2_file("in2.txt");
void file_reverse_wrtie()
{
	char str[200];
	if (in_file.eof()) return;
	in_file.getline(str, 200);
	file_reverse_wrtie();
	out_file << str << endl;
}

void file_read()
{
	char c;
	while (!in_file.eof())
	{
		in_file.get(c);
		out_file << c;
	}
}

void file_read_reverse()
{
	char c;
	while (in_file.get(c))
	{
		file_read_reverse();
		out_file << c;
	}
}

//void file_read_reverse()
//{
//	char c;
//	while (!in_file.eof())
//	{
//		in_file.get(c);
//		if (in_file.eof()) return;
//		file_read_reverse();
//		out_file << c;
//	}
//}
int whitespaces(const char* str)
{
	int k = 0;
	while (*str != '\0')
	{
		if (*str == ' ')
			k++;
		str++;
	}
	return k;
}
void add()
{
	char str[200];
	int c = 0;
	while (!in_file.eof())
	{
		in_file.getline(str, 200);
		out_file << str << endl;
		for (int i = 0; str[i] != '\0'; i++)
		{
			if (str[i] != ' ')
				c = 1;
			else
			{
				c = 0;
				break;
			}
		}
		if (c == 1) out_file << "------------" << endl;

	}
}
void file_write_with()
{
	char str[200];
	while (in_file.getline(str, 200))
	{
		cout << str << endl;
		cout << whitespaces(str) << endl;
		if (!whitespaces(str))
			cout << "-----------" << endl;


	}

}



void check_files()
{
	char str1[500];
	char str2[500];
	int x = 0;
	while (!in1_file.eof() || !in2_file.eof())
	{
		in1_file.getline(str1, 500);
		in2_file.getline(str2, 500);

		for (int i = 0, j = 0; (str1[i] != '\0'), (str2[j] != '\0'); i++, j++)
		{
			if (str1[i] == str2[j]) x = 0;
			else {
				x = 1;
				break;
			}

		}

		if (x == 1) cout << str1 << " " << str2 << endl;
	}
}

void statistik()
{
	char str[200];
	char s = 'я';
	//cout << (int) s << endl;

	/*for (int i = 0; i <= 255; i++)
	{
		cout << i << char(i) << endl;
	}*/
	while (!in_file.eof())
	{
		in_file.getline(str, 200);
		for (int i = 0; i < strlen(str); i++)
		{
			if (int(str[i])<252)
				cout << char (int (str[i]+3)) << " ";
			else cout << char(int(str[i] + 3 - 31)) << " ";
		}
	}
}
bool isUpper(char c)
{
	return((c >= 'А' || c <= 'Я'));
}
bool isLower(char c)
{
	return((c >= 'а' || c <= 'я'));
}
void main()
{
	//string s1, s2;
	setlocale(LC_ALL, "Rus");
	char c;
	int k = 3;
	while (cin.get(c))
	{
		if (isUpper(c) && c + k <= 'Я')
		{

		}

	}
	//while (!in1_file.eof() || !in2_file.eof())
	//{
	//	getline(in1_file, s1);
	//	getline(in2_file, s2);
	//	if (s1 == s2)
	//		continue;
	//	else
	//	{
	//		/*if (in1_file.eof() && in2_file.eof())  else {*/
	//		if (!in1_file.eof())
	//			cout << s1 << endl;

	//		if (!in2_file.eof())
	//			cout << s2 << endl;
	//			else
	//				cout << s1 << " " << s2 ;
	//		
	//	}


	//}




	statistik();
	//char str[200];
	//int h = 0 /*счетчик для количество строк*/, m = 0;
	//while (!in_file.eof())
	//{
	//	in_file.getline(str, 200);
	//	if (whitespaces(str) == 0) m = h;
	//	h++;
	//}
	//in_file.seekg(0);
	//h = 0;
	//while (!in_file.eof())
	//{
	//	in_file.getline(str, 200);
	//	out_file << str << endl;
	//	if (whitespaces(str) == 0 && h == m)
	//		out_file << "------------" << endl;
	//	h++;
	//}
	//if (m == 0)
	//	out_file << "------------" << endl;
	//
	/*char str[100];
	file_write_with();
	*///file_read_reverse();
	//file_reverse_wrtie();	

	/*while (!in_file.eof())
	{
		in_file.getline(str, 200);
		out_file << str << endl;

	}*/
	system("pause");
}