#include "Date.h"

Date::Date(int day, int month, int year): 
	day{day}, 
	month{month},
	year{year},
	start_day{1},
	start_month{1},
	start_year{1}{}

Date::Date():Date(1,1,2000){}

long int Date::subDay() const{
	return this->day - start_day;
}
long int Date::subMonth() const{
	if (this->month - start_month != 0)
		return 30.5*(this->month - start_month);
	return 0;
}
long int Date::subYear() const{
	return 365.25 * (this->year - start_year);
}

// 1-1-2024 : 5-1-2024 = 4
int Date::operator-(const Date& date) {
	return 
		abs((this->subDay() + this->subMonth() + this->subYear()) -
			(date.subDay() + date.subMonth() + date.subYear()));
}
Date& operator+( Date& date, int days) {
	while (days + date.day > 30) {
		if (days > 30) days -= 30;
		date.month++;
	}
	date.day = date.day + days;
	return date;
}
