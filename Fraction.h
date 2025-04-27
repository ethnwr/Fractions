#pragma once
#include <iostream>
class Drob
{
private:
	int numerator;
	int denominator;
public:

	int plus()
	{
		int a = numerator + denominator;
		return a;
	}
	int minus()
	{
		int a = numerator - denominator;
		return a;
	}
	int ymnojenie()
	{
		int a = numerator * denominator;
		return a;
	}
	int delenie()
	{
		int a = numerator / denominator;
		return a;
	}

	int getNumerator() const
	{
		return numerator;
	}
	int setNumerator(const int& newNumerator)
	{
		return numerator = newNumerator;

	}

	double getDenominator() const
	{
		return denominator;
	}
	double setDenominator(const int& newDenominator)
	{
		return denominator = newDenominator;

	}
};
