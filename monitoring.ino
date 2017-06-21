#define REMOTEXY_MODE__HARDSERIAL
#include <RemoteXY.h>
#define REMOTEXY_SERIAL Serial
#define REMOTEXY_SERIAL_SPEED 9600  
#pragma pack(push, 1)
uint8_t RemoteXY_CONF[] =
  { 255,0,0,12,0,18,0,6,5,0,
  67,4,6,22,42,18,2,11,66,131,
  52,21,44,20,2 };
struct {
  char text_1[11];
  int8_t level_1; //
  uint8_t connect_flag;
} RemoteXY;
#pragma pack(pop)
void setup() 
{
  RemoteXY_Init (); 
  
  // TODO setup code
  
}

void loop() 
{ 
  RemoteXY_Handler ();

  // TODO you loop code

}
