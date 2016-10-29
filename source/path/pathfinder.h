#pragma once

#include <deque>
#include "../planet/planet.h"

std::deque<int> find_path(const Planet&, const Tile*& start, const Tile*& end);
