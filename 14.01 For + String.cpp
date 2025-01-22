// 14.01 For + String.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale>
#include <string>
#include <array>
#include <Windows.h>
#include <vector>
#include <algorithm>
using namespace::std;

int main()
{
	setlocale(LC_ALL, "RU");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	/* 
	string str = "";
	
	cout << "Вторая программа ДЗ - *Фильтр мата внутри фразы*\n" << endl;

	cout << "Введи свою грязную фразу ручками с клавиатуры: ";
	getline(cin, str);

	int countChar = str.size();
	cout << "Число символов твоей фразы составляет: " << countChar << endl;

	//Проверка
	if ((str.find("хуй") != string::npos) || (str.find("пизда") != string::npos) || (str.find("бля") != string::npos) || (str.find("уебок") != string::npos) || (str.find("ебать") != string::npos) || (str.find("пиздец") != string::npos))
	{
		cout << "Здесь есть мат! " << endl;
		//1
		if (str.find("хуй") != string::npos) 
		{
			str.erase(str.find("хуй"), 3);
			cout << "Из фразы удалено матерное слово *хуй* ! " << endl;
		}
		else 
		{
			cout << "Здесь нет метерщины *хуй* ! " << endl;
		}
		//2
		if (str.find("пизда") != string::npos) 
		{
			str.erase(str.find("пизда"), 5);
			cout << "Из фразы удалено матерное слово *пизда* ! " << endl;
		}
		else
		{
			cout << "Здесь нет метерщины *пизда* ! " << endl;
		}
		//3
		if (str.find("бля") != string::npos)
		{
			str.erase(str.find("бля"), 3);
			cout << "Из фразы удалено матерное слово *бля* ! " << endl;
		}
		else
		{
			cout << "Здесь нет метерщины *бля* ! " << endl;
		}
		//4
		if (str.find("уебок") != string::npos)
		{
			str.erase(str.find("уебок"), 5);
			cout << "Из фразы удалено матерное слово *уебок* ! " << endl;
		}
		else
		{
			cout << "Здесь нет метерщины *уебок* ! ";
		}
		//5
		if (str.find("ебать") != string::npos)
		{
			str.erase(str.find("ебать"), 5);
			cout << "Из фразы удалено матерное слово *ебать* ! " << endl;
		}
		else
		{
			cout << "Здесь нет метерщины *ебать* ! " << endl;
		}
		//6
		if (str.find("пиздец") != string::npos)
		{
			str.erase(str.find("пиздец"), 6);
			cout << "Из фразы удалено матерное слово *пиздец* ! " << endl;
		}
		else
		{
			cout << "Здесь нет метерщины *пиздец* ! " << endl;
		}
		cout << "Лови свою чистую фразу, грязный матершинник: " << str << endl;
	}
	else 
	{
		cout << "Фу, лох! В твоей фразе -* " << str << " *- даже мата нет!" << endl;
	}
	//сортировка символов по тупому функцией членом
	sort(begin(str), end(str));
	cout << str;

	*/

	//Задача 3 - вывод простых чисел в диапазоне от 2 до num  
	cout << "Третья программа ДЗ - *Вывод простых чисел в диапазоне от 2 до num*\n" << endl;

	int num = 0;
	
	cout << "Введи число конца диапазона (только положительное!), для опеределения всех простых чисел в нем: ";
	cin >> num;

	cout << endl << "В диапазоне (от 2 до " << num << ") простыми числами являются: \n" << endl;
	cout << 2 << endl;
	for (int i = 2; (i <= num); i++)
	{
		for (int j = 2; j < i; j++)
		if (i % j == 0) {
			break;
		}
		else if (j + 1 == i) 
		{ 
			cout << i << endl;
		}
	}


	//Это ко 2-ой проге ДЗ
	// 
	//Сортировка символов по умному, по-пацански - не повезло, не фартануло
	// 
    //string newStr = "";
	
	//cout << (int)str[0];
	//cout << (int)str[1];
	//cout << (int)str[2];

	//for (int i = 1; i < (str.size()-1);)
	//{
	//	int k = (i - 1);
		//string shortStr = "";
		//shortStr = str;
		//shortStr.erase(0, 1);
  //cout << shortStr << endl;
	
	//	if (((int)str[k]) > ((int)str[i]))
	//	{
		//	newStr[k] = str[k];
			//cout << newStr[k] << " 1";
		//	i++;
		//}
		//else
		//{
		//	newStr[k] = str[i];
	//		cout << newStr[k] << " 2";
		//	i++;
	//	}
	//	cout << newStr << endl;
	//}
	
		
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
