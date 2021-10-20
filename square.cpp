#include <iostream>
#include <fstream>
#include "gnuplot.h"

int main(){
    int x[5][2]=
    {
        { 2, 2 } , // строка №0
        { 2, 4 } , // строка №1
        { 4, 4 } , // строка №2...
        { 4, 2 } ,
        { 2, 2 }

    };

    

    std::ofstream out_sq("./sq.dat");//, std::ios::app';
    if (out_sq.is_open()){
        
        for(int i = 0; i<5; ++i){
            for(int h = 0; h<2; ++h)
                out_sq<<x[i][h]<<"\t";
            out_sq<<"\n";
        };
        out_sq.close(); 
        gnuplot p;
        p("set xrange [0:5] \n set yrange [0:5] \n plot \'./sq.dat\' w l lw 5 "); 
    };
    return 0;
}