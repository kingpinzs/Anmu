#include "HAL.h"

void outb(unsigned short port, unsigned char value)
{
    asm volatile ( "outb %0, %1" : : "a"(value), "Nd"(port) );
    
}

unsigned char inb(unsigned short port)
{
    unsigned char ret;
    asm volatile ( "inb %1, %0" : "=a"(ret) : "Nd"(port) );
    return ret;
}