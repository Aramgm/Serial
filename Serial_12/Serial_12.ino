/*************************************************************************
** Quan la temperatura de l'aigua supera els 100º es mostra el missatge **
**              Aigua supera els 100C, esta bullint!                    **
**                                                                      **  
*************************************************************************/                                                                     

//******  Includes  ******************************************************
int tempAigua = 101; //Variable interna
//******  Setup  ********************************************************* 
void setup() {
  
Serial.begin(9600);      // velocitat de càrrega d'escaneig.

  if ( tempAigua > 100)  // En el cas de que l'aigua estigui a més de 100C
                         // mostra el text següent, un cop.
    Serial.print("Aigua supera els 100C, esta bullint!");
  } 




//******  Loop  ********************************************************** 
void loop() {
                                     //No fa res            
}
