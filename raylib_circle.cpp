#include <raylib.h>

int main(){
    //размер окна:
    int width{400}, height{250};
    InitWindow(width,height,"Ksusha is a programmer!");
    //координаты центра круга
    int circle_x = 200;
    int circle_y = 125;

    SetTargetFPS(60);
    while (WindowShouldClose() != true)// WindowSholdClose - функция которая возвращает bool переменную, 
    {                                      //если нажата ESC  или крестик на окне приложения
        BeginDrawing();
        ClearBackground(WHITE);
        
        DrawCircle(circle_x,circle_y,25,BLUE);

        if(IsKeyDown(KEY_D)){
            circle_x = circle_x + 5;
        }
        EndDrawing();
    }
    
}