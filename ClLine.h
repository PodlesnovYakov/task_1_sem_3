#ifndef CLLINE_H
#define CLLINE_H

#include <ClDraw.h>


class ClLine : public ClDraw
{
public:
    ClLine();
    ClLine(int x2, int y2);
    virtual ~ClLine();
    int Getx1()
    {
        return x1;
    }
    void Setx1(int val)
    {
        x1 = val;
    }
    int Gety1()
    {
        return y1;
    }
    void Sety1(int val)
    {
        y1 = val;
    }
    void Show();
private:
    int x1,y1;


};

#endif // CLLINE_H
