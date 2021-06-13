#pragma once
#include "Utils.h"
#include <cmath>

double Utils::calculateDistanse(const Coords& coord1, const Coords& coord2)
{
  return sqrt((coord1.x - coord2.x) * (coord1.x - coord2.x) + (coord1.y - coord2.y) * (coord1.y - coord2.y));
}
