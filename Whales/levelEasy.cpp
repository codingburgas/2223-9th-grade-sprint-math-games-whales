#include <iostream>
#include <raylib.h>
using namespace std;
void levelEasy()
{
    bool check = false;
    int input = 0;
    int answer = 296;
    Texture2D levelEasy = LoadTexture("../media/level-easy.png");
    while (!WindowShouldClose())
    {
        levelEasy.width = GetScreenWidth();
        levelEasy.height = GetScreenHeight();

        DrawTexture(levelEasy, 0, 0, WHITE);


        // Draw text
        Rectangle door = { 135, 120, 330, 400 };
        Rectangle one = { 520, 400, 30, 15 };
        Rectangle two = { 172, 539, 30, 15 };
        Rectangle three = { 936, 260, 30, 15 };
        DrawText("1", 520, 400, 20, YELLOW);
        DrawText("2", 172, 539, 20, RED);
        DrawText("3", 936, 260, 20, RED);

        // Check for collision
        if (CheckCollisionPointRec(GetMousePosition(), one))
        {
            DrawText("16 >> 3", 500, 150, 30, WHITE);
        }
        if (CheckCollisionPointRec(GetMousePosition(), two))
        {

            DrawText("5 ^ 12", 500, 150, 30, WHITE);
        }

        if (CheckCollisionPointRec(GetMousePosition(), three))
        {
            DrawText("2 | 4", 500, 150, 30, WHITE);

        }

        if (CheckCollisionPointRec(GetMousePosition(), door))
        {
            if (check == false) {
                cout << "Enter the value: ";
                cin >> input;
                check = true;
            }
            if (input == answer)
            {
                DrawText("Correct answer! The answer is: 296", 225, 90, 35, WHITE);
            }
            else
            {
                DrawText("Incorrect answer! The answer is: 296", 225, 90, 35, WHITE);
            }

        }

        EndDrawing();
    }
}