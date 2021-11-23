#include "ClGraph.h"
#include "ClNode.h"
#include "ClEdge.h"
#include <ctime>
void ClGraph::Show()
{
    for(int i = 0; i < SIZE; i++)
    {
        N[i].Show();
    }
    int tx,ty;
    for(int i = 0; i < SIZE; i++)
    {
        for(int j = 0; j < SIZE; j++)
        {
            if(a[i*SIZE+j])
            {
                tx = i+j;
                ty = abs(i-j);
                ClEdge E(tx,ty,a[i*SIZE+j]);
                E.Show();
            }
        }

    }
}
void ClGraph::otvety(int *otvet,int k)
{

    int tx,ty;
    for (int i = 0; i < SIZE; ++i)
    {
        for (int j = 0; j < SIZE; ++j)
        {
            for(int m = 0; m < k - 1; ++m)
            {
                if ((i == otvet[m] && j == otvet[m + 1] && a[i*SIZE+j] != 0) || (j == otvet[m] && i == otvet[m + 1] && a[i*SIZE+j] != 0))
                {
                    tx = i+j;
                    ty = abs(i-j);
                    ClEdge K(tx,ty,a[i*SIZE+j]);
                    setcolor(14);
                    K.Show();
                }
            }
        }
    }

}
void ClGraph::Deikstra()
{
    int d[SIZE],v[SIZE];
    int tx,ty;
    int minindex, min, begin_index,temp;
    for (int i = 0; i < SIZE; ++i)
    {
        d[i] = 10000;
        v[i] = 1;
    }

    cout << "Введите вершину, расстояние от которой хотите найти: " << endl;
    cin >> begin_index;
    begin_index--;
    d[begin_index] = 0;

    do
    {
        minindex = 10000, min = 10000;
        for (int i = 0; i < SIZE; ++i)
        {
            if ((v[i] == 1) && (d[i] < min))
            {
                min = d[i];
                minindex = i;
            }
        }

        if (minindex != 10000)
        {
            for (int i = 0; i < SIZE; ++i)
            {
                if (a[minindex *SIZE + i] > 0)
                {
                    temp = min + a[minindex*SIZE+i];
                    if (temp < d[i])
                    {
                        d[i] = temp;
                    }
                }
            }
            v[minindex] = 0;
        }
    }
    while (minindex < 10000);

    cout << "Кратчайшие расстояния до вершин: " << endl;
    for (int i = 0; i < SIZE; ++i)
        cout << " " << d[i];

    cout << "\n";

    int ver[SIZE];

    for(int i = 0; i < SIZE; ++i)
    {
        int end = i;
        ver[0] = 1 + i;
        int k = 1;
        int weight = d[end];

        while (end != begin_index)
        {
            for (int i = 0; i < SIZE; ++i)
                if (a[i*SIZE+end] != 0)
                {
                    int temp = weight - a[i*SIZE+end];
                    if (temp == d[i])
                    {
                        weight = temp;
                        end = i;
                        ver[k] = i + 1;
                        ++k;
                    }
                }
        }

        int otvet[k];
        cout << endl << " Вывод кратчайшего пути" << endl;
        for (int i = k - 1; i >= 0; --i)
        {
            cout << " " << ver[i];
            otvet[i] = ver[i] - 1;
        }
        otvety(otvet,k);
        /*
        for (int i = 0; i < SIZE; ++i)
        {
            for (int j = 0; j < SIZE; ++j)
            {
                for(int m = 0; m < k - 1; ++m)
                {
                    if ((i == otvet[m] && j == otvet[m + 1] && a[i*SIZE+j] != 0) || (j == otvet[m] && i == otvet[m + 1] && a[i*SIZE+j] != 0))
                    {
                        tx = i+j;
                        ty = abs(i-j);
                        ClEdge K(tx,ty,a[i*SIZE+j]);
                        setcolor(14);
                        K.Show();
                    }
                }
            }
        }
        */
    }
}
ClGraph::ClGraph(int n, int *k):SIZE(n),N(new ClNode[n]), a(new int[n*n])
{
    for(int i = 0; i < SIZE; i++)
    {
        N[i].Setx(i+1);
        N[i].Sety(350);
        N[i].Setnum(i+1);
    }
    a=Setmas(k);
    for(int i = 0; i<SIZE; i++)
    {
        for(int j = 0; j<SIZE; j++)
        {
            cout << a[i*SIZE+j] << " ";
        }
        cout << endl;
    }
}

ClGraph::~ClGraph()
{

}
