/*************************************************************************
** Quan la variable de la lectura del sensor coincideix amb un resultat **
**                  escriu el text d'aquell paràmetre.                  **
**                         Només ho fa un cop.                          **  
*************************************************************************/                                                                     

//******  Includes  ******************************************************
int lecturaSensor = 3; //Variable interna
//******  Setup  ********************************************************* 
void setup() {
  
Serial.begin(9600);    //Velocitat de càrrega d'escaneig

 Serial.println("Fa un dia... ");//Escriu el text i salta de línea.
   
switch (lecturaSensor) {
    case 0:     //Quan la variable coincideix amb 0 escriu el text següent.  
    Serial.print("gris");
    break;
    case 1:     //Quan la variable coincideix amb 1 escriu el text següent.
    Serial.print("nublat");
    break;
    case 2:     //Quan la variable coincideix amb 2 escriu el text següent.
    Serial.print("assolellat");
    break;
    case 3:     //Quan la variable coincideix amb 3 escriu el text següent.
    Serial.print("collonut");
    break;
    default://Quan la variable no coincideix amb cap, escriu el text següent.
    Serial.print("No en tinc ni idea!!!");
    //La paraula "break" s'utilitza a continuació de "case" per denotar 
    //continuitat, fins que la variable coincideixi o finalitzi el programa.
  
  } 
}



//******  Loop  ********************************************************** 
void loop() {
                                     //No fa res            
}
