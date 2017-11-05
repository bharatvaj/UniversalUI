#include<UniversalUI.hpp>

UI *UI::get_instance(){
	if(!instance)
	{
		ui_mutex.lock();
		if(!instance)
			instance=new UI();
		
		ui_mutex.unlock();
	}
	return instance;
}
