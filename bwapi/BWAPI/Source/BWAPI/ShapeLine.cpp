#include "ShapeLine.h"
#include "DLLMain.h"
#include "Graphics.h"
#include "GameImpl.h"

#include "../../Debug.h"

namespace BWAPI
{
  ShapeLine::ShapeLine(int ctype, int x1, int y1, int x2, int y2, int color)
      : ctype(ctype)
      , x1(x1)
      , y1(y1)
      , x2(x2)
      , y2(y2)
      , color(color)
  {
  }

  void ShapeLine::draw()
  {
    if ( x1 == x2 && y1 == y2 )
      drawDot(x1, y1, color, ctype);
    else if ( x1 == x2 )
      drawBox(x1, y1 < y2 ? y1 : y2, 1, abs(y2 - y1), color, ctype);
    else if ( y1 == y2 )
      drawBox(x1 < x2 ? x1 : x2, y1, abs(x2 - x1), 1, color, ctype);
    else
      drawLine(x1, y1, x2, y2, color, ctype);
  }
};
