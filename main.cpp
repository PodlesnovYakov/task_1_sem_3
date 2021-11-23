#include "ClNode.h"
#include "ClEdge.h"
#include <ClGraph.h>

void f(ClDraw *q)
{
    q->Show();
}
int main()
{
    setlocale(LC_ALL,"Rus");
    int SIZE;
    cout << "¬ведите размер массива." << endl;
    cin >> SIZE;

    int arr[SIZE][SIZE];
    int temp;
    for (int i = 0; i < SIZE; ++i)
    {
        arr[i][i] = 0;
        for (int j = i + 1; j < SIZE; ++j)
        {
            cout << "¬ведите рассто€ние от " << i + 1 << " до " << j + 1 << " вершины :";
            cin >> temp;
            arr[i][j] = temp;
            arr[j][i] = temp;
        }
    }
    int k[SIZE*SIZE];
    for (int i = 0; i < SIZE; ++i)
    {
        for (int j = 0; j < SIZE; ++j)
        {
            k[i*SIZE+j] = arr[i][j];
        }
    }
    ClGraph q(SIZE,k);
    int gd = DETECT;
    int gm;
    initgraph(&gd,&gm,"");
    f(&q);
    q.Deikstra();
    readkey();
    readkey();
    closegraph();

    return 0;
}
