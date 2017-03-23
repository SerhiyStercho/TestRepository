#pragma once
#include"Cls4.h"
#include<iostream>
//#include<string>
class Receipt :public Document{
private:
	Receipt *next;
	string qType;
public:
	Receipt();
	Receipt(string,string,string,int);
	void setType(string);
	string getType();
	virtual void print();

};
