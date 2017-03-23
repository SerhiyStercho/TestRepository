#include<iostream>
#include"Cls3.h"
#include"Cls4.h"
using namespace std;

Check::Check():Document() {
	//next = NULL;
}

Check::Check(double amount,string nameOrg,string date,int docNumber):Document(nameOrg,date,docNumber) {
	this->amount = amount;
	//next = NULL;
}
void Check::setAmount(double amount) {
	this->amount = amount;
}

double Check::getAmount() {
	return amount;
}

void Check::print() {
	this->Document::print();
	cout << endl;
	cout << amount << endl;
}