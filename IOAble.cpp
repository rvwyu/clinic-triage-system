#include <iostream>
#include "IOAble.h"
using namespace std;
namespace seneca {
	std::ostream& operator<<(std::ostream& ostr, const IOAble& obj)
	{
		return obj.write(ostr);
	}
	std::istream& operator>>(std::istream& istr, IOAble& obj)
	{
		return obj.read(istr);
	}
}
