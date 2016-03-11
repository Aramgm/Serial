/*************************************************************************
**Si la temp. supera els 100º mostra el missatge Aigua supera els 100C, **
**esta bullint! Si la temp. es inferior a 90º Aigua encara no bull.Si es**
**superior a 90 Aigua a punt de bullir i si es igual als 100 Aigua a 100**  
*************************************************************************/                                                                     

//******  Includes  ******************************************************
int temp = 90; //Variable interna
//******  Setup  ********************************************************* 
void setup() {
  
Serial.begin(9600);       // velocitat de càrrega d'escaneig.
 
if (temp < 90)    //Si la temperatura es menor a 90 mostra el següent text.
 Serial.print("Aigua encara no bull");

if ((temp < 100)&& (temp >=90))//Si la temperatura es menor superior o igual
                            //a 90 i inferiora 100ºC mostra el següent text.
 Serial.print("Aigua a punt de bullir");

if (temp == 100)//Quan la temperatura es igual a 100ºC mostra el text següennt.
 Serial.print("Aigua a 100C");
  
if ( temp > 100)          // En el cas de que l'aigua estigui a més de 100C
                          // mostra el text següent, un cop.
 Serial.print("Aigua supera els 100C, esta bullint!");
  } 




//******  Loop  ********************************************************** 
void loop() {
                                     //No fa res            
}
