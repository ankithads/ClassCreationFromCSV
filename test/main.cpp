#include<iostream>


#include "../include/ClassFactory.hpp"

using namespace std;


int main()
{
	ClassFactory classfactory("vehicle");
	classfactory.createClass("test.csv", "test.cpp");
	return 0;
}
