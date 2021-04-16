#pragma once
#include "Pair.h"
class Long : public Pair
{
public:
	Long();
	Long(string);
	Long(int, int);
	Long(const Long&);
	~Long();

	operator string() const;
	friend ostream& operator << (ostream&, const Long&);
	friend istream& operator >> (istream&, Long&);

	Long& operator = (const Long&);
	friend Long operator * (const Long&, const Long&);
	friend Long operator - (const Long&, const Long&);
};

