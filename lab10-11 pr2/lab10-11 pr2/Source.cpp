#include <iostream>
#include <stack>
#include <string>
#include <windows.h>
#include "masiv.h"
#include<time.h>
using namespace std;

void main()
{
	srand(time(0));
	Massiv a,b,c,d;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;

	stack<Massiv> my_stack;//создаем контейнер типа stack
	my_stack.push(a);//вставляем объект в конец контейнера
	my_stack.push(b);
	my_stack.push(c);
	my_stack.push(d);
	stack<Massiv> my_stack2 = my_stack;//создаем копию контейнера, т.к. при выведении на экран элементов стек очищается

	cout << "----------------------- Stack ----------------------" << endl;
	while (my_stack2.size()>0)//выводим на экран элементы стека
	{
		cout << my_stack2.top();
		cout<< endl;
		my_stack2.pop();
	}
	//ДЛЯ СТЕКА НЕТ ИТЕРАТОРОВ!!!!!!!!!!!!!!!!!!!!!!!!!!

	cout << "----------------------- Delete  ----------------------" << endl;
	while (my_stack.size()>0)//переносим в пустой my_stack2 элементы my_stack, кроме второго
	{
		if (my_stack.size() != 2)
			my_stack2.push(my_stack.top());
		my_stack.pop();
	}
	while (my_stack2.size()>0)//переносим полученные элементы назад из my_stack2 в my_stack2
	{
		my_stack.push(my_stack2.top());
		my_stack2.pop();
	}
	my_stack2 = my_stack; // делаем копию my_stack для вывода на экран
	while (my_stack2.size()>0)//выводим на экран элементы стека
	{
		cout << my_stack2.top();
		cout<< endl;
		my_stack2.pop();
	}

	cout << "----------------------- Insert  ----------------------" << endl;
	while (my_stack.size()>0)//переносим в пустой my_stack2 элементы my_stack
	{
		my_stack2.push(my_stack.top());
		my_stack.pop();
	}
	Massiv e;
	cin >> e;
	while (my_stack2.size()>0)//переносим полученные элементы назад из my_stack2 в my_stack2 и вставляем второй элемент
	{
		if (my_stack.size() == 1)
		{
			my_stack.push(e);
		}
		else {
			my_stack.push(my_stack2.top());
			my_stack2.pop();
		}
	}
	my_stack2 = my_stack; // делаем копию my_stack для вывода на экран
	while (my_stack2.size()>0)//выводим на экран элементы стека
	{
		cout << my_stack2.top();
		cout<< endl;
		my_stack2.pop();
	}

	cout << "----------------------- Delete two last element  ----------------------" << endl;
	for (int i = 0; i < 2; i++)//удаляем два последних элемента
	{
		my_stack.pop();
	}
	my_stack2 = my_stack; // делаем копию my_stack для вывода на экран
	while (my_stack2.size()>0)//выводим на экран элементы стека
	{
		cout << my_stack2.top();
		cout<< endl;
		my_stack2.pop();
	}


	Massiv w,x,y,z;
	cin >> w;
	cin >> x;
	cin >> y;
	cin >> z;

	cout << "----------------------- Create second stack  ----------------------" << endl;
	stack<Massiv> my_stack_sec;//создаем контейнер типа stack
	my_stack_sec.push(w);//вставляем объект в конец контейнера
	my_stack_sec.push(x);
	my_stack_sec.push(y);
	my_stack_sec.push(z);
	stack<Massiv> my_stack_sec2 = my_stack_sec;//создаем копию контейнера, т.к. при выведении на экран элементов стек очищается
	while (my_stack_sec2.size()>0)//выводим на экран элементы стека
	{
		cout << my_stack_sec2.top();
		cout<< endl;
		my_stack_sec2.pop();
	}

	cout << "----------- Insert into first stack elements of the second  ------------" << endl;
	my_stack_sec2 = my_stack_sec;//создаем копию контейнера, т.к. при выведении на экран элементов стек очищается
	while (my_stack_sec2.size()>0)//переносим элементы нового стека в старый
	{
		my_stack.push(my_stack_sec2.top());
		my_stack_sec2.pop();
	}
	my_stack_sec2 = my_stack_sec;//создаем копию контейнера, т.к. при выведении на экран элементов стек очищается
	while (my_stack.size()>0)//выводим на экран элементы стека
	{
		cout << my_stack.top();
		cout<< endl;
		my_stack.pop();
	}
}
