#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include<iostream>
#include<mutex>
#include<clog/clog.h>

#include"config.h"

using namespace std;

class UI
{
	
	protected:
		static UI *instance;
		static std::mutex ui_mutex;
		static UI *get_instance();
	public:
	UI(){
	}
	typedef enum {
		DISPLAY,
		PROMPT
	} action;	

	virtual void error(std::string, std::string="OK"){
	}
	virtual void alert(std::string, action=PROMPT, std::string="OK", std::string="Cancel"){
	}
};

#endif
