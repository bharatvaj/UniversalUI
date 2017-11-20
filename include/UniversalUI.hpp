#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include<iostream>
#include<mutex>
#include<vector>
#include<map>
extern "C" {
#include<clog/clog.h>
}

#include"config.h"

using namespace std;
namespace uui
{
class UI;
typedef int (*callback)(UI *, void *);
class UI
{
	public:
		typedef enum
		{
			DISPLAY,
			PROMPT
		} action;
		virtual void set(std::string, std::vector<std::string> *, callback);
		virtual void run(std::string, void *);
		virtual void error(std::string, std::string="OK");
		virtual void alert(std::string, action=DISPLAY, std::string="OK", std::string="Cancel");

	protected:
		static std::map<std::string, callback> *commands;
		static UI *instance;
		UI();
};
}
#endif
