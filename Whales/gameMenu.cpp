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
        Rectangle gameMenu = { 440, 150, 100, 50 };
        Rectangle Easy = { 500, 250, 100, 50 };
        Rectangle Medium = { 493, 300, 100, 50 };
        Rectangle Hard = { 500, 350, 100, 50 };
        DrawText("GAME MENU", 440, 150, 30, WHITE);
        DrawText("Easy", 500, 250, 20, WHITE);
        DrawText("Medium", 493, 300, 20, WHITE);
        DrawText("Hard", 500, 350, 20, WHITE);

        // Check for collision

        //check if the button is clicked
        if (CheckCollisionPointRec(GetMousePosition(), Easy))
        {
            DrawText("Easy", 500, 250, 20, RED);
        }
        if (CheckCollisionPointRec(GetMousePosition(), Medium)) {

            DrawText("Medium", 493, 300, 20, RED);
        }

        if (CheckCollisionPointRec(GetMousePosition(), Hard)) {
            DrawText("Hard", 500, 350, 20, RED);

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