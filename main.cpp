//minGW(Windows) (GCC) Linux Clang - ??? ????? ????????? ???????????
#include <iostream>

//using namespace std;
//using std::cout;
namespace s{
    int x = 3;
}





int main()
{
    int y = s::x<<1;

    std::cout << s::x << std::endl;
    std::cout << y << std::endl;
    std::cout << (y<<1) << std::endl;
    std::cout << (y<<2) << std::endl;
    return 0;
}
