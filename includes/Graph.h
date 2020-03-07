#ifndef GRAPH_H
#define GRAPH_H
#include <gtkmm/drawingarea.h>


class Graph : public Gtk::DrawingArea
{
public:
	Graph();
	virtual ~Graph();
	void fix_lines(bool fix = true);
	void force_redraw();

protected:

	bool on_draw(const Cairo::RefPtr<Cairo::Context>& cr) override;

private:
	double m_fix;
};



#endif
