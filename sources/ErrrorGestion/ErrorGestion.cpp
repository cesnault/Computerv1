#include <iostream>
#include <string>
#include <ErrorGestion.h>
#include <ErrorEnum.h>

using namespace std;

void ErrorGestion::CheckParams(int argc, char** argv)
{

}

 void ErrorGestion::ErrorHandle(ErrorType error)
{
	 if (error == ErrorType::NoArg)
	 {
		 cout << "No arguments detected, you need to give an argument" << endl;
	 }
		 exit;
	 	cout << "coucou" << endl;
}