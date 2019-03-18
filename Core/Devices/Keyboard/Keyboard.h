#pragma once

// Keyboard Dey Definitions
#define KEYBOARD_DATA_PORT 0x60
#define KEYBOARD_STATUS_PORT 0x64
#define KEY_UP 0x48
#define KEY_DOWN 0x50
#define KEYBOARD_EVENT_BUFFER_SIZE 256

#include <LibC/include/stdint.h>
#include <Devices/Interrupt/Interrupt.h>

extern void Keyboard_EventHandlerASM();

typedef struct
{
	uint8_t mKeycode;
	uint8_t mStatus;
} Keyboard_Event;

void Keyboard_Constructor();
void Keyboard_Handler();
void Keyboard_IRQInit();
void Keyboard_HandleEvents();
void Keyboard_OnInterrupt();

