#ifndef SENECA_TESTPATIENT_H
#define SENECA_TESTPATIENT_H
#include "Patient.h"

namespace seneca {
	extern int nextTestTicket;
	class TestPatient :public Patient {
	public:
		// Default Constructor
		TestPatient();
		char type()const;
		std::ostream& write(std::ostream& ostr = std::cout) const override;
		std::istream& read(std::istream& istr = std::cin)override;
		virtual ~TestPatient() = default;
	};
}
#endif
