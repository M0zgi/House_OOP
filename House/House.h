#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <Windows.h>
#include <string.h>


using namespace std;

class People
{
private:

	int countid;
	char* Fio;

public:
	People();
	People(int _countid, const char* _fio);

	//����������� �����������
	People(const People& obj);

	//����������
	~People();

	inline void ShowPeople(int countpeople, People* p);

};

class Flat
{
private:

	int* flat_number;
	People* PeopleFlat;

public:

	Flat();
	Flat(int _f, int countflat, People* p);

	void initFlat(int countflat, People* p);

	void ShowFlat(int countflat, int countpeople, People* p);

	//����������� �����������
	Flat(const Flat& obj);

	//����������
	~Flat();

};

class House
{
private:

	int house_number;
	Flat* HouseFlat;

public:
	
	House();
	House(int _h, Flat *_f);

	void init(int _h, int countflat, Flat* f);
	void ShowHouse(int countflat, int countpeople, People* p);

	//����������� �����������
	House(const House& obj);

	//����������
	~House();
};