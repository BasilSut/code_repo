// //Программа НОМЕР 1
#include <iostream>

using std::cout;
using std::endl;
//using namespace std;

void swapp(int *a, int *b, int *c) {
    //сортировка простым обменом == сортировка пузырьком
    //(каждый элемент с меньшим значением как бы "всплывает" к правому или левому краю массива
    //(в зависимости по возратанию или по убыванию мы сортируюем
    //нужно сделать три итерации по два обмена представь, что  a, b и с это элменты массива
    //x[2] = {a, b, c}; x[0] == a, x[1] == b, x[3] = c
    //производим сортировку массива из трех элементов по возратанию
    //первая итерация
    if(*a > *b){
        int tmp = *a;
        *a = *b;
        *b = tmp;
    }
     if(*b > *c){
        int tmp = *b;
        *b = *c;
        *c = tmp;
    }
    //вторая итерация
    if(*a > *b){
        int tmp = *a;
        *a = *b;
        *b = tmp;
    }
     if(*b > *c){
        int tmp = *b;
        *b = *c;
        *c = tmp;
    }
    //третья итерация   - !!ИТЕРАЦИЙ ПРОИЗВОДИМ СОТЛЬКО ЖЕ СКОЛЬКО ЭЛЕМЕНТОВ В МАССИВЕ
    if(*a > *b){
        int tmp = *a; //!!обментов прозиводим на одим меньше количества элементов в массиве
        *a = *b;
        *b = tmp;
    }
      if(*b > *c){
        int tmp = *b;
        *b = *c;
        *c = tmp;//Попробуй убрать третью итерацию, скомпилировать и запустить, ты получить не до конца отсортированный массив
    }
}

int main() {

    int x1 = 500, x2 = 330, x3 = 205;
    cout << "x[0] = " << x1 << ",\t x[1] = " << x2 << ",\t x[2] = " << x3  << endl; 
    swapp(&x1, &x2, &x3);
   //swap (x2,x3);
    cout << "x[0] = " << x1 << ",\t x[1] = " << x2 << ",\t x[2] = " << x3  << endl;

    //system("pause");
    return 0;
}

////Программа НОМЕР 2 (чтобы закоментировать предыдущий код нужно его выделить и нажать CTRL+/ (контрл и слеш) )
////предположим у нас 4 элемента в массиве

// #include <iostream>

// using std::cout;
// using std::endl;
// //using namespace std;

// void swapp(int *a, int *b, int *c, int *d) {

//         //первая итерация
//     if(*a > *b){
//         int tmp = *a;//мы так часто объявляем tmp потому что эта переменая уничтожается внутри по завершении оператора if
//         *a = *b;
//         *b = tmp;//после фигруной скобки при выполнении программы tmp удаляется!!
//     }
//      if(*b > *c){
//         int tmp = *b;
//         *b = *c;
//         *c = tmp;
//     }
//      if(*c > *d){//добавили третий обмент, т.к. омендов должно быть на единицу меньше чем кол-во элементов массива
//         int tmp = *c;
//         *c = *d;
//         *d = tmp;       
//     }
//     ////вторая итерация
//     if(*a > *b){
//         int tmp = *a;
//         *a = *b;
//         *b = tmp;
//     }
//      if(*b > *c){
//         int tmp = *b;
//         *b = *c;
//         *c = tmp;
//     }
//      if(*c > *d){
//         int tmp = *c;
//         *c = *d;
//         *d = tmp;       
//     }
//         //третья итерация   - !!ИТЕРАЦИЙ ПРОИЗВОДИМ СОТЛЬКО ЖЕ СКОЛЬКО ЭЛЕМЕНТОВ В МАССИВЕ
//     if(*a > *b){
//         int tmp = *a;
//         *a = *b;
//         *b = tmp;
//     }
//      if(*b > *c){
//         int tmp = *b;
//         *b = *c;
//         *c = tmp;
//     }
//      if(*c > *d){
//         int tmp = *c;
//         *c = *d;
//         *d = tmp;       
//     }
//     // //четвертая итерация - потому что 4 элемента в массиве
//     if(*a > *b){
//         int tmp = *a;
//         *a = *b;
//         *b = tmp;
//     }
//     if(*b > *c){
//         int tmp = *b;
//         *b = *c;
//         *c = tmp;
//     }
//     if(*c > *d){
//         int tmp = *c;
//         *c = *d;
//         *d = tmp;       
//     }

// }

// int main() {

//     //int x1 = 500, x2 = 330, x3 = 205; создадим массив:
//     int x[4] = {500, 330, 205, 112};
//      cout << "x[0] = " << x[0] << "; x[1] = " << x[1] << ";  x[2] = " << x[2] << ";  x[3] = " << x[3] << endl;
//    // swapp((x+0), (x+1), (x+2), (x+3)); ==  swapp(&x[0], &x[1], &x[2], &x[3]);  - это одно и тоже, просто в первом случае доступ через указательную семантику
//    swapp(&x[0], &x[1], &x[2], &x[3]); 
//     cout << "x[0] = " << x[0] << "; x[1] = " << x[1] << ";  x[2] = " << x[2] << ";  x[3] = " << x[3] << endl;

//     //system("pause");
//     return 0;
// }
