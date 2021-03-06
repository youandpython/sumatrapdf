/* Copyright 2020 the SumatraPDF project authors (see AUTHORS file).
   License: GPLv3 */

void UpdateDeltaPerLine();

LRESULT CALLBACK WndProcCanvas(HWND, UINT, WPARAM, LPARAM);
LRESULT WndProcCanvasAbout(WindowInfo* win, HWND, UINT, WPARAM, LPARAM);
bool IsDragY(int y1, int y2);
bool IsDragX(int x1, int x2);
