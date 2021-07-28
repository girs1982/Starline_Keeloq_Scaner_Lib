#ifndef STAR_KEE_H 
#define STAR_KEE_H 
#define rxPin 4   ////pin reciver
#define TX 5      //// pin transiver
#include <Arduino.h>
void send_meander(int time);
void keelog_vardump();
void keelog_get();
void starline_vardump();
void starline_get();
void startgrabber();
void init_kepsta();
void starline_send(byte* starline_code);
void keelog_send(byte* keelog_code);
static void ganstaDelaymic(unsigned long ms);
void glushilko_gansta(int tim,bool jam_g);
void SendCame4(long Code);
void brutshlakgansta();
String getCodeString();
String staron (int count);
String keeron (int count);
#endif

