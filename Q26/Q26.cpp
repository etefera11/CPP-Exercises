#include <iostream>
using namespace std;

int main()
{
    double dl,dw, w1l, w1w, w2l, w2w, bl, bw, rl, rw, rh, totalpaint, totalr;

    cout << "Enter the length of the door: ";
    cin >> dl;

    cout << "Enter the width of the door: ";
    cin >> dw;

    cout << "Enter the length of window 1: ";
    cin >> w1l;

    cout << "Enter the width of window 1: ";
    cin >> w1w;

    cout << "Enter the length of window 2: ";
    cin >> w2l;

    cout << "Enter the width of window 2: ";
    cin >> w2w;

    cout << "Enter the length of the bookshelf: ";
    cin >> bl;

    cout << "Enter the length of the bookshelf: ";
    cin >> bw;

    cout << "Enter the length of the room: ";
    cin >> rl;

    cout << "Enter the length of the width: ";
    cin >> rw;

    cout << "Enter the length of the height: ";
    cin >> rh;

    totalpaint = (dl*dw) + (w1l*w1w) + (w2l*w2w) + (bl*bw);
    totalr = (rl * rh * 2) + (rw * rh * 2);
    totalr = totalr - totalpaint;
    totalpaint /= 120;

    cout << "\n" << totalpaint;

    return 0;


}
