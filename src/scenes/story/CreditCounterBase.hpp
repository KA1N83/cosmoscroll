#ifndef CREDITCOUNTERBASE_HPP
#define CREDITCOUNTERBASE_HPP

#include "scenes/BaseMenu.hpp"

/**
 * Abstract menu displaying a panel with credit count in top left corner
 * Base for menus displaying the credit counter.
 */
class CreditCounterBase: public BaseMenu
{
public:
	CreditCounterBase();

	// override
	void OnFocus();

	// override
	void Show(sf::RenderTarget& target) const;
private:
	sf::Sprite credit_counter_bg_;
	sf::String credit_counter_;
};

#endif // CREDITCOUNTERBASE_HPP