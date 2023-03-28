#include <iostream>
#include <raylib.h>
#include "levelEasy.h"
#include "levelMedium.h"
#include "levelHard.h"
using namespace std;
void gameMenu()
{
    Texture2D gameBackground = LoadTexture("../media/game-background.png");
    while (!WindowShouldClose())
    {

        DrawTexture(gameBackground, 0, 0, WHITE);
        gameBackground.width = GetScreenWidth();
        gameBackground.height = GetScreenHeight();


        // Draw text
        Rectangle gameMenu = { 410, 120, 100, 50 };
        Rectangle Easy = { 485, 190, 50, 25 };
        Rectangle Medium = { 475, 230, 50, 25 };
        Rectangle Hard = { 485, 270, 50, 25 };
        DrawText("GAME MENU", 410, 120, 30, WHITE);
        DrawText("Easy", 485, 190, 20, WHITE);
        DrawText("Medium", 475, 230, 20, WHITE);
        DrawText("Hard", 485, 270, 20, WHITE);

        // Check for collision

        //check if the button is clicked
        if (CheckCollisionPointRec(GetMousePosition(), Easy))
        {
            DrawText("Easy", 485, 190, 20, RED);
        }
        if (CheckCollisionPointRec(GetMousePosition(), Medium)) {

            DrawText("Medium", 475, 230, 20, RED);
        }

        if (CheckCollisionPointRec(GetMousePosition(), Hard)) {
            DrawText("Hard", 485, 270, 20, RED);

        }
        if (CheckCollisionPointRec(GetMousePosition(), Easy) && IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
        {
            levelEasy();
        }
        else if (CheckCollisionPointRec(GetMousePosition(), Medium) && IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
        {
            levelMedium();
        }
        else if (CheckCollisionPointRec(GetMousePosition(), Hard) && IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
        {
            levelHard();

        }

        EndDrawing();
    }
}