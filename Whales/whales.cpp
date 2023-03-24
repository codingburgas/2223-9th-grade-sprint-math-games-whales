#include "raylib.h"
#include <iostream>
using namespace std;
int main() {
    const int screenWidth = 800;
    const int screenHeight = 450;
    //gets the working directory of the photo
    const char* currentDir = GetWorkingDirectory();
    const char* mediaPath = TextFormat("%s/2223-9th-grade-sprint-math-games-whales/", currentDir);

    Image backgroundImage = LoadImage(TextFormat("%svisa.png", mediaPath));
    InitWindow(screenWidth, screenHeight, "Whales");
    
    // Load background image
    Texture2D background = LoadTextureFromImage(backgroundImage);
    

    // Create buttons
    Rectangle playButton = { screenWidth / 2 - 80, 200, 160, 50 };
    Rectangle optionsButton = { screenWidth / 2 - 80, 260, 160, 50 };
    Rectangle exitButton = { screenWidth / 2 - 80, 320, 160, 50 };

    while (!WindowShouldClose()) {
        BeginDrawing();

        // Draw background image
        DrawTexture(background, 0, 0, WHITE);

        // Draw buttons
        DrawRectangleRec(playButton, GRAY);
        DrawRectangleRec(optionsButton, GRAY);
        DrawRectangleRec(exitButton, GRAY);

        // Draw button text
        DrawText("Play", playButton.x + 65, playButton.y + 15, 20, BLACK);
        DrawText("Options", optionsButton.x + 50, optionsButton.y + 15, 20, BLACK);
        DrawText("Exit", exitButton.x + 65, exitButton.y + 15, 20, BLACK);

        // Check for button clicks
        if (CheckCollisionPointRec(GetMousePosition(), playButton) && IsMouseButtonReleased(MOUSE_LEFT_BUTTON)) {
            // Play button clicked
            // Insert your code here for what happens when the Play button is clicked
        }

        if (CheckCollisionPointRec(GetMousePosition(), optionsButton) && IsMouseButtonReleased(MOUSE_LEFT_BUTTON)) {
            // Options button clicked
            // Insert your code here for what happens when the Options button is clicked
        }

        if (CheckCollisionPointRec(GetMousePosition(), exitButton) && IsMouseButtonReleased(MOUSE_LEFT_BUTTON)) {
            // Exit button clicked
            break; // Exit the loop and close the window
        }

        EndDrawing();
    }

    // Unload background image
    UnloadTexture(background);

    CloseWindow();

    return 0;
}