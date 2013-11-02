#ifndef SHIPPARTWIDGET_HPP
#define SHIPPARTWIDGET_HPP

#include "gui/Widget.hpp"
#include "items/ItemData.hpp"

class ShipPartWidget: public gui::Widget
{
public:
	ShipPartWidget(gui::Menu* parent, ItemData::Type type);

	// inherited callbacks
	void OnKeyPressed(sf::Keyboard::Key code);
	void OnMouseClicked(int x, int y);

	/**
	 * Refresh label content (name and level)
	 */
	void RefreshLabel();

private:
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;

	ItemData::Type type_;
	xsf::Text m_text_name;
	xsf::Text m_text_level;
	xsf::Sprite halo_;
	sf::RectangleShape label_bg_;
};

#endif // SHIPPARTWIDGET_HPP