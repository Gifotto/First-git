#include <iostream>

using namespace std;

class Point
{
	int x{ -100 };
	int y{ -100 };
public:
	// ����������� �� ���������
	Point() : x{ 0 }, y{ 0 }
	{
		cout << "��������� ����������� �� ���������\n";
	}

	//����������� � �����������
	Point(int pX, int pY) : x{ pX }, y{ pY }
	{
		cout << "��������� ����������� � �����������\n";
	}
	int getX() { return x; }
	int getY() { return y; }
};

int main()
{
	setlocale(0, "");

	Point point;
	cout << "point.x = " << point.getX() << endl;
	cout << "point.x = " << point.getY() << endl;

	Point point1{ 42, 33};
	cout << "point.x = " << point1.getX() << endl;
	cout << "point.x = " << point1.getY() << endl;

	return 0;
}

//struct Point
//{
//	int x;
//	int y;
//};
/*class Point
{
	
public:
	int x;
	int y;
	Point() : x{0}, y{0} { cout << "��������� ����������� �� ���������\n"; }			// { x = 0; y = 0; cout << "��������� ����������� �� ���������\n"; }
	Point(int pX, int pY) : x{pX}, y{pY} { cout << "��������� ����������� � �����������\n"; }
};

class Rectangle
{
	Point leftUPpperCorner;
	int widht;
	int height;
public:
	Rectangle() : leftUPpperCorner{10, 10}, widht {0}, height{0}
	{
		cout << "��������� ����������� ��������������\n";
	}
	Rectangle(int x, int y, int widthP, int heightP) : leftUPpperCorner{ x,y }, widht{ widthP }, height{ heightP }
	{
		cout << "��������� ����������� �������������� � �����������\n";
	}
};

int main()
{
	setlocale(0, "");

	Rectangle rect;
	Rectangle rect1{42, 33, 10, 5};

	return 0;
}

/*
class BadOrder
{
	int fieldOne;
	int fieldTwo;
public:
	BadOrder(int param) : fieldTwo{ param }, fieldOne{ fieldTwo + 10 } {} 
	void print()
	{
		cout << "fieldOne = " << fieldOne
			<< "\nfieldTwo = " << fieldTwo << endl;
	}
};

class GoodOrder
{
	int fieldOne;
	int fieldTwo;// ������� �������� �����
public:
	GoodOrder(int param) : fieldOne{ param + 10 }, fieldTwo{ param } {}
	void print()
	{
		cout << "fieldOne = " << fieldOne
			<< "\nfieldTwo = " << fieldTwo << endl;
	}
};

int main()
{
	setlocale(0, "");

	cout << "BadOrder\n";
	BadOrder t1{ 42 };
	t1.print();
	cout << "GoodOrder\n";
	GoodOrder t2{ 33 };
	t2.print();

	return 0;
}*/

	//int answewr{ 42 };								// ������� ����������
	//const float goodTemp{ 36.6 };					// ���������
	//int grades[4]{ 3,5,4,4 };						// ���������� ������
	//int matrix[2][2]{ {1,2},{3,4} };				// ��������� ������
	//int* dataPtr{ nullptr };						// ���������
	//char* str{ new char[14] {"Hello, world!"} };
	//int& reference{ answewr };
	//Point point{ 10,-6 };
	/*Point test1;
	Point test2{ 42, 33 };*/
	/*Rectangle rect1;
	Rectangle rect2{42, 33, 10, 5};*/

	/*int x = 0; // ��������
	int y(77); // ������
	int z{ 99 }; // ���������������*/