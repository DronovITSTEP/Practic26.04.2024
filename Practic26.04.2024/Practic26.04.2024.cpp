#include <iostream>
#include "Date.h"
using namespace std;

//class Date {
//    int day;
//    int month;
//    int year;
//
//public:
//    Date(int day, int month, int year) : day{ day }, month{ month },
//        year{ year } {}
//    Date(int year) : Date(1, 1, year) {}
//
//    friend void display(Date date);
//};
//void display(Date date) {
//    cout << date.day << " "
//        << date.month << " "
//        << date.year << endl;
//}
//
//Date baseDate() {
//    return 2000;
//}

class Array {
    int size;
    int* array;
public:
    explicit Array(int size = 10);
    ~Array();
    int getSize()const;
    int getValue(int index) const;
    void setValue(int index, int value);
    void display(int index) const;
};
Array::Array(int size) {
    Array::size = size;
    array = new int[size];
}
Array::~Array() {
    delete[] array;
}
int Array::getSize() const{
    return size;
}
int Array::getValue(int index) const{
    return array[index];
}
void Array::setValue(int index, int value) {
    array[index] = value;
}
void Array::display(int index) const {
    cout << array[index] << endl;
}

void display1(const Array& array) {
    for (int i = 0; i < array.getSize(); i++) {
        array.display(i);
    }
    cout << endl;
}

class Point {
    float x;
    float y;
public:
    Point(float x, float y): x {x}, y{y}{}
    void show() {
        cout << x << " " << y << endl;
    }
    // перегрузка дружественной функцией
    friend Point operator+(const Point& p1, const Point& p2);

    // перегрузка внутренней функцией
    Point operator+(const Point& p) {
        return Point{ this->x + p.x, this->y + p.y };
    }
    Point operator-() {
        return Point(-this->x, -this->y);
    }
};
// перегрузка через глобальную функцию
//Point operator+(const Point& p1, const Point& p2) {
//    return Point{ p1.x + p2.x, p1.y + p2.y };
//}
// перегрузка дружественной функцией
//Point operator+(const Point& p1, const Point& p2) {
//    return Point{ p1.x + p2.x, p1.y + p2.y };
//}

int main()
{
    /*display(2024);
    Date date = 2023;
    display(date);
    Date date2 = baseDate();
    display(date2);*/

    //const int size = 4;
    //Array array(size);
    //for (int i = 0; i < size; i++) {
    //    array.setValue(i, size - i);
    //}
    //display1(array);

    //cout << endl;
   // display1(3);

    /*Point p1{ 3, 5 };
    Point p2{ 7,1 };
    
    Point p3 = p1 + p2;
    -p1;
    p3.show();*/
    //cout << p3;

    Date date1(1, 1, 2024);
    Date date2(1, 1, 2023);
    int days = date1 - date2;
    cout << days;
    date1 = date1 + 33;
    date1.show();
}

