#ifndef CLGRAPH_H
#define CLGRAPH_H
#include "ClNode.h"
#include "ClEdge.h"
#include <ClDraw.h>

class ClGraph : public ClDraw
{
    public:
        ClGraph();
        ClGraph(int n,int *k);
        int* Setmas(int *k){
            for(int i = 0;i < SIZE*SIZE;i++){
                    a[i] = k[i];
                }
                return a;
            }
        virtual ~ClGraph();
        void Show();
        void Deikstra();
        void otvety(int *otvet,int k);

    private:
        int SIZE;
        ClNode *N;
        int *a;



};

#endif // CLGRAPH_H

