
#include <iostream>

using std::cout;
using std::endl;
//using namespace std;

void swapp(int *a, int *b, int *c) {
    if(*a > *b){
        int tmp = *a;
        *a = *b;
        *b = tmp;
    }else if(*b > *c){
        int tmp = *b;
        *b = *c;
        *c = tmp;
    }
}

int main() {

    int x1 = 500, x2 = 330, x3 = 205;
    cout << "x1 = " << x1 << ", x2 = " << x2 << ", x3 = " << x3 << endl;
    swapp(&x1, &x2, &x3);
   //swap (x2,x3);
    cout << "x1 = " << x1 << ", x2 = " << x2 << ", x3 = " << x3 << endl;

    //system("pause");
    return 0;
}