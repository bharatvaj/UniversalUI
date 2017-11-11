#include <UniversalUI.hpp>
using namespace uui;

uui::UI *UI::instance=nullptr;
std::map<std::string, callback_function> *uui::UI::ui_commands=nullptr;

uui::UI::UI()
{
	if(instance)
	{
		std::cout << "[FATAL] uui::UI cannot be instantiated more than once" << std::endl;
		throw this;
	}
	std::mutex ui_mutex;
	ui_mutex.lock();
	if(!uui::UI::instance)
	{
		uui::UI::instance=this;
		ui_commands = new map<std::string, callback_function>();
	}
	ui_mutex.unlock();
}

void uui::UI::set(std::string command, void (*callback)(uui::UI *, void *))
{
	//stub
}
void uui::UI::run(std::string command, void *obj)
{

}
void uui::UI::error(std::string msg, std::string ok_msg)
{
	//stub
}

void uui::UI::alert(std::string msg, uui::UI::action ac, std::string ok_msg, std::string cancel_msg)
{
	//stub
}
