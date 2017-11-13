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
class UI
{
	public:
		typedef enum
		{
			DISPLAY,
			PROMPT
		} action;
		template <typename... T>
		using callback = int (*)(UI *, T... t);

		UI();

		template <typename... T>
		void set(std::string, callback<T...>, std::vector<std::string> *);

		template <typename... T>
		void run(std::string, T...);
		void error(std::string, std::string="OK");
		void alert(std::string, action=DISPLAY, std::string="OK", std::string="Cancel");

	protected:
		template <typename... T>
		static std::map<std::string, callback<T...> > commands;
};
}
#endif
