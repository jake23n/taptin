#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdio>
using namespace std;


// nhap string theo mang
void nhap(string a[])    
{
	for (int i = 0; i < 5; i++)
	{
		getline(cin, a[i]);
	}
}
int main()
{
	// khai bao variable de nhap vao file
	string a[100];
	string write; 

	// khai bao file
	fstream filewrite, file;

	// doc tung chu thi string binh thuong, cac kieu khac tuong tu
	//doc tung dong
	string str;
	file.open("input.txt", ios::in);
	if (file.is_open())
	{
		while (getline(file, str))
		{
			cout << str << endl;
		}
	}
	file.close();

	// ghi vao file tung dong text  xoa het cac dong cu neu khong co ios::app
	nhap(a);
	filewrite.open("input.txt",ios::app | ios::out);
	for (int i = 0; i < 5;i++)
	{
		filewrite << a[i]<<endl;
	}
	filewrite.close();
}

