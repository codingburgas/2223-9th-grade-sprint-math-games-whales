#include <iostream>
#include <raylib.h>
using namespace std;
void about()
{
    Texture2D about = LoadTexture("../media/options-menu.png");
    while (!WindowShouldClose())
    {

        

        DrawTexture(about, 0, 0, WHITE);//Draw background with color white//
        DrawText("Hello, we are team Whales. This is our project. It is a game of bitwise operation.", 240, 220, 16, BLACK);
        DrawText("You have to find out the little numbers in the room to solve the bitwise operation.", 240, 260, 16, BLACK);
        DrawText(" When you clicked on the door, you can write in the console app your answer ", 240, 300, 16, BLACK);
        DrawText("and check if it is correct. By clicking the escape button you can return", 240, 340, 16, BLACK); //Create a box with instructions //
        DrawText("to the menu.", 240, 380, 16, BLACK); //Colors the button background with black color //
        about.width = GetScreenWidth();
        about.height = GetScreenHeight();
        EndDrawing();
    }
}
