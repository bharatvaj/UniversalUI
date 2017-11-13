#include <UniversalUI.hpp>

uui::UI::UI()
{
	//stub
}

template <typename... T>
void uui::UI::set(std::string name, uui::UI::callback<T...> cb, std::vector<std::string> *input_info)
{
	//stub
}

template <typename... T>
void uui::UI::run(std::string name, T... t)
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
