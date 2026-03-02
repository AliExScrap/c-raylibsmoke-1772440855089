#ifndef RAYLIB_H
#define RAYLIB_H
#ifdef __cplusplus
extern "C" {
#endif

typedef struct Vector2 { float x; float y; } Vector2;
typedef struct Rectangle { float x; float y; float width; float height; } Rectangle;
typedef struct Color { unsigned char r; unsigned char g; unsigned char b; unsigned char a; } Color;

#define RAYWHITE (Color){245, 245, 245, 255}
#define DARKGRAY (Color){80, 80, 80, 255}
#define SKYBLUE (Color){102, 191, 255, 255}
#define LIGHTGRAY (Color){200, 200, 200, 255}
#define WHITE (Color){255, 255, 255, 255}
#define MOUSE_LEFT_BUTTON 0

void InitWindow(int width, int height, const char *title);
void SetTargetFPS(int fps);
int WindowShouldClose(void);
void BeginDrawing(void);
void EndDrawing(void);
void ClearBackground(Color color);
void DrawText(const char *text, int posX, int posY, int fontSize, Color color);
void DrawRectangle(int posX, int posY, int width, int height, Color color);
Vector2 GetMousePosition(void);
int CheckCollisionPointRec(Vector2 point, Rectangle rec);
int IsMouseButtonPressed(int button);
void CloseWindow(void);

#ifdef __cplusplus
}
#endif
#endif