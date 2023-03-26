#include "raylib.h"
#include <iostream>


using namespace std;
const int screenWidth = 1000;
const int screenHeight = 600;
void mainMenu()
{
    //gets the working directory of the photo
    InitWindow(screenWidth, screenHeight, "Whales");
    

    // Load background image
    

    // Create buttons
    Rectangle playButton = { screenWidth / 2 - 80, 300, 160, 50 };
    Rectangle optionsButton = { screenWidth / 2 - 80, 360, 160, 50 };
    Rectangle exitButton = { screenWidth / 2 - 80, 420, 160, 50 };
    
    Texture2D background = LoadTexture("../media/background-photo.png");
    Texture2D backgroundAnimation = LoadTexture("../media/background-animation.png");
    Rectangle frameRec = { 0, 0, (float)backgroundAnimation.width / 40, (float)backgroundAnimation.height};
    Vector2 backgroundAnimationPosition = { 0, 0 };
    int currentFrame = 0;
    int frameCounter = 0;
    int frameSpeed = 0;
    
    bool checkPressed = false;


    while (!WindowShouldClose())
    {
        backgroundAnimation.width = GetScreenWidth();
        backgroundAnimation.height = GetScreenHeight();
        frameRec.width = backgroundAnimation.width / 40;
        frameRec.height = backgroundAnimation.height;
        BeginDrawing();
        
        background.width = GetScreenWidth();
        background.height = GetScreenHeight();
        // Draw background image
        
        DrawTexture(background, 0, 0, WHITE);
        if (checkPressed = true)
        {
            DrawTexture(backgroundAnimation, 0, 0, WHITE);
           
        }

        // Draw buttons
        DrawRectangleRec(playButton, WHITE);
        DrawRectangleRec(optionsButton, WHITE);
        DrawRectangleRec(exitButton, WHITE);

        // Draw button text
        DrawText("Play", playButton.x + 65, playButton.y + 15, 20, BLACK);
        DrawText("Options", optionsButton.x + 45, optionsButton.y + 15, 20, BLACK);
        DrawText("Exit", exitButton.x + 65, exitButton.y + 15, 20, BLACK);

        // Check for collision

        if (CheckCollisionPointRec(GetMousePosition(), playButton))
        {
            DrawRectangleRec(playButton, RED);
            DrawText("Play", playButton.x + 65, playButton.y + 15, 20, BLACK);
        }
        if (CheckCollisionPointRec(GetMousePosition(), optionsButton))
        {
            DrawRectangleRec(optionsButton, RED);
            DrawText("Options", optionsButton.x + 45, optionsButton.y + 15, 20, BLACK);
        }
        if (CheckCollisionPointRec(GetMousePosition(), exitButton))
        {
            DrawRectangleRec(exitButton, RED);
            DrawText("Exit", exitButton.x + 65, exitButton.y + 15, 20, BLACK);
        }
        
        //check if the button is clicked
        if (CheckCollisionPointRec(GetMousePosition(), playButton) && IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
        {
            checkPressed = true;
            
            
                //DrawTextureRec(backgroundAnimation, frameRec, backgroundAnimationPosition, WHITE);        
        }
        if (CheckCollisionPointRec(GetMousePosition(), optionsButton) && IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
            // Options button clicked
            
           
        }

        if (CheckCollisionPointRec(GetMousePosition(), exitButton) && IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
            // Exit button clicked
            break; // Exit the loop and close the window
        }
       
        EndDrawing();
    }

    // Unload background image
    UnloadTexture(background);
    UnloadTexture(backgroundAnimation);

    CloseWindow();

}




int main() 
{
    mainMenu();
    
}