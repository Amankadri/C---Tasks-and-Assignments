#include<iostream>
using namespace std;

class Grandfather
{ 
  protected:
  	
  	string getmoney = "want money...??";
  		
};

class Father: public Grandfather
{  
  
   protected:
   
      string dojob = "do some work...!";
    
   
    public:
   	int getValues()
   	{ 
   	   cout<<getmoney;
    }
  	
};

class Son :public Father
{
	public:
		
		int getValues1()
		{
			cout<<dojob;
		}

};

int main()
{ 
   Father F;
 F.getValues();
   
   Son S;
   S.getValues1();
    
}
