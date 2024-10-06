#include <iostream>
#include "files_cg.hpp"



using namespace std;
int main() {
    cout << makeSquare('@', 5);
    cout << makeRectangle('$', 5, 4);
    cout << makeTriangle('&', 5);
    cout << makeDiamond('*', 11);

    return 0;
}
