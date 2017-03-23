#include<iostream>
#include<string>
#include"Cls4.h"
using namespace std;

Document::Document() {
	next = NULL;
}
/// constructor
Document::Document(string nameOrganization,string date,int docNumber) {
	this->nameOrganization = nameOrganization;
	this->date = date;
	this->docNumber = docNumber;
	next = NULL;
}

void Document::setName(string name) {
	nameOrganization = name;
}

void Document::setNumber(int number) {
	docNumber = number;
}

void Document::setDate(string date) {
	this->date = date;
}

string Document::getName() {
	return this->nameOrganization;
}

string Document::getDate() {
	return this->date;
}

int Document::getNumber() {
	return this->docNumber;
}

Document Document::addItem(Document &a)
{
	Document *b = &a;
	Document *c = this;
		while (c->next != NULL) {
			c = c->next;
		}
		Document *p = new Document();
		p->nameOrganization = b->nameOrganization;
		p->date = b->date;
		p->docNumber = b->docNumber;
		p->next = NULL;
		c->next = p;

		return *this;
}

void Document::show()
{
	Document *c = this;
	while (c != NULL)
	{
		c->print();
		cout << endl;
		c = c->next;
	}
}

void Document::print()
{
	cout << nameOrganization << "   " << date << "   "<<docNumber<<endl;
}


/////////////


