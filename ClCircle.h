#ifndef CLCIRCLE_H
#define CLCIRCLE_H
#include "ClDraw.h"
class ClCircle : public ClDraw
{
public:
    ClCircle();
    ClCircle(int x0, int y0);
    virtual ~ClCircle();
    int Getx()
    {
        return x;
    }
    void Setx(int val)
    {
        x = val;
    }
    int Gety()
    {
        return y;
    }
    void Sety(int val)
    {
        y = val;
    }
    void Show();
private:
    int x;
    int y;
    int r = 20;
};
#endif // CLCIRCLE_H
