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

	stack<Massiv> my_stack;//������� ��������� ���� stack
	my_stack.push(a);//��������� ������ � ����� ����������
	my_stack.push(b);
	my_stack.push(c);
	my_stack.push(d);
	stack<Massiv> my_stack2 = my_stack;//������� ����� ����������, �.�. ��� ��������� �� ����� ��������� ���� ���������

	cout << "----------------------- Stack ----------------------" << endl;
	while (my_stack2.size()>0)//������� �� ����� �������� �����
	{
		cout << my_stack2.top();
		cout<< endl;
		my_stack2.pop();
	}
	//��� ����� ��� ����������!!!!!!!!!!!!!!!!!!!!!!!!!!

	cout << "----------------------- Delete  ----------------------" << endl;
	while (my_stack.size()>0)//��������� � ������ my_stack2 �������� my_stack, ����� �������
	{
		if (my_stack.size() != 2)
			my_stack2.push(my_stack.top());
		my_stack.pop();
	}
	while (my_stack2.size()>0)//��������� ���������� �������� ����� �� my_stack2 � my_stack2
	{
		my_stack.push(my_stack2.top());
		my_stack2.pop();
	}
	my_stack2 = my_stack; // ������ ����� my_stack ��� ������ �� �����
	while (my_stack2.size()>0)//������� �� ����� �������� �����
	{
		cout << my_stack2.top();
		cout<< endl;
		my_stack2.pop();
	}

	cout << "----------------------- Insert  ----------------------" << endl;
	while (my_stack.size()>0)//��������� � ������ my_stack2 �������� my_stack
	{
		my_stack2.push(my_stack.top());
		my_stack.pop();
	}
	Massiv e;
	cin >> e;
	while (my_stack2.size()>0)//��������� ���������� �������� ����� �� my_stack2 � my_stack2 � ��������� ������ �������
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
	my_stack2 = my_stack; // ������ ����� my_stack ��� ������ �� �����
	while (my_stack2.size()>0)//������� �� ����� �������� �����
	{
		cout << my_stack2.top();
		cout<< endl;
		my_stack2.pop();
	}

	cout << "----------------------- Delete two last element  ----------------------" << endl;
	for (int i = 0; i < 2; i++)//������� ��� ��������� ��������
	{
		my_stack.pop();
	}
	my_stack2 = my_stack; // ������ ����� my_stack ��� ������ �� �����
	while (my_stack2.size()>0)//������� �� ����� �������� �����
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
	stack<Massiv> my_stack_sec;//������� ��������� ���� stack
	my_stack_sec.push(w);//��������� ������ � ����� ����������
	my_stack_sec.push(x);
	my_stack_sec.push(y);
	my_stack_sec.push(z);
	stack<Massiv> my_stack_sec2 = my_stack_sec;//������� ����� ����������, �.�. ��� ��������� �� ����� ��������� ���� ���������
	while (my_stack_sec2.size()>0)//������� �� ����� �������� �����
	{
		cout << my_stack_sec2.top();
		cout<< endl;
		my_stack_sec2.pop();
	}

	cout << "----------- Insert into first stack elements of the second  ------------" << endl;
	my_stack_sec2 = my_stack_sec;//������� ����� ����������, �.�. ��� ��������� �� ����� ��������� ���� ���������
	while (my_stack_sec2.size()>0)//��������� �������� ������ ����� � ������
	{
		my_stack.push(my_stack_sec2.top());
		my_stack_sec2.pop();
	}
	my_stack_sec2 = my_stack_sec;//������� ����� ����������, �.�. ��� ��������� �� ����� ��������� ���� ���������
	while (my_stack.size()>0)//������� �� ����� �������� �����
	{
		cout << my_stack.top();
		cout<< endl;
		my_stack.pop();
	}
}
