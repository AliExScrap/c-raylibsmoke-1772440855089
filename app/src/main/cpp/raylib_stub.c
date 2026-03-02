#include "raylib.h"

void InitWindow(int width, int height, const char *title) { (void)width; (void)height; (void)title; }
void SetTargetFPS(int fps) { (void)fps; }
int WindowShouldClose(void) { return 1; }
void BeginDrawing(void) {}
void EndDrawing(void) {}
void ClearBackground(Color color) { (void)color; }
void DrawText(const char *text, int posX, int posY, int fontSize, Color color) {
    (void)text; (void)posX; (void)posY; (void)fontSize; (void)color;
}
void DrawRectangle(int posX, int posY, int width, int height, Color color) {
    (void)posX; (void)posY; (void)width; (void)height; (void)color;
}
Vector2 GetMousePosition(void) { return (Vector2){0.0f, 0.0f}; }
int CheckCollisionPointRec(Vector2 point, Rectangle rec) { (void)point; (void)rec; return 0; }
int IsMouseButtonPressed(int button) { (void)button; return 0; }
void CloseWindow(void) {}