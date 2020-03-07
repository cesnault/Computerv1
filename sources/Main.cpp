#include "main.h"
#include "ErrorGestion.h"
#include <gtkmm/application.h>
#include <gtkmm/window.h>
#include <iostream>
#include "ErrorEnum.h"
#include "ComputerWindow.h"
using namespace std;

int main(int argc, char** argv)
{
	if (argc == 1)
	{
		auto app = Gtk::Application::create(argc, argv, "org.gtkmm.example");
		
		ComputerWindow window;


		return app->run(window);
	}
	else
	{
		ErrorGestion::ErrorHandle(ErrorType::NoArg);
	}

	return 0;
}