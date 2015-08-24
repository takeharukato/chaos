// Abstract: Packet list.
// Author: Per Lundberg <per@halleluja.nu>
//
// © Copyright 2000 chaos development
// © Copyright 2015 chaos development

#pragma once

typedef struct
{
    struct packet_list *next;
    struct packet_list *previous;

    unsigned int length;
    void *data;

    // The source port and address of this packet, since they may be just anything for UDP packets.
    ipv4_address_type source_address;
    u16 source_port;
} packet_list_type;
