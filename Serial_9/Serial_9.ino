/*************************************************************************
**            Suma 1 al nombre maxim d'int. Només ho fa un cop          **
**                                                                      **
**                                                                      **  
*************************************************************************/                                                                     

//******  Includes  ******************************************************
int test = 32767; //La varialble int només permet un rang numéric fins a 
//32767 positiu i 32768 negatiu.
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
