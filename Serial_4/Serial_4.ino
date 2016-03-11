/*************************************************************************
**    Escriu un text, espera uns segons i escriu la segent línea        **
**                       Només ho fa un cop.                            **
**                                                                      **  
*************************************************************************/                                                                     

//******  Includes  ******************************************************


//******  Setup  ********************************************************* 
void setup() {         //Serial.println: escriu i salta a la línea següent

Serial.begin(9600);    //Iniciar el serial
Serial.println("Escull el nom de la operacio que vols realitzar?"); 
delay(2000);           //Espera 2segons
Serial.println("1. Comprobar el numero de targeta de credit");
delay(2000);           //Espera 2segons
Serial.println("2. Comprobar el numero de compte bancari");
delay(2000);           //Espera 2segons
Serial.println("3. Buscar el digit perdut de la targeta de credit");
}


//******  Loop  ********************************************************** 
void loop() {
                        //No fa res        
}
