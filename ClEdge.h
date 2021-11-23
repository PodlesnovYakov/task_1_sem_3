#ifndef CLEDGE_H
#define CLEDGE_H

#include <ClLine.h>


class ClEdge : public ClLine
{

public:
    ClEdge();
    ClEdge(int x2, int y2, int num3);
    virtual ~ClEdge();
    char *Getnum1()
    {
        return sr;
    }
    void Setnum1(int val1)
    {
        itoa(val1,sr,10);
    }
    void Show();
private:
    char *sr;
};

#endif // CLEDGE_H
