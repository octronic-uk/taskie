#pragma once

#include <stdint.h>
#include <Filesystem/MBR/MBRChsAddress.h>

struct MBRPartitionEntry
{
    uint8_t Status;
    struct MBRChsAddress3b CHSFirstSector;
    uint8_t PartitionType;
    struct MBRChsAddress3b CHSLastSector;
    uint32_t LBAFirstSector;
    uint32_t SectorCount;
} __attribute__((packed));


void MBRPartitionEntry_Debug(int index, struct MBRPartitionEntry* self);