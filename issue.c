#include<stdio.h>
uint8_t u8CountSpaces(char* ps8SrcStr)
{
uint8_t u8Cnt = 0;
while (*ps8SrcStr)
{
if (*ps8SrcStr == ' ')
{
u8Cnt++;
}
ps8SrcStr++;
}
return u8Cnt;
}
void main()
{
return 0;}