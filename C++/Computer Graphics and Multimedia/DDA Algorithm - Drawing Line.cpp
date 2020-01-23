#include <graphics.h>
#include <dos.h>
#include <cmath>
#include <iostream>
using namespace std;
void DDAalgorithm(int x1, int y1, int x2, int y2);
int main(){
    /**INITIALIZE GRAPHICS**/
    int graphDriver = DETECT, graphMode;
    initgraph(&graphDriver, &graphMode, "c:\\tc\\bgi");
    /****/

    int x1, x2, y1, y2;
    cout << "Enter the value of x1 and y1: ";
    cin >> x1 >> y1;
    cout << "Enter the value of x2 and y2: ";
    cin >> x2 >> y2;

    DDAalgorithm(x1, y1, x2, y2);

    getch();
    /** CLOSE GRAPHICS**/
    closegraph();
    return 0;
}

void DDAalgorithm(int x1, int y1, int x2, int y2){
    int dx, dy, moves, x, y;
    float m, xinc, yinc;
    dx = abs(x1 - x2);
    dy = abs(y1 - y2);
    moves = max(dx, dy);
    m = dy * 1.0 / dx;
    xinc = round(dx * 1.0 / moves);
    yinc = round(dy * 1.0 / moves);
    x = x1, y = y1;
    for(int i = 0; i < moves; i++){
        putpixel(x, y, WHITE);
        x += xinc;
        y += yinc;
    }
}