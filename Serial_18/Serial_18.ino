/*************************************************************************
**     Compta de 0 fins a 110. Cada nombre el separa amb un guió.       **
**Si incrementem la variable comptar, comptarà fins el nombre assignat  **
**                         Només ho fa un cop.                          **  
*************************************************************************/                                                                     

//******  Includes  ******************************************************
int comptar = 110;       //Variable assignada.
int i = 0;              //Variable assignada.
//******  Setup  ********************************************************* 
void setup() {
  
Serial.begin(9600);     //Velocitat de càrrega d'escaneig

Serial.print("Ara comptare de 0 a "); //Escriu el text anterior

Serial.println(comptar);//Escriu la variable comptar i salta de línea.  
   while(i <= comptar)  //Si la variable i es més petita que comptar s'ecriu
                        //el text següent.
  {
  Serial.print(i);      //Escriu la variable i.
  Serial.print("-");    //Escriu un guió.
    i++;                //Incrementa la variable i.

  } 
}

//******  Loop  ********************************************************** 
void loop() {
                        //No fa res            
}
