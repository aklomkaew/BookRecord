// -----------------------------------------------------------
// File: Main.cpp
// Atchima Klomkaew
// Programming Assignment 1 - BookRecord
// This program is entire my own work
// -----------------------------------------------------------

#include "BookRecord.h"
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	char name[128];
	long sNum;
	int cl;
	double cost;
	int num;
	BookRecord *br = new BookRecord;
	int count = 0;
	
	br->setName("Programming in C++");
	br->getName(name);
	if(strcmp(name,"Programming in C++") == 0)
	{
		count++;
	}

	br->setStockNum(12345);
	sNum = br->getStockNum();
	if(sNum == 12345)
	{
		count++;
	}

	br->setClassification(123);
	br->getClassification(cl);
	if(cl == 123)
	{
		count++;
	}

	br->setCost(50.50);
	br->getCost(&cost);
	if(cost == 50.50)
	{
		count++;
	}

	br->setNumberInStock(15);
	num = br->getNumberInStock();
	if(num == 15)
	{
		count++;
	}

	br->printRecord();

	cout << "The test is " << count << "/5" << endl;

	/*
	char name[128] = "To Kill The Mocking Bird";
	long num = 0;
	long sn = 12345;
	int clas = 8;
	double cost;
	double d = 8;
	int length;

	BookRecord *bookRecord = new BookRecord;
	bookRecord->getName(name);
	length = strlen(name);
	cout << "Book name: ";
	for(int i = 0; i < strlen(name); i++)
		cout << *(name + i);
	cout << "\nStock number: " << bookRecord->getStockNum() << endl;
	bookRecord->getClassification(clas);
	cout << "Classifications: " << clas << endl;
	bookRecord->getCost(&d);
	cout << "Cost: " << d << endl;
	cout << "Currently in stock: " << bookRecord->getNumberInStock() << endl;
	bookRecord->printRecord();

	cost = 9.5;
	char name2[128] = "Harry Potter";
	BookRecord *bookRecord2 = new BookRecord(name2, sn, clas, cost);
	bookRecord2->getName(name);
	length = strlen(name);
	cout << "Book name = ";
	for(int i = 0; i < length; i++)
		cout << *(name + i);
	cout << "\nStock number: " << bookRecord2->getStockNum() << endl;
	bookRecord2->getClassification(clas);
	cout << "Classifications: " << clas << endl;
	bookRecord2->getCost(&cost);
	cout << "Cost: " << cost << endl;
	cout << "Currently in stock: " << bookRecord2->getNumberInStock() << endl;
	bookRecord2->printRecord();
	*/

	return 0;
}
