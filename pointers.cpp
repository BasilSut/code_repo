#include <iostream>

bool biggest(int &z, int &k){
    if(z>k)
        return 1;
    else
        return 0;
}

int main(){
    int x=7;
    int y=6;
    bool check = biggest(y,x);
    std::cout<<check;
    //std::cout<<biggest(x,y);
    return 0;
}