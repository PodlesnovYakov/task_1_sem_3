#include "ClNode.h"
void ClNode::Show()
{
    ClCircle::Show();
    outtextxy(55 + 70 * Getx(), Gety()-10, num);
}
ClNode::ClNode() : num(new char[4]) //что это значит
{

}
ClNode::ClNode(int x0, int y0, int num0) : ClCircle(x0,y0), num(new char[4])
{
    Setnum(num0);
}

ClNode::~ClNode()
{
    delete [] num; //освободить память

}
