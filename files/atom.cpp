#pragma once
#include <windows.h>
#include <stdio.h>

int main() {

    LoadLibrary(L"User32.dll");

    for (int i = 0xC000; i < 0xFFFF; ++i) {
        wchar_t buffer[256] = { 0 };

        if (GlobalGetAtomName(i, buffer, ARRAYSIZE(buffer))) {
            wprintf(L"%s\n", buffer);
        }
    }

    return 0;
}
