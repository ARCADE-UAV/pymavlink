%module mavlink_crc
%{
extern int crc_calc(int data, int crcAccum);
extern int crc_calc_str(char *data, int len, int crcAccum);
%}
%include mavlink_crc.c
