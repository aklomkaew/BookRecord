// -----------------------------------------------------------
// File: BookRecord.h
// Atchima Klomkaew
// Programming Assignment 1 - BookRecord
// This program is entire my own work
// -----------------------------------------------------------

#ifndef BOOKRECORD_H
#define BOOKRECORD_H

class BookRecord
{
private:
	char m_sName[128];
	long m_lStockNum;
	int m_iClassification;
	double m_dCost;
	int m_iCount;
public:
	BookRecord();
	BookRecord(char *name, long sn, int cl, double cost);
	~BookRecord();
	void getName(char *name);
	void setName(char *name);
	long getStockNum();
	void setStockNum(long sn);
	void getClassification(int& cl);
	void setClassification(int cl);
	void getCost(double *c);
	void setCost(double c);
	int getNumberInStock();
	void setNumberInStock(int count);
	void printRecord();
};

#endif