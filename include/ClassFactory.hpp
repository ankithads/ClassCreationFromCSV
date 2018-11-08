#ifndef _CLASSFACTORY_H
#define _CLASSFACTORY_H

#include <iostream>
#include <string>
#include <vector>

class ClassFactory
{
	private:
	string className;
	vector<string> variable;

	//procedure to get all the column
	void getVariable(string& header, char delimiter);

	public:
	//Constructor
	ClassFactory(string className);

	//procedure to create class from csv
	void createClass(string input_file, string output_file);
};


#endif
