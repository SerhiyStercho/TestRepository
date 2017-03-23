#pragma once
#include<iostream>
#include<string>
using namespace std;
class Document;

class Document{
private:
	string nameOrganization;
	string date;
	int docNumber;
	Document *next;
public:
	Document();
	Document(string ,string, int);
	//virtual ~Document();
	//virtual void P() = 0;
	virtual void print();
	void show();
	Document addItem(Document &a);
	void setName(string);
	void setDate(string);
	void setNumber(int);
	string getName();
	string getDate();
	int getNumber();
	
	
	
};
