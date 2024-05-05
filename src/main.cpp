#include <iostream>
#include <vector>
#include <string>
#include <Windows.h>

#pragma comment(lib,"winmm.lib");

using namespace std;

 int main()
 {
    cout<< "Playing music\n";
    PlaySound(TEXT(".\\AudioFiles\\Unleash The Archers - Abyss - 01 Waking Dream.flac"), NULL, SND_FILENAME| SND_SYNC);
    cout<<"musicOver\n";
 }