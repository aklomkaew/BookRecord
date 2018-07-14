// -----------------------------------------------------------
// File: BookRecord.cpp
// Atchima Klomkaew
// Programming Assignment 1 - BookRecord
// This program is entire my own work
// -----------------------------------------------------------

#include "BookRecord.h"
#include <iostream>
#include <string>

using namespace std;

BookRecord::BookRecord()
{
	strcpy(m_sName,"");
	m_lStockNum = 0;
	m_iClassification = 0;
	m_dCost = 0.0;
	m_iCount = 0;
}

BookRecord::BookRecord(char *name, long sn, int cl, double cost)
{
	strcpy(m_sName, name);
	m_lStockNum = sn;
	m_iClassification = cl;
	m_dCost = cost;
	m_iCount = 1;
}

BookRecord::~BookRecord()
{
	
}

void BookRecord::getName(char *name)
{
	strcpy(name, m_sName);
}

void BookRecord::setName(char *name)
{
	strcpy(m_sName, name);
}

long BookRecord::getStockNum()
{
	return m_lStockNum;
}

void BookRecord::setStockNum(long sn)
{
	m_lStockNum = sn;
}

void BookRecord::getClassification(int& cl)
{
	cl = m_iClassification;
}

void BookRecord::setClassification(int cl)
{
	m_iClassification = cl;
}

void BookRecord::getCost(double *c)
{
	*c = m_dCost;
}

void BookRecord::setCost(double c)
{
	m_dCost = c;
}

int BookRecord::getNumberInStock()
{
	return m_iCount;
}

void BookRecord::setNumberInStock(int count)
{
	m_iCount = count;
}

void BookRecord::printRecord()
{
	char bookName[128] = "";
	int cl = 0;
	double cost = 0.0;
	int length = 0;

	getName(bookName);
	getClassification(cl);
	getCost(&cost);

	length = strlen(bookName);
	for(int i = 0; i < strlen(bookName); i++)
		cout << *(bookName + i);
	cout << "\t" << getStockNum() << "\t" 
		 << cl << "\t"
		 << "$" << cost << "\t"
		 << "In stock: " << getNumberInStock() << endl;
	cout << string(60,'*') << endl << endl;
}