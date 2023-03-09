#ifndef STRING_H
#define STRING_H 

class String
{
public:

	String();
	String(const String &);
	String(const char[]);
	~String();
	int compare(const String &) const;
	int compare(const char[]) const;

	void Concat(const String &);
	void Concat(const char[]);

	String & Copy(const String &);
	String & Copy(const char[]);


	void Display()const;
	int Len()const;

private:
	char *  pData;
	size_t NumChars;
	size_t NumSlots;
};

inline int String::compare(const String & Str) const
{
	return strcmp(pData, Str.pData);
}

inline int String::compare(const char Str[]) const
{
	return strcmp(pData, Str);
}


inline void String::Display() const
{
	cout << pData;
}

inline int String::Len() const
{
	return NumChars;
}


#endif
