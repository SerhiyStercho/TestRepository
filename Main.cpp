#include<iostream>
#include"Cls4.h"
#include"Cls3.h"
#include"Cls2.h"
#include"Cls1.h"
#include"windows.h"

using namespace std;

void main() {
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	static Document *begin = new Document();

	Document *mas[4];
	mas[0] = new Document("UzNu","1.12.2016",673);
	mas[1] = new Check (158.12,"UzNuuu", "11.12.2016", 674);
	mas[2] = new Receipt("Платіжна", "UzNuuu", "11.12.2016", 675);
	mas[3] = new Invoice(15,12.2, "UzNuuu", "11.12.2016", 676);

	begin->addItem(*mas[0]);
	begin->addItem(*mas[1]);
	begin->addItem(*mas[2]);
	//begin->show();

	for (int i = 0; i < 4; i++)
	{
		mas[i]->print();
	}
	 
	system("pause>>void");
}
