// C++
// LineRectangle - ������� ���������, ������� ������� ����� ��� 
//				   ������������� �� �������� ��������,
//                 � ��������� ���������.

// ����������� ����������� ���������
#include<iostream>

// ����������� ������������ ���
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus"); // ����������� ��������� ��� ������� ����

	// ���������� ����������� ����������:
	int LType;
	char sim;
	int qu, index;
	index = 0;

	// ���� ������ �� ������������ ��� ���������� �����
	cout << "������� ������: ";
	cin >> sim;


	cout << "������� ���-�� �������� � �����: ";
	cin >> qu;


	if (qu < 0)
	{
		cout << "����������� ���-�� �������� � �����!" << endl;
		return -1;
	}
	else


		cout << "�������� ��� �����: \n1 - ��� �������������; \n2 - ��� ���������������;" << endl;
	cin >> LType;


	if (LType != 1 && LType != 2)
	{
		cout << "����������� ��� �����!" << endl;
		return -1;
	}
	else

		cout << endl << endl << "���������: " << endl << endl;

	// ����� ����������:
	if (LType == 1)
	{
		while (index < qu)
		{
			cout << sim << endl;
			index++;
		}
	}
	else
	{
		while (index < qu)
		{
			cout << sim;
			index++;
		}
	}


	cout << endl << endl;


	int index2 = 0, index3 = 0;
	int sh, v;
	char sim2;


	cout << "������� ������ ��� ���������� ��������������: ";
	cin >> sim2;


	cout << "������� ������ ��������������: ";
	cin >> sh;


	if (sh < 1)
	{
		cout << "������������ ������!" << endl;
		return -1;
	}
	else


		cout << "������� ������ ��������������: ";
	cin >> v;

	if (v < 1)
	{
		cout << "������������ ������!" << endl;
		return -1;
	}

	cout << endl;

	cout << "���������: " << endl;

	// ����� ����������:
	while (index2 < v)
	{
		while (index3 < sh)
		{
			cout << sim2;
			index3++;
		}

		index3 = 0;
		cout << endl;
		index2++;
	}

	cout << endl << endl;

	// ���������� ���������� ���������
	system("pause");
	return 0;
}