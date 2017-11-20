#include <UniversalUI.hpp>

uui::UI *uui::UI::instance = nullptr;
std::map<std::string, uui::callback> *uui::UI::commands = nullptr;

uui::UI::UI()
{
	if(instance == nullptr)
	{
		instance = this;
		commands = new map<std::string, callback>();
	}
	else
	{
		log_inf("uui::UI", "Multiple uui::UI are illegal");
	}
}

void uui::UI::set(std::string name, std::vector<std::string> *input_info, uui::callback cb)
{
	//stub
}

void uui::UI::run(std::string name, void *args)
{
	//stub
}
void uui::UI::error(std::string msg, std::string ok_msg)
{
	//stub
}

void uui::UI::alert(std::string msg, uui::UI::action ac, std::string ok_msg, std::string cancel_msg)
{
	//stub
}
