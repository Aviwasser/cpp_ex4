#include "iostream"
#include "CircularInt.hpp"
#include <cassert>
using namespace std;

//constructor
CircularInt::CircularInt(int lowNum, int highNum){
	this->lowNum = lowNum;
	this->highNum = highNum;
	this->ans = lowNum;

}

CircularInt::CircularInt(int x1) {
	this->ans = x1;
}

// distructor
CircularInt::~CircularInt(){
}


ostream & operator<<(ostream & os, const CircularInt &c)
{
		os << c.ans;
		return os;
	
}



int& CircularInt::operator+=(const int & c)
{
	ans = (ans + c) % highNum;
	return ans;
} 


int& CircularInt::operator-=(const int & c)
{
	ans = (ans - c) % highNum;
	return ans;
}



int& CircularInt::operator++()
{
	ans = ans + 1;
	if (ans > highNum) ans = ans - highNum ;
	return ans;
}

int& CircularInt::operator--()
{
	ans = ans - 1;
	if (ans > highNum) ans = ans - highNum;
	return ans;
}

//unary - operator overloading
int& CircularInt::operator-()
{
	ans = highNum-(ans % highNum);
	return ans;
}
int& CircularInt::operator*=(const int & c)
{
	ans = (ans * c) % highNum;
	return ans;
}
//____________________________________________


// operator overloading minus

 int& CircularInt::operator=(const int&c) {
	 ans = c;
	 return ans;
 }
 



