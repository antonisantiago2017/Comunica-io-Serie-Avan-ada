/**********************************************************************************
**                                                                               **
**                                                                               **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int num = 107;
//********** Setup ****************************************************************
void setup()                // inicia una vegada, quan arrenca
{
  Serial.begin(9600);    // set up Serial library at 9600 bps

  Serial.println("Different formats for the same number:");

  Serial.write(num);
  Serial.println();
  
  Serial.println(num);
  Serial.println(num,DEC);
  
  Serial.println(num,BIN);
  
  Serial.println(num,HEX);
  
  Serial.println(num,OCT);
}

//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
}
//********** Funcions ******************
