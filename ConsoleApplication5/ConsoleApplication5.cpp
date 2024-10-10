// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
#include<time.h>
#include <string>
#include <fstream>
using namespace std;
int create() {
	ofstream rsfsr;                /// LOGGING 
	string ilukha;                 //  LOGGING
	getline(cin, ilukha);
	cout << "YOU adress files\n";

	getline(cin, ilukha);

	rsfsr.open(ilukha);
	rsfsr.close();
	return 1;
	//logging();
}
int edit() {
	ofstream rsfsr;
	string ilukha;
	string text;
	getline(cin, ilukha);
	cout << "YOU adress files\n";
	getline(cin, ilukha);

	rsfsr.open(ilukha);
	cout << "YOU text NOW\n";
	getline(cin, text);
	rsfsr << text;
	rsfsr.close();
	//logging();
	return 2;
}
int removeF() {
	string ilukha;
	getline(cin, ilukha);
	cout << "YOU adress files\n";

	getline(cin, ilukha);

	if (remove(ilukha.c_str()) != 0)
		cout << "error REmovinf file";
	else
		cout << "FILE REMOVE SUCCESX";
	return 3;
}
void logging(int AG){
	ofstream AP;
	string onekurse;
	getline(cin, onekurse);
	cout << "YOU LOGGING  !!!!! WAAAARRNIING !!!! LLLOOOGGGING adress files\n";
	getline(cin, onekurse);
	AP.open(onekurse, ios::app);
	string logtext;
	switch (AG) {
	case 0: logtext = "\n(_) выполнен вход в программу(выполгуг вщрд варолушрррву)"; break;
	case 1: logtext = "\nсозщлаш файлц(создан файл)"; break;
	case 2: logtext = "\nфацйш отрелдактитолоан(файл отредактирован)"; break;
	case 3: logtext = "\nafek rkdjtu(фа1л 3ойлен(файл удален))"; break;
	case 4: logtext = "\nвыполнен выщод и0 прогврфььы(выполнен выход из программы) "; break;
	default: cout << "LOG ERROR";
	}
	string log;
	time_t mytime = time(NULL);
	struct tm* now = localtime(&mytime);
	char str[20];
	strftime(str, sizeof(str), "%T", now);
	log = str + logtext;
	AP << log;

} // пУСКАЙ ПРИНГИМАЕТ В ЧСЕБЯ ЗНАЧЯЕНМЯ И В ЗАВИСИМОЧТИ ОТ ЗНГАЧЕНИЯ ОБРАБАЫТЫВАЕТ СОБЫТИЯЧ
void kilLogRam() {
	ofstream AP;
	string onekurse;
	getline(cin, onekurse);
	cout << "YOU LOGGING adress files(  He sweety slepping after this ^~^)\n";
	getline(cin, onekurse);
	AP.close();
	

}
void work() {
	int sh;
	bool fool = true;
	logging(0);
	while (fool) {
		cout << "Выберите действие:\n1 - создать файл;\n2 - редактировать файл;\n3 - удалить файл\n4 - выход из программы\n";
		cin >> sh;
		switch (sh) {
		case 1: create(); break;
		case 2: edit(); break;
		case 3: removeF(); break;
		case 4: fool = false; logging(4);
		default: cout << "Я ХОЧКУ ЧТОБЫ ТЫ КРТНЧИЛ НАБИРАТЬ WRONG TEXT ПОЗДНО НОЧЬЮ";
		}
	}
	kilLogRam();
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
