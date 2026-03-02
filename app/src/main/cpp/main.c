#include <jni.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

// Capture printf output
static char output_buffer[65536];
static int output_pos = 0;

int captured_printf(const char *fmt, ...) {
    va_list args;
    va_start(args, fmt);
    int written = vsnprintf(output_buffer + output_pos, sizeof(output_buffer) - output_pos, fmt, args);
    va_end(args);
    if (written > 0) output_pos += written;
    return written;
}

#define printf captured_printf

// Include user code
#include "raylib.h"
int user_main() { InitWindow(400,300,"X"); return 0; }

#undef printf

JNIEXPORT jstring JNICALL
Java_com.example.raylibsmoke_MainActivity_runMain(JNIEnv *env, jobject thiz) {
    output_pos = 0;
    memset(output_buffer, 0, sizeof(output_buffer));
    user_main();
    return (*env)->NewStringUTF(env, output_buffer);
}