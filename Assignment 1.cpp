//************************************************************************** 
//
// Programming Excerise 1   
// CLASS: COSC 1437.3S7 
// AUTHOR: TYLER ECHOLS 
// DATE: Jun 2017
//
//************************************************************************** 
#include <iostream>

using namespace std;

#include "String.h"

void main()
{
	String	Str1;
	String	Str2("abcdef");
	String	Str3(Str2);

	String *	pStr;

	cout << "_____________________________________ " << endl;

	cout << "Dynamically instantiating a MyString object with new" << endl;
	cout << endl;

	pStr = new String("WXYZ");
	cout << "The object contains ";
	(*pStr).Display();
	cout << endl;

	cout << "The object contains ";
	pStr->Display();
	cout << endl;

	cout << "Now get rid of the object" << endl;
	delete pStr;

	cout << "______________________________ " << endl;

	cout << "Demonstration of dynamic memory with new complete" << endl;
	cout << endl;

	cout << "Dynamically instantiating an array of MyString objects with new" << endl;
	pStr = new String[5];
	cout << endl;

	cout << "Now get rid of the all the objects" << endl;
	delete[] pStr;

	cout << "_____________________________ " << endl;

	cout << " Demonstration of dynamic memory with new complete" << endl;
	cout << endl;

	cout << "Str1 contains ";
	Str1.Display();
	cout << endl;

	cout << "Str2 contains ";
	Str2.Display();
	cout << endl;

	cout << "Str3 contains ";
	Str3.Display();
	cout << endl;

	cout << "_______________________________ " << endl;

	cout << "Testing Compare" << endl;
	cout << endl;

	if (Str2.compare(Str3) == 0)
		cout << "Str2 is the same as Str3" << endl;
	else
		cout << "Str2 is not the same as Str3" << endl;
	cout << endl;

	cout << "Finished testing Compare" << endl;

	cout << "_____________________________________ " << endl;

	cout << " Testing Compare with an array of characters" << endl;
	if (Str2.compare("WXYZQRS") == 0)
		cout << "Str2 is the same as WXYZQRS" << endl;
	else
		cout << "Str2 is not the same as WXYZQRS" << endl;

	cout << endl;

	cout << " Finished testing Compare with an array of characters" << endl;

	cout << "________________________________ " << endl;

	cout << " Testing Copy" << endl;

	Str2.Copy("abcdefghijklmnopqrstuvwxyz");
	cout << "Str2 now contains " << endl;
	Str2.Display();

	cout << endl;

	Str2.Copy("XXX");
	cout << "Str2 now contains " << endl;
	Str2.Display();

	cout << endl;

	Str2.Copy("ABCD");
	cout << "Str2 now contains " << endl;
	Str2.Display();

	cout << endl;


	Str1.Copy(Str2);
	cout << "Str1 now contains " << endl;
	Str1.Display();

	cout << endl;

	cout << " Finished testing Copy" << endl;

	cout << "________________________________________ " << endl;

	cout << " Testing Concat " << endl;
	cout << endl;

	Str1.Concat(Str1);
	cout << "Str 1 has " << endl;
	Str1.Display();

	cout << endl;


	Str2.Concat(Str2);
	cout << "Str 2 has " << endl;
	Str2.Display();

	cout << endl;


	Str3.Concat(Str3);
	cout << "Str 3 has " << endl;
	Str3.Display();

	cout << endl;

	cout << " Done testing Concat Function " << endl;

	cout << "_________________________________________ " << endl;

	cout << "Testing Len function " << endl;

	cout << "Str1 cotains: " << endl;
	cout << Str1.Len() << endl;

	cout << endl;

	cout << "Str2 cotains: " << endl;
	cout << Str2.Len() << endl;

	cout << endl;

	cout << "Str3 cotains: " << endl;
	cout << Str3.Len() << endl;

	cout << endl;

	cout << "Done testing Len Function " << endl;
}