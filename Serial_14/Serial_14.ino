/*************************************************************************
** Depenent de la mesura dels KgCO2/m2 que obtinguem, ens informa de la **
** qualificació energètica del edifici. fins a 3.5:A, fins a 6.5:B, fins**
**11.1:C, fins 17.7:D, fins a 38.2:E, fins a 43.2:F i superior a 43.2:G **  
*************************************************************************/                                                                     

//******  Includes  ******************************************************
int KgCO2 = 4; //Variable interna
//******  Setup  ********************************************************* 
void setup() {
  
Serial.begin(9600);       // velocitat de càrrega d'escaneig.
 
if ((KgCO2 < 3.5)&&(KgCO2 >0))//Si els KgCO2/m2 es menor a 3.5 i major o 
                              //igual de 0 mostra el següent text.
 Serial.print("Qualificacio energetica:A");

if ((KgCO2 < 6.5)&&(KgCO2 >=3.5))//Si els KgCO2/m2 es menor a 6.5 i major o
                                 //igual de 3.5 mostra el següent text.
 Serial.print("Qualificacio energetica:B");

if ((KgCO2 < 11.1)&&(KgCO2 >=6.5))//Si els KgCO2/m2 es menor a 11.5 i major 
                                  //o igual de 6.5 mostra el següent text.
 Serial.print("Qualificacio energetica:C");
  
if ((KgCO2 < 17.7)&&(KgCO2 >=11.1))//Si els KgCO2/m2 es menor a 17.7 i major 
                                  //o igual de 11.1 mostra el següent text.
 Serial.print("Qualificacio energetica:D");

 if ((KgCO2 < 38.2)&&(KgCO2 >=17.7))//Si els KgCO2/m2 es menor a 38.2 i major 
                                   //o igual de 17.7 mostra el següent text.
 Serial.print("Qualificacio energetica:E");

 if ((KgCO2 < 43.2)&&(KgCO2 >=38.2))//Si els KgCO2/m2 es menor a 43.2 i major 
                                  //o igual de 38.2 mostra el següent text.
 Serial.print("Qualificacio energetica:F");

 if (KgCO2 >= 43.2)//Si els KgCO2/m2 es major o igual  a 43.2 mostra el següent
                   //text.
 Serial.print("Qualificacio energetica:G");
                   //Només ho fa un cop.
  } 




//******  Loop  ********************************************************** 
void loop() {
                                     //No fa res            
}
