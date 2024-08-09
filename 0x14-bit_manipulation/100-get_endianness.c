#include <stdio.h>
#include <stdint.h>
/**
 * get_indianness - Determines the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
    uint16_t num = 0x1;
    uint8_t *ptr = (uint8_t *)&num;

    return (ptr[0] == 1);
}
