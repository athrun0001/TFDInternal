#pragma once
#include <Windows.h>

bool g_KeyState[256] = {};
bool g_KeyPressed[256] = {};
// These must be declared somewhere globally (you already have them in includes.h)

namespace Input {

	// Keyboard
	inline bool IsKeyPressed(int vk) { return g_KeyPressed[vk]; }
	inline bool IsKeyHeld(int vk) { return g_KeyState[vk]; }

	// Mouse
	inline bool IsMousePressed() { return g_KeyPressed[VK_LBUTTON]; }
	inline bool IsMouseHeld() { return g_KeyState[VK_LBUTTON]; }
	inline bool IsRightMousePressed() { return g_KeyPressed[VK_RBUTTON]; }
	inline bool IsRightMouseHeld() { return g_KeyState[VK_RBUTTON]; }

	// Utility
	void ResetKeyPressed() { memset(g_KeyPressed, 0, sizeof(g_KeyPressed)); }
}