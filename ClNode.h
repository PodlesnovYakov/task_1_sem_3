#ifndef CLNODE_H
#define CLNODE_H
#include "ClCircle.h"
class ClNode : public ClCircle
{
public:
    ClNode();
    ClNode(int x0, int y0, int num0);
    virtual ~ClNode();
    char *Getnum()
    {
        return num;
    }
    void Setnum(int val)
    {
        itoa(val,num,10);
    }
    void Show();
private:
    char *num;
};
#endif // CLNODE_H
