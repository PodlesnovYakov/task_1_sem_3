#include "ClEdge.h"

void ClEdge::Show()
{
    ClLine::Show();
    outtextxy(130 + 35 * Getx1(), 325-40*Gety1(), sr);

}
ClEdge::ClEdge():sr(new char[4])
{

}
ClEdge::ClEdge(int x2, int y2, int num3) : ClLine(x2,y2),sr(new char[4])
{
    Setnum1(num3);

}
ClEdge::~ClEdge()
{
    delete [] sr; //освободить память

}
