#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include<iostream>
#include<clog/clog.h>

using namespace std;

class UI
{
	public:
	typedef enum {
		DISPLAY,
		PROMPT
	} action;

	void error(std::string, action=DISPLAY, std::string="OK", std::string="Cancel");
};

#endif
