// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include <iostream>

#include "List.h"
#include "arr.h"
#include "Vec2.h"
#include "Vec2util.h"

#include "Storage.h"

#include "objects.h"
#include "Architect.h"


int ErrorCode;

class WrongLon {
	double mLon;
public:
	WrongLon(double badlon):mLon(badlon){}
	double errorlon()const { return mLon; }
};
class WrongLat {
public:
	//WrongLat() {}
};

class Point {
public:
	Point(double la, double lo) {
		if (-90 <= la && la <= 90)
			if (-180 <= lo && lo < 180) {
				lat = la;
				lon = lo;
			}
			else
				throw WrongLon(lo);
		else
			throw WrongLat();

	}
	double getLat()const { return lat; };
	double getLon()const { return lon; };
private:
	double lat; // широта
	double lon; // долгота
};











void getDataSomewhere(Data * data) {
	if (data != nullptr)
		*data = rand();
}
void sendDataSomewhere(const Data * data) {
	std::cout << *data;
}
/*
void fillList(list *li) {
	for (int k = 0; k < 3; ++k) {
		Data data;
		getDataSomewhere(&data);
		//li->first = nullptr;
		li->addData(data);
	}
	
}
*/



void readPoint() {
	try {
		double la = 0;
		double lo = 0;
		std::cin >> la;
		std::cin >> lo;
		Point p2(la, lo);
	}
	catch (WrongLat e) {
		std::cout << "Bad console input ";
		throw ;
	}
}







void operator>>(std::istream& ist, point2 &p) {
	ist >> p.x;
	ist >> p.y;
}

class SampleOne {
public:
	int generateID() { return 0; };
	static SampleOne* getSampleOne() {
		if (_one == nullptr) _one = new SampleOne();
		return _one;
	}
private:
	SampleOne() {};
static SampleOne *_one;

};

SampleOne *SampleOne::_one = nullptr;



int main(){
	Architect ar;
	ar.addElement(4, 5.6);
	ar.addElement(4, 5.6,3,5.4);
	ar.addElement(4, 5.6, 3, 5.4,2.5);
/*













	point2 p1;

	section s;
	s.beg = p1;
	s.end = p1;






	std::cin >> p1;
	std::cout << p1.x << ',' << p1.y << std::endl;



	int ID = SampleOne::getSampleOne()->generateID();
	SampleOne sample;

	/*
	arr a;
	a.addData(3);
	a.addData(333);

	std::cout << a[0] << std::endl;
	std::cout << a[1] << std::endl;
	std::cout << a.operator[](1) << std::endl;

	*/


/*
	Vec2 v1;
	Vec2 v2(2, 3);

	std::cout << "id of v1 " << v1.getID() << std::endl;
	std::cout << "id of v2 " << v2.getID() << std::endl;


	//std::cout << "Sum .x " << v1.(v2).getX() << std::endl;
	(((std::cout << "Sum .x ") << (v1 + v2).getX()) << std::endl);

	//std::cout << "Sum " << (v1 + v2) << std::endl;
	std::cout << "Sum " << v1 + v2;
	std::cout << (v1 + v2) << (v1+v2+v1);
	operator<<(operator<<(std::cout,v1 + v2), v1 + v2 + v1);

	Vec2 v3 = v1+v2;
	std::cout << "id of v3 " << v3.getID() << std::endl;

	Vec2 v4 = v3*3;
	Vec2 v5 = v3 - v1;
	Vec2 v6 = -v5;
	//Vec2 v6 = v5*(-1);
	std::cout << "v5 " << v5 << "  v6 " << v6 << std::endl;


	int a = 5;
	int &ra = a;
	int b = 345;
	ra = b;



	
	

	std::cout << "ra = " << ra << std::endl;
	ra += 3;
	std::cout << "a = " << a << std::endl;










	for (int k = 0; k < 10; ++k) {
		Point p1(90, 79);
		std::cout << "p1 " << p1.getLat() << "\t" << p1.getLon() << std::endl;
		Point p2(p1.getLat(), p1.getLon());
		Point p3(p1);
		std::cout << "p3 " << p3.getLat() << "\t" << p3.getLon() << std::endl;
	}


	/*try {
		readPoint();
	}
	catch (WrongLat) {
		std::cout << "Wrong lat??" << std::endl;
	}
	catch (WrongLon w) {
		std::cout << "Wrong lon?? " << w.errorlon() << std::endl;
	}
	catch (...) {
		std::cout << "Bad day??" << std::endl;
	}
	*/



	/*if (ErrorCode == -1) {
		exit(1);
	}*/
/*
	list li1213(2355);
	
	for (int k = 0; k < 10; ++k) {
		Data data = k;
		list li(data);
		
		list::Pointer pointer = li.getFirstPtr();
		list::Pointer pointer1 = li.getFirstPtr();		

		li.clear();

		if (pointer1.canMoveNext()) {
			++pointer1;
			if (pointer1.canMoveNext())
				++pointer1;
		}

		int counter = 0;
		while (pointer1.canMoveNext()) {
			std::cout << "Current pointer" << *pointer << std::endl;
			std::cout << "Current pointer1" << *pointer1 << std::endl;
			if (*pointer % 2 == 0 && *pointer1 % 2 == 0) {
				++counter;
			}
			pointer1++;
			++pointer;
		}
	}
	


	int q = 1;
	int w = 0;

	w = q++;






	/*

	fillList(&li);
	
	li.rewind();
	while (li.canMoveNext()) {
		std::cout << li.getCurrent();
		li.moveNext();
	}
	*/
    return 0;
}

