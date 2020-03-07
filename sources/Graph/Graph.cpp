#include "Graph.h"


Graph::Graph() : m_fix(0)
{
	set_size_request(1200, 1000);
}

Graph::~Graph()
{

}

bool Graph::on_draw(const Cairo::RefPtr<Cairo::Context>& cr)
{
	Gtk::Allocation allocation = get_allocation();
	const int width = allocation.get_width();
	const int height = allocation.get_height();

	cr->set_line_width(1.0);

	for (int i = 0; i < width; i += 20)
	{
		cr->move_to(i + m_fix, 0);
		cr->line_to(i + m_fix, height);
	}
	cr->stroke();

	return true;
}

void Graph::fix_lines(bool fix)
{
	m_fix = fix ? 0.5 : 0.0;

	force_redraw();
}

void Graph::force_redraw()
{
	auto win = get_window();
	if (win)
	{
		Gdk::Rectangle r(0, 0, get_allocation().get_width(), get_allocation().get_height());
		win->invalidate_rect(r, false);
	}
}