#include <iostream>
#include <raylib.h>
using namespace std;
void levelMedium()
{
    bool check = false;
    int input = 0;
    int answer = 1493;
    Texture2D levelMedium = LoadTexture("../media/level-medium.png");
    while (!WindowShouldClose())
    {
        levelMedium.width = GetScreenWidth();
        levelMedium.height = GetScreenHeight();

        DrawTexture(levelMedium, 0, 0, WHITE);


        // Draw text
        Rectangle door = { 0, 15, 250, 415 };
        Rectangle one = { 310, 400, 30, 15 };
        Rectangle two = { 700, 120, 30, 15 };
        Rectangle three = { 401, 298, 30, 15 };
        Rectangle four = { 936, 300, 30, 15 };
        DrawText("1", 310, 400, 20, YELLOW);
        DrawText("2", 700, 120, 20, YELLOW);
        DrawText("3", 401, 298, 20, YELLOW);
        DrawText("4", 936, 300, 20, GREEN);

        // Check for collision
        if (CheckCollisionPointRec(GetMousePosition(), one))
        {
            DrawText("15 >> 3", 500, 300, 30, WHITE);
        }
        if (CheckCollisionPointRec(GetMousePosition(), two))
        {

            DrawText("5 & 12", 500, 300, 30, WHITE);
        }

        if (CheckCollisionPointRec(GetMousePosition(), three))
        {
            DrawText("14 ^ 9", 500, 300, 30, WHITE);

        }
        if (CheckCollisionPointRec(GetMousePosition(), four))
        {
            DrawText("28 >>> 3", 500, 300, 30, WHITE);

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
                DrawText("Correct answer! The answer is: 1493", 250, 300, 35, WHITE);
            }
            else
            {
                DrawText("Incorrect answer! The answer is: 1493", 250, 300, 35, WHITE);
            }

        }

        EndDrawing();
    }
}