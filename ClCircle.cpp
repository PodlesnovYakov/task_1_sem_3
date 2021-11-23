#include "ClCircle.h"
void ClCircle::Show()
{
    circle(60+70*x,y,r);
}
ClCircle::ClCircle()
{

}
ClCircle::ClCircle(int x0, int y0) : x(x0), y(y0)
{

}

ClCircle::~ClCircle()
{

}
