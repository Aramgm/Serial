/*************************************************************************
**     Compta de 0 fins a 11. Cada nombre el separa amb un guió.        **
**                              Només ho fa un cop.                     **
**                                                                      **  
*************************************************************************/                                                                     

//******  Includes  ******************************************************
int comptar = 11;      //Variable interna
//******  Setup  ********************************************************* 
void setup() {
  
Serial.begin(9600);    //Velocitat de càrrega d'escaneig

  Serial.print("Ara comptare de 0 a "); //Escriu l'anterior text.
  Serial.println(comptar); //Escriu la variable i salta de línia.
  for (int i=0; i <= comptar; i++)//Determina una variable i com a 0.
  //Indica que ha de ser més petita o igual a la variable comptar. Incrementa
  //la variable i.
  {
    Serial.print(i);   //Escriu la variable i.
    Serial.print("-"); //Escriu un guió.
  } 
}



//******  Loop  ********************************************************** 
void loop() {
                        //No fa res            
}
