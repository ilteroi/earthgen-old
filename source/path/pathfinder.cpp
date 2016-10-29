#include "pathfinder.h"

std::deque<int> find_path(const Planet& p, const Tile*& start, const Tile*& end)
{
	std::deque<int> result;
	result.push_back( start->id );
	result.push_back( end->id );

	return result;
}
