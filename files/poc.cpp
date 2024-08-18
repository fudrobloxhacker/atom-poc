#pragma once
#include <windows.h>
#include <stdio.h>

int main() {

    for (int i = 0xC000; i < 0xFFFF; ++i) {
        wchar_t buffer[256] = {0};

        if (GlobalGetAtomName(i, buffer, ARRAYSIZE(buffer))) {
            wprintf(L"Atom : %s\n", buffer);
        }
    }

    return 0;
}
