#pragma once
#include"Cls4.h"
#include"Cls2.h"
class Check : public Document{
private:
	
	double amount;
	Check *next;
   public:
	   Check();
	   Check(double, string, string, int);
	   void setAmount(double);
	   double getAmount();
	   virtual void print();
	  
	  
};

