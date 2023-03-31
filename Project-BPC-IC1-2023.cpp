// Project-BPC-IC1-2023.cpp: Definuje vstupní bod pro aplikaci.
//
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <ctype.h>
#include "Project-BPC-IC1-2023.h"
#include "flag2.h"

using namespace std;

int main()
{
	cout << "Hello CMake." << endl;
	printf("Spoustim Flag2");



	int flag2 = demonstrationFlag2();



	if (flag2 != 0) {printf("something failed");}
	




	return 0;
}








