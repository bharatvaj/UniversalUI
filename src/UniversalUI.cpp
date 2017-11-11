#include <UniversalUI.hpp>
using namespace uui;

uui::UI *UI::instance=nullptr;
std::map<std::string, callback_function> *uui::UI::ui_commands=nullptr;

uui::UI::UI()
{
	ui_commands = new map<std::string, callback_function>();
}

uui::UI *uui::UI::get_instance()
{
	std::mutex ui_mutex;
	if(!uui::UI::instance)
	{
		ui_mutex.lock();
		if(!uui::UI::instance)
			uui::UI::instance=new UI();
		
		ui_mutex.unlock();
	}
	return uui::UI::instance;
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
