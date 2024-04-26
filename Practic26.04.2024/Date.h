#pragma once
#include <iostream>
using namespace std;
/*
�������� ����� Date, ������� ����� ��������� ���������� �
���� (����, �����, ���).
� ������� ��������� ���������� ����������, ����������
�������� �������� ���� ��� (��������� � ���� ���������� ����
����� ������), � ����� �������� ���������� ����
�� ������������ ���������� ����.
*/
class Date
{
	int day;
	int month;
	int year;

	int start_day;
	int start_month;
	int start_year;

	long int subDay() const;
	long int subMonth() const;
	long int subYear() const;
public:
	Date();
	Date(int, int, int);

	int operator-(const Date& date);
	friend Date& operator+(Date& date, int days);
	void show() {
		cout << this->day << "-" 
			<< this->month << "-" 
			<< this->year << endl;
	}
};

