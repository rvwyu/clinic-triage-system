#ifndef SENECA_MENU_H
#define SENECA_MENU_H
#include <iostream>
namespace seneca {
	class Menu {
		char* m_text{};
		int m_numOptions{};
		int m_numIndentationTabls{};
		int selectedOption{};
	public:
		Menu(const char* menuContent, int numberOfTabs = 0);
		virtual ~Menu();
		void display() const;
		int& operator>>(int& Selection);
	};
}
#endif
