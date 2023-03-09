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

#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "String.h" 

String::String()
{
	cout << " Default Constructor " << endl;
	pData = new char[1];
	pData[0] = '\0';
	NumChars = 0;
	NumSlots = NumChars;
}

String::String(const String & Str)
{
	cout << " Copy constructor" << endl;
	NumChars = Str.NumChars;
	NumSlots = NumChars;
	pData = new char[NumChars + 1];
	strcpy(pData, Str.pData);
}

String::String(const char Str[])
{
	cout << " In Constructor" << endl;
	NumChars = strlen(Str);
	NumSlots = NumChars;
	pData = new char[NumChars + 1];
	strcpy(pData, Str);
}


String::~String()
{
	cout << " In Destructor" << endl;
	delete[] pData;
}

void String::Concat(const String & Str)
{
	char *pTemp;
	NumSlots = NumChars + Str.NumChars + 1;
	pTemp = new char[NumSlots + 1];
	strcpy(pTemp, Str.pData);
	strcat(pTemp, pData);
	delete[] pData;
	pData = pTemp;
	NumChars = NumSlots;

}

void String::Concat(const char Str[])
{
	char *pTemp;
	NumSlots = NumChars + strlen(Str) + 1;
	pTemp = new char[NumSlots + 1];
	strcpy(pTemp, pData);
	strcat(pTemp, Str);
	delete[] pData;
	pData = pTemp;
	NumChars = NumSlots;
}


String & String::Copy(const String & Str)
{
	if (this != &Str)
	{
		if (Str.NumChars > NumSlots)
		{
			delete[] pData;
			NumSlots = Str.NumChars;
			pData = new char[NumSlots + 1];
		}
		else;
		NumChars = Str.NumChars;
		strcpy(pData, Str.pData);
	}
	else;
	return *this;
}

String & String::Copy(const char Str[])
{
	size_t		TempLength;

	TempLength = strlen(Str);
	if (TempLength > NumSlots)
	{
		delete[] pData;
		pData = new char[TempLength + 1];
		NumSlots = TempLength;
	}
	else;
	NumChars = TempLength;
	strcpy(pData, Str);
	return *this;



}