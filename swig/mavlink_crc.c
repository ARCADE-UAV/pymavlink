#include <stdint.h>
#include <string.h>

#define X25_INIT_CRC 0xffff

int crc_calc(int data, int crcAccum)
{
   uint8_t tmp = (uint8_t)data;
   tmp = tmp ^ (uint8_t)(crcAccum & 0xff);
   tmp ^= (tmp << 4);
   return (crcAccum >> 8) ^ (tmp << 8) ^ (tmp << 3) ^ (tmp >> 4);
}


int crc_calc_str(char *data, int len, int crcAccum)
{
   int i;
   for (i = 0; i < len; i++)
   {
      crcAccum = crc_calc((uint8_t)data[i], crcAccum);
   }
   return crcAccum;
}

