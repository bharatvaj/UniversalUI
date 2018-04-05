#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include <iostream>
#include <mutex>
#include <vector>
#include <map>
#include <clog/clog.h>
#include <interface/IUI.hpp>

#include "config.h"

using namespace std;
namespace uui
{
typedef enum {
	DISPLAY,
	PROMPT
} action;

class UI;
typedef int (*callback)(UI *, void *);

class UI: public IUI
{

  public:
	UI *getInstance();
	virtual void set(std::string, std::vector<std::string> *, callback);
	virtual void run(std::string, void *, bool);
	virtual void error(std::string, std::string = "OK");
	virtual int alert(std::string, action = DISPLAY, std::string = "OK", std::string = "Cancel");
	virtual void close();

  protected:
	static std::map<std::string, callback> *commands;
	static UI *instance;
	UI();
};
}
#endif
