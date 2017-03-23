#include<iostream>
#include"Cls2.h"
using namespace std;

Receipt::Receipt(){
	//next = NULL;
}

Receipt::Receipt(string type, string nameOrganization,string date,int docNumber):Document(nameOrganization,date,docNumber) {
	qType = type;
	//next = NULL;
}

void Receipt::setType(string type) {
	qType = type;
}

string Receipt::getType() {
	return qType;
}

void Receipt::print() {
	Document::print();
	cout << endl;
	cout << qType << endl;
}