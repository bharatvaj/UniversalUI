#include <UI.hpp>

uui::UI *uui::UI::instance = nullptr;
std::map<std::string, uui::callback> *uui::UI::commands = nullptr;

uui::UI::UI()
{

}


uui::UI *uui::UI::getInstance(){	
	if(instance == nullptr)
	{
		instance = new uui::UI();
		commands = new map<std::string, callback>();
	}
	return instance;
}

void uui::UI::set(std::string name, std::vector<std::string> *input_info, uui::callback cb)
{
	//stub
}

void uui::UI::run(std::string name, void *args, bool async)
{
	//stub
}
void uui::UI::error(std::string msg, std::string ok_msg)
{
	//stub
}

int uui::UI::alert(std::string msg, uui::action ac, std::string ok_msg, std::string cancel_msg)
{
	//stub
}

void uui::UI::close()
{
}
