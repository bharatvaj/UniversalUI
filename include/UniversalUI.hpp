#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include<iostream>
#include<mutex>
#include<map>
extern "C" {
#include<clog/clog.h>
}

#include"config.h"

using namespace std;
namespace uui
{
class UI
{	
	protected:
		static UI *instance;
		static map<std::string, void (*)(UI *, void *)> *ui_commands;
	public:
	UI();
	typedef enum
	{
		DISPLAY,
		PROMPT
	} action;
	virtual void set(std::string, void (*)(UI *,void *));
	virtual void run(std::string, void * = nullptr);
	virtual void error(std::string, std::string="OK");
	virtual void alert(std::string, action=PROMPT, std::string="OK", std::string="Cancel");
};
	typedef void (*callback_function)(UI *, void *);
}
#endif
