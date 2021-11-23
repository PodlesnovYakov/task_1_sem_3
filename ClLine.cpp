#include "ClLine.h"
void ClLine::Show()
{
    ellipse(130 + 35 * x1, 330, 0, 180, 35 * y1, 40 * y1);

}
ClLine::ClLine()
{

}
ClLine::ClLine(int x2,int y2) : x1(x2), y1(y2)
{

}

ClLine::~ClLine()
{

}
