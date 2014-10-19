/** 
 * e-herfi.cpp: Defines the entry point for the console application.
 * @author Mirjalal Talishinski
 * @compiler Dev-C++
 * @created 18.10.14
 */

#include <iostream>

using namespace std;

int main()
{
	int en, hund, i;
	int say = 0;
herf:
	cout << "eni daxil edin: ";
	cin >> en;
	cout << "hundurluyu daxil edin: ";
	cin >> hund;
	
	cout << "\n\n\n";
	
	cout << "\t";
	for (i = 0; i < en; i++)
		cout << "*";
		
	for (i = 0 ; i < hund-1; i++)
		cout << "\n\t" << "*";
	
	for (i = en; i >= en/2; i--)
		cout << "*";
	
	for (i = 0; i < hund-1; i++)
		cout << "\t\n\t*";
		
	for (i = 0; i < en-1; i++)
		cout << "*";
	
	cout << "\n\n\n\n";	
	
	return 0;
}

