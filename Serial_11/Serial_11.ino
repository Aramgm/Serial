/*************************************************************************
**             Escriu un nombre (64) de diferent maneres.               **
**                                                                      **
**                                                                      **  
*************************************************************************/                                                                     

//******  Includes  ******************************************************
int num = 64; //Variable interna
//******  Setup  ********************************************************* 
void setup() {
  
Serial.begin(9600);           // velocitat de càrrega d'escaneig.

  Serial.println("Diferents maneres de representar els numeros:");
                              //Escriu el text i salta de línea.
  Serial.write(num);          //Escriu el nombre 64 de la taula Ascid (@)
  Serial.println();           //Salta de línea.
  Serial.println(num);        //Escriu el nombre 64 i salta de línea.
  Serial.println(num,DEC);    //Escriu el nombre 64 en decimal i salt de ln.
  Serial.println(num,BIN);    //Escriu el nombre 64 en Binari i salt de lin.
  Serial.println(num,HEX);    //Escriu el nombre 64 en Hexadecimal.
  Serial.println(num,OCT);    //Escriu el nombre 64 en Octodecimal.

}


//******  Loop  ********************************************************** 
void loop() {
                                     //No fa res            
}
