// lab03.cpp : Defines the entry point for the console application.
//Jasmine Vaira
//COSC 2030 FALL 2018
//LAB 3

#include "stdafx.h"
#include <iostream>
using namespace std;


short shortSum(short n)
{
	short sum = 0;
	for (short i = 1; i <= n; i++)
	{
		sum = sum + i;
	}
	cout << "\nshort sum: " << endl;
	cout << "n = " << n << endl;
	cout << "sum = " << sum << endl;
	return sum;
}

long longSum(long n)
{
	long sum = 0;
	for (long i = 1; i <= n; i++)
	{
		sum = sum + i;
	}
	cout << "\nlong sum: " << endl;
	cout << "n = " << n << endl;
	cout << "sum = " << sum << endl;
	return sum;
}

float floatProduct(long n)
{
	long prod = 1;
	for (long i = 1; i <= n; i++)
	{
		prod = prod * i;
	}
	cout << "\nfloat product: " << endl;
	cout << "n = " << n << endl;
	cout << "product = " << prod << endl;
	return prod;
}

double doubleProduct(long n)
{
	long prod = 1;
	for (long i = 1; i <= n; i++)
	{
		prod = prod * i;
	}
	cout << "\ndouble product: " << endl;
	cout << "n = " << n << endl;
	cout << "product = " << prod << endl;
	return prod;
}

float strangeFloat(float n)
{
	float sum = 0;
	for (float j = 1; j <= n; j++)
	{
		sum = 1/n + sum;
	}
	cout << "\nstrange float: " << endl;
	cout << "n = " << n << endl;
	cout << "sum = " << sum << endl;
	cout << "the sum should equal 1" << endl;
	cout << "discrepency: " << 1 - sum << endl;
	return sum;
}

double strangeDouble(double n)
{
	double sum = 0;
	for (double j = 1; j <= n; j++)
	{
		sum = 1 / n + sum;
	}
	cout << "\nstrange double: " << endl;
	cout << "n = " << n << endl;
	cout << "sum = " << sum << endl;
	cout << "the sum should equal 1" << endl;
	cout << "discrepency: " << 1 - sum << endl;
	return sum;
}

int main()
{
	short a = 256;
	long b = 475556966;
	long c = 32;
	long d = 32;
	float e = 100;
	double f = 1000;

	shortSum(a);
	longSum(b);
	floatProduct(c);
	doubleProduct(d);
	strangeFloat(e);
	strangeDouble(f);

	cout << endl;

	for (float i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}

	cout << endl;

	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}

	getchar();
	return 0;
}

