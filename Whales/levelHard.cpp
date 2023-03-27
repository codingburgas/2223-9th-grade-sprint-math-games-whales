#include <iostream>
#include <raylib.h>
using namespace std;
void levelHard()
{
    bool check = false;
    int input = 0;
    int answer = 73207;
    Texture2D levelHard = LoadTexture("../media/level-hard.png");
    while (!WindowShouldClose())
    {
        levelHard.width = GetScreenWidth();
        levelHard.height = GetScreenHeight();

        DrawTexture(levelHard, 0, 0, WHITE);


        // Draw text
        Rectangle door = { 400, 200, 100, 300 };
        Rectangle one = { 337, 142, 30, 15 };
        Rectangle two = { 600, 300, 30, 15 };
        Rectangle three = { 512, 418, 30, 15 };
        Rectangle four = { 100, 280, 30, 15 };
        Rectangle five = { 655, 73, 30, 15 };
        DrawText("1", 337, 142, 20, BROWN);
        DrawText("2", 570, 300, 20, WHITE);
        DrawText("3", 512, 418, 20, BROWN);
        DrawText("4", 50, 295, 20, BLUE);
        DrawText("5", 655, 73, 20, WHITE);

        // Check for collision
        if (CheckCollisionPointRec(GetMousePosition(), one))
        {
            DrawText("15 & 7", 100, 65, 30, WHITE);
        }
        if (CheckCollisionPointRec(GetMousePosition(), two))
        {

            DrawText("24 >>> 3", 100, 65, 30, WHITE);
        }

        if (CheckCollisionPointRec(GetMousePosition(), three))
        {
            DrawText("27 & (15 <<< 1)", 100, 65, 30, WHITE);

        }
        if (CheckCollisionPointRec(GetMousePosition(), four))
        {
            DrawText("(1 << 5) & (1 << 6)", 100, 65, 30, WHITE);

        }
        if (CheckCollisionPointRec(GetMousePosition(), five))
        {
            DrawText("15 & 7", 100, 65, 30, WHITE);

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
                DrawText("Correct answer! The answer is: 73207", 200, 30, 35, WHITE);
            }
            else
            {
                DrawText("Incorrect answer! The answer is: 73207", 200, 30, 35, WHITE);
            }

        }

        EndDrawing();
    }
}