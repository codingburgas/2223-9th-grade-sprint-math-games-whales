#include <iostream>
#include "raylib.h"

using namespace std;
int main()
{
    // Initialize window width and height
    const int screenWidth = 800;
    const int screenHeight = 450;
    // Initialize window
    InitWindow(screenWidth, screenHeight, "Whales");
    Vector2 mouseCursor = { 0.0f, 0.0f };
    Rectangle StartGameButton = { 100, 200 };
    Rectangle OptionGameButton = { 100, 300 };
    Rectangle ExitGameButton = { 100, 300 };
    const int numItems = 3;
    const char* menuItems[numItems] = { "Start Game", "Options", "Exit" };
    int selectedItem = 0;
    bool itemSelected = false;
    while (!WindowShouldClose())
    {
        if (IsKeyPressed(KEY_ENTER))
        {
            itemSelected = true;
        }

        if (IsKeyPressed(KEY_UP))
        {
            selectedItem--;
            if (selectedItem < 0)
            {
                selectedItem = numItems - 1;
            }
        }
        else if (IsKeyPressed(KEY_DOWN))
        {
            selectedItem++;
            if (selectedItem >= numItems)
            {
                selectedItem = 0;
            }
        }

        // Draw menu 
        BeginDrawing();
        ClearBackground(RAYWHITE);

        for (int i = 0; i < numItems; i++)
        {
            if (i == selectedItem)
            {
                DrawText(menuItems[i], screenWidth / 2 - MeasureText(menuItems[i], 20) / 2,
                    screenHeight / 2 - (numItems * 20) / 2 + i * 40, 20, BLUE);
            }
            else
            {
                DrawText(menuItems[i], screenWidth / 2 - MeasureText(menuItems[i], 20) / 2,
                    screenHeight / 2 - (numItems * 20) / 2 + i * 40, 20, BLACK);
            }
        }

        EndDrawing();

        // Handle selected item
        if (itemSelected)
        {
            switch (selectedItem)
            {
            case 0:
                cout << "Starting game..." << endl;
                break;
            case 1:
                cout << "Opening options menu..." << endl;
                break;
            case 2:
                cout << "Exiting..." << endl;
                return 0;
            }
            itemSelected = false;
        }
    }
    CloseWindow();//close the window

}