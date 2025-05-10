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
#ifndef SENECA_TRIAGEPATIENT_H
#define SENECA_TRIAGEPATIENT_H
#include "Patient.h"

namespace seneca {
	extern int nextTriageTicket;
	class TriagePatient :public Patient {
		char* m_symptoms{};
	public:
		// Default Constructor
		TriagePatient();
		char type()const;
		std::ostream& write(std::ostream& ostr = std::cout) const override;
		std::istream& read(std::istream& istr = std::cin)override;
		~TriagePatient();
	};
}
#endif