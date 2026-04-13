/**
 *  Create communication packet structure without padding.
Packet example
device ID
timestamp
sensor value
Goal
Ensure exact byte layout for protocols.
 */

#include <stdio.h>
#include "stdint.h" // to have a fixed width of data types

struct __attribute__((packed)) packet {
    uint8_t deviceId;
    uint32_t timestamp;
    float sensorValue;
};

int main(){
    struct packet p = {0x41, 12422334, 24.87f};

    printf("The sizeof the packet : %zu bytes\n",sizeof(struct packet));
    
    // layout testing
    printf("Device ID: %u\n", p.deviceId);
    printf("Timestamp: %u\n", p.timestamp);
    printf("Value: %.2f\n", p.sensorValue);
}