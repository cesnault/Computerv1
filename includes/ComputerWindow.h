#ifndef COMPUTER_WINDOW_H
#define COMPUTER_WINDOW_H
#include <gtkmm/window.h>
#include <gtkmm/grid.h>
#include <gtkmm/checkbutton.h>
#include "Graph.h"

class RGBA;
class ComputerWindow : public Gtk::Window
{
public:
	ComputerWindow();
	virtual ~ComputerWindow();

protected:
	//Signal Handlers:
	void on_button_toggled();


private:
	Gtk::Grid m_Container;
	Graph m_Area_Lines;
	Gdk::RGBA color;
	Gtk::CheckButton m_Button_FixLines;
};



#endif // !COMPUTER_WINDOW_H
