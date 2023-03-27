#include "raylib.h"
#include <iostream>


using namespace std;
const int screenWidth = 1000;
const int screenHeight = 600;

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
        Rectangle five = { 655, 93, 30, 15 };
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
                DrawText("Correct answer! The answer is: 73207", 250, 300, 35, WHITE);
            }
            else
            {
                DrawText("Incorrect answer! The answer is: 73207", 250, 300, 35, WHITE);
            }

        }

        EndDrawing();
    }
}


void gameMenu()
{
    Texture2D gameBackground = LoadTexture("../media/game-background.png");
    while (!WindowShouldClose())
    {

        DrawTexture(gameBackground, 0, 0, WHITE);
        gameBackground.width = GetScreenWidth();
        gameBackground.height = GetScreenHeight();


        // Draw text
        Rectangle gameMenu = { 440, 150, 100, 50};
        Rectangle Easy = { 500, 250, 100, 50 };
        Rectangle Medium = { 493, 300, 100, 50 };
        Rectangle Hard = { 500, 350, 100, 50 };
        DrawText("GAME MENU", 440,  150, 30, WHITE);
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
    
    bool checkPressedGame = false;


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
            gameMenu();
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