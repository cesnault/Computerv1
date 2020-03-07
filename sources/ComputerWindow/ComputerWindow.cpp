#include "ComputerWindow.h"
#include <gtkmm/grid.h>
#include <gtkmm/checkbutton.h>
#include "Graph.h"
#include <gdkmm/rgba.h>




ComputerWindow::ComputerWindow() : m_Button_FixLines("Fix lines")
{
	set_title("thin lines exemple");

	m_Container.set_orientation(Gtk::ORIENTATION_HORIZONTAL);

	color.set_rgba_u(65535, 0, 0, 65535);
	Gtk::StateFlags state = Gtk::STATE_FLAG_NORMAL;
	m_Button_FixLines.override_background_color(color, state);

	color.set_rgba_u(0, 0, 0, 65535);
	
	m_Container.override_background_color(color, state);


	m_Container.add(m_Area_Lines);
	m_Container.add(m_Button_FixLines);

	add(m_Container);

	
	m_Button_FixLines.signal_toggled().connect(sigc::mem_fun(*this, &ComputerWindow::on_button_toggled));

	on_button_toggled();

	show_all_children();
}

ComputerWindow::~ComputerWindow()
{

}

void ComputerWindow::on_button_toggled()
{
	m_Area_Lines.fix_lines(m_Button_FixLines.get_active());
}