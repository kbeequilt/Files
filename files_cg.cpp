#include <iostream>
#include <sstream>
#include <iomanip>
#include "files_cg.hpp"
using namespace std;

string makeRectangle(char symbol, int length, int width){
    string rectangle;
    stringstream mRectangle;
    for(int i = 0; i < width; i++){
        for(int j = 0; j < length; j++){
            mRectangle << symbol;
        }
        mRectangle << endl;
    }
    mRectangle << endl;
    rectangle = mRectangle.str();
    return rectangle;

}

string makeSquare(char symbol, int side){
    string square;
    stringstream mSquare;
    for(int i = 0; i < side; i++){
        for(int j = 0; j < side; j++){
            mSquare << symbol;
        }
        mSquare << endl;
    }
    mSquare << endl;
    square = mSquare.str();
    return square;

}

string makeTriangle(char symbol, int height){
    string triangle;
    stringstream mTriangle;
    for(int i = 0; i < height; i++){
        for(int j = 0; j <= i; j++){
            mTriangle << symbol;
        }
        mTriangle << endl;
    }
    mTriangle << endl;
    triangle = mTriangle.str();
    return triangle;
}

string makeDiamond(char symbol, int width) {
    string diamond;
    stringstream mDiamond;


    /*
    int setMiddle = (width / 2) - 1;

    for (int i; i <= width / 2; i--){
        for (int j = 1; j <= setMiddle; j++){
            cout << "-";
            setMiddle--;
        }
        for (int k = 1; k <= width; k++){
            cout << symbol;
        }
        cout << endl;
    }
*/







    int setMiddle = width;
    for (int i = 0; i < width; i++) {
        for (int k = 1; k < setMiddle; k++) {
            if (k < setMiddle) {
                cout << "-";
                setMiddle--;
            }else{
                setMiddle = k;
            }
        }
        for (int j = 0; j <= i; j++) {
            cout << symbol;
        }
        i++;
        cout << endl;
    }
    for (int i = width - 2; i >= 0; i--){
        cout << "test" << endl;
        i--;
    }

}



string writeShape(){
return "0";

}