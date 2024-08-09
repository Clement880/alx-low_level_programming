#include <stdio.h>
#include <stdint.h>
/**
 * get_indianness - checks how bytes are ordered in memory
 * @num: two-byte integer
 * @ptr: Pointer to the first byte of num
 * Return: (ptr)
 */
int get_endianness(void)
{
    uint16_t num = 0x1;
    uint8_t *ptr = (uint8_t *)&num;

    return (ptr[0] == 1);
}
