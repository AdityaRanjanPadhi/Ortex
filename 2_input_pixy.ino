#include <Pixy2.h>
 
Pixy2 pixy;
 
void setup()
{
  Serial.begin(115200);
  Serial.print("Starting...\n");
 
  pixy.init();
  Serial.println(pixy.changeProg("line"));
}
 
void loop()
{
  int8_t i;
  char buf[128];
 
  pixy.line.getMainFeatures();
 
  if (pixy.line.numVectors)
    pixy.line.vectors->print();
 
  if (pixy.line.numIntersections)
    pixy.line.intersections->print();
 
  if (pixy.line.barcodes)
    pixy.line.barcodes->print();
 
}
