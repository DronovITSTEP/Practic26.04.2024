#pragma once
#include <iostream>
using namespace std;
/*
Создайте класс Date, который будет содержать информацию о
дате (день, месяц, год).
С помощью механизма перегрузки операторов, определите
операцию разности двух дат (результат в виде количества дней
между датами), а также операцию увеличения даты
на определенное количество дней.
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

