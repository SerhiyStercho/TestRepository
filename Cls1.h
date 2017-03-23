#pragma once
#include"Cls4.h"
#include"Cls3.h"
class Invoice :public Document {

private:

	int numOfGoods;
	Invoice *next;
public:

	Invoice();
	Invoice(int,double,string,string,int);
	void setNum(int);
	int getNum();
	virtual void print();

};

