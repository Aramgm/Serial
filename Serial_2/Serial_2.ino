/*************************************************************************
**    Escriu Hola, espera 1segon i torna a escriure Hola. Repeteix el   **
**                    cicle per cada cop que carrega.                   **
**                                                                      **  
*************************************************************************/                                                                     

//******  Includes  ******************************************************


//******  Setup  ********************************************************* 
void setup() {

Serial.begin(9600);                 //Iniciar el serial
}


//******  Loop  ********************************************************** 
void loop() {
Serial.println("Hola!");            //posa a la pantalla Hola repetidament
delay(1000);                        //ln: salta de línia després d'escriure
                                    //delay (1000): espera un segon           
}
