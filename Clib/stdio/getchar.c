#include <stdio.h>

#include <Objects/Kernel/Kernel.h>
#include <Objects/InputManager/InputManager.h>
#include <unistd.h>

extern Kernel _Kernel;

int getchar()
{
    InputManager* im = &_Kernel.InputManager;
    int ch = -1;
    while (1)
    {
        KeyboardEvent* action = 0;
        if (LinkedList_Size(&im->KeyboardEvents) == 0) 
        {
            continue;
            usleep(10);
        }

        action = (KeyboardEvent*)LinkedList_PopFront(&im->KeyboardEvents);
        if (action->Pressed)
        {
            ch = action->Character;
            MemoryDriver_Free(&_Kernel.Memory, action);
            break;
        }
        MemoryDriver_Free(&_Kernel.Memory, action);
    }

    printf("%c",ch);
    return ch;
}
