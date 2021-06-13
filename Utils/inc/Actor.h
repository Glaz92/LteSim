#pragma once
#include "Coords.h"

class Actor
{
protected:
  Coords coords;

public:
  virtual void run() = 0;
  Coords getCoords();
};