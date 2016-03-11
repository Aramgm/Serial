/*************************************************************************
**             Suma 1 al nombre 32767.Només ho fa un cop.               **
**                                                                      **
**                                                                      **  
*************************************************************************/                                                                     

//******  Includes  ******************************************************
long test = 32767; 
//******  Setup  ********************************************************* 
void setup() {
  
Serial.begin(9600); 

Serial.print("Nobre maxim: "); //Escriu el text
Serial.println(test);          //Inserta el nombre i salta de línea.
test = test + 1;               //Suma 1 alnombre màxim (int)
Serial.print("Nombre minim: ");//Escriu el text
Serial.println(test);          //Inserta el resultat de la suma.

}


//******  Loop  ********************************************************** 
void loop() {
                                     //No fa res            
}
