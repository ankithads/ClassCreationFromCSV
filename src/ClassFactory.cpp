#include "../include/ClassFactory.hpp"
#include <string>
#include <vector>
#include <fstream>

void ClassFactory::getVariable(string& header, char delimiter)
{
	int index = 0;
	while(index < header.length())
	{
	string var = "";
	while(header[index] != ',' && index < header.length())
	{
		var += header[index];
		index++;
	}
	variable.push_back(var);
	index++;

	}
}

ClassFactory::ClassFactory(string className)
{
	this->className = className;
}

void ClassFactory::createClass(string input_file, string output_file)
{
	fstream infile, outfile;
	string header;
	char delimiter = ',';

	infile.open(input_file, ios::in);
	outfile.open(output_file, ios::in);

	if(outfile)
	{
		cout<<"file exists please delete the file";
		return;
	}

	outfile.clear();
	outfile.open(output_file, ios::out);

	getline(infile,header);
	outfile <<"class "<<className<<endl;
	outfile <<"{"<<endl;

	getVariable(header, delimiter);

	for (const auto& var: variable)
	{
		outfile <<"\tstring "<<var<<";"<<endl;
	}
	outfile <<"};"<<endl;

	infile.close();
	outfile.close();

}
  
