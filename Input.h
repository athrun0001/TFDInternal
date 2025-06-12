#pragma once
#include <Windows.h>

bool g_KeyState[256] = {};
bool g_KeyPressed[256] = {};
// These must be declared somewhere globally (you already have them in includes.h)

namespace Input {

	// Keyboard
	inline bool IsKeyPressed(int key) { return g_KeyPressed[key]; }
	inline bool IsKeyHeld(int key) { return g_KeyState[key]; }

	// Mouse
	inline bool IsMousePressed() { return g_KeyPressed[VK_LBUTTON]; }
	inline bool IsMouseHeld() { return g_KeyState[VK_LBUTTON]; }

	// Utility
	inline void ResetKeyPressed() 
	{
		memset(g_KeyPressed, 0, sizeof(g_KeyPressed));
	}
}