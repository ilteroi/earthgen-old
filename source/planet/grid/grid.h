#ifndef grid_h
#define grid_h

#include <deque>
#include <unordered_map>
#include "tile.h"
#include "corner.h"
#include "edge.h"
#include "create_grid.h"
class Planet;

typedef std::unordered_map<Vector3,int,Vec3Hasher> TileLookup;

class Grid {
public:
	Grid (int);
	
	int size;
	std::deque<Tile> tiles;
	std::deque<Corner> corners;
	std::deque<Edge> edges;

	TileLookup tile_lookup;
};

const std::deque<Tile>& tiles (const Planet&);
const std::deque<Corner>& corners (const Planet&);
const std::deque<Edge>& edges (const Planet&);

const Tile* closest_tile(const Planet&, const Vector3&);
const Tile* nth_tile (const Planet&, int);
const Corner* nth_corner (const Planet&, int);
const Edge* nth_edge (const Planet&, int);

int tile_count (const Planet&);
int corner_count (const Planet&);
int edge_count (const Planet&);

int tile_count (int size);
int corner_count (int size);
int edge_count (int size);

void set_grid_size (Planet&, int);

#endif