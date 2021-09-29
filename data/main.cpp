#include <iostream>

//using namespace std;
using std::cout;
using std::endl;

namespace a{
    int data[8]={7,9,2,4,6,1,9,4};
}

using a::data;

int main()
{
    char d ;
    cout<<"are you sure...(y/n)?";
    std::cin>>d;
    if (d=='y')
        cout<< "+++";
    else if(d=='n')
        cout<< "---";
    else
        cout<< "error";


    /*bool flag = 0;
    for (int i=0; i<8;++i){
        if(data[i]==2){
            flag = 1;
        }else{
            flag = 0;
        }
        if(flag==1)

        cout<<"data["<<i<<"] == 2 -> "<<flag<<endl;
        //std::cout<<a::data[i];*/
    //}   //++i    _    i++
    //std::cout<<a::data<<std::endl;
    //cout << "Hello world!" << endl;
    return 0;
}
