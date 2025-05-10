/*/////////////////////////////////////////////////////////////////////////
						 OOP244 Ms5:
Full Name  : Rhowen Vaughn Wendelle Yu
Student ID#: 142671221
Email      : rvwyu@myseneca.ca
Section    : ZEE
Date       : 2024.04.08
Authenticity Declaration:
I have done all the coding by myself and only copied the code that my
professor provided to complete my workshops and assignments.
/////////////////////////////////////////////////////////////////////////*/
#include <iostream>
#include "TestPatient.h"
using namespace std;
namespace seneca {
	int nextTestTicket = 1;
	TestPatient::TestPatient():Patient(nextTestTicket){
		nextTestTicket++;
	}

	char TestPatient::type() const
	{
		return 'C';
	}

	ostream& TestPatient::write(ostream& ostr) const
	{
		if (&ostr == &cout) {
			ostr << "Contagion TEST\n";
		}
		Patient::write(ostr);
		return ostr;
	}

	istream& TestPatient::read(istream& istr)
	{
		Patient::read(istr);
		if (&istr != &cin) {
			nextTestTicket = number() + 1;
		}
		return istr;
	}


}