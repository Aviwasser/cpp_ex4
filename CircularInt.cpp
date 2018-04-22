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
CircularInt::CircularInt(const CircularInt& other)
{
   lowNum = other.lowNum;
    highNum = other.highNum;
    ans = other.ans;
};

// distructor
CircularInt::~CircularInt(){
}


ostream & operator<<(ostream & os, const CircularInt &c)
{
		os << c.ans;
		return os;
	
}
CircularInt operator+( int num, CircularInt& c )
{ 
    CircularInt copy(c);
    copy =copy+num;
    return copy;
}
CircularInt operator+(CircularInt& c , int num)
{ 
    CircularInt copy(c);
    copy =copy+num;
    return copy;
}
const CircularInt operator+(CircularInt const& c1 , CircularInt const& c2)
{
    CircularInt temp(c1);
    temp += c2;
    return temp;

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
 



