#pragma once

#include <SFML/Graphics.hpp>

struct Tile
{
	int tileNumber   = -1;
	bool passable    = false;
	bool transparent = false;
	bool visible     = false;
	bool explored    = false;
};

class Map
{
public:
	Map(sf::Vector2i size);

	const sf::Vector2i& getSize() const;

	const Tile& getTile(int x, int y) const;
	const Tile& getTile(sf::Vector2i pos) const;

	void setTile(int x, int y, int tile);
	void setTile(sf::Vector2i pos, int tile);

	void setProperties(int x, int y, bool passable, bool transparent);
	void setProperties(sf::Vector2i pos, bool passable, bool transparent);

	void setVisible(int x, int y, bool flag);
	void setVisible(sf::Vector2i pos, bool flag);

	void setExplored(int x, int y, bool flag);
	void setExplored(sf::Vector2i pos, bool flag);

protected:
	sf::Vector2i m_size;
	std::vector<Tile> m_tiles;
};
