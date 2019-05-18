#include "GraphicsManager.h"

#include <string.h>
#include <stdio.h>

#include <Objects/Kernel/Kernel.h>
#include <Drivers/PS2/PS2Driver.h>

extern Kernel _Kernel;

bool GraphicsManager_Constructor(GraphicsManager* self)
{
    printf("GraphicsManager: Constructor\n");
    memset(self,0,sizeof(GraphicsManager));
    self->Debug = true;
    return true;
}

void GraphicsManager_Destructor(GraphicsManager* self)
{

}

void GraphicsManager_Render(GraphicsManager* self)
{

}