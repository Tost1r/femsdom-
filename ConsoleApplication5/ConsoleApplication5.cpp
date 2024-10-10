// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>
using namespace std;
void create() {
	ofstream rsfsr;                /// LOGGING 
	string ilukha;                 //  LOGGING
	getline(cin, ilukha);
	getline(cin, ilukha);

	rsfsr.open(ilukha);
	rsfsr.close();
	logging();
}
void edit() {
	ofstream rsfsr;
	string ilukha;
	string text;
	getline(cin, ilukha);
	getline(cin, ilukha);


	rsfsr.open(ilukha, ios::app);
	getline(cin, text);
	rsfsr << text;
	rsfsr.close();
	logging();
}
void removeF() {
	string ilukha;
	getline(cin, ilukha);
	getline(cin, ilukha);

	if (remove(ilukha.c_str()) != 0)
		cout << "error REmovinf file";
	else 
}
void logging(){} // пУСКАЙ ПРИНГИМАЕТ В ЧСЕБЯ ЗНАЧЯЕНМЯ И В ЗАВИСИМОЧТИ ОТ ЗНГАЧЕНИЯ ОБРАБАЫТЫВАЕТ СОБЫТИЯЧ
void work() {
	int sh;
	bool fool = true;

	while (fool) {
		cout << "Выберите действие:\n1 - создать файл;\n2 - редактировать файл;\n3 - удалить файл";
		cin >> sh;
		switch (sh) {
		case 1: create(); break;
		case 2: edit(); break;
		}
	}
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	work();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
