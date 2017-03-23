#include<iostream>
#include"Cls1.h"

using namespace std;

Invoice::Invoice() {
	//next = NULL;
}
Invoice::Invoice(int num,double amount,string nameOrganization,string date,int docNumber):Document(nameOrganization,date,docNumber) {
	numOfGoods = num;
	//next = NULL;
}

void Invoice::setNum(int num) {
	numOfGoods = num;
}

int Invoice::getNum() {
	return numOfGoods;
}

void Invoice::print() {
	//Check::print();
	Document::print();
	cout << endl;
	cout << numOfGoods << endl;
}

