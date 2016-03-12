/*************************************************************************
**Comprova si el nombre introduit enviat a l'Arduino es parell/imparell.**
**               Es poden introduir tants valors coms es vulgui.        **
**                                                                      **  
*************************************************************************/                                                                     

//******  Includes  ******************************************************
int n;                    //Variable interna.

//******  Setup  *********************************************************   
void setup() { 
Serial.begin(9600);       //Velocitat de càrrega d'escaneig

Serial.println("  Entrar un nombre:");
                          //Escriu el text i salta de línea.
Serial.println();         //Deixa un espai en blanc.
}

//******  Loop  ********************************************************** 
void loop() {
  
if (Serial.available()>0) {// Si la variable es més gran que zero
                           //càrrega el codi.
    n = Serial.parseInt(); //Llegeix el primer nómbre sencer.
     
    Serial.print ("El nombre ");    //Escriu el text.
    Serial.print ( n);     //Escriu el nombre de la variable.
    
    if (( n)%2==0){        //Si la operació (variable)%2=0 llegeix el codi.
    Serial.println (" es parell.");  //Escriu el text.
    Serial.println();      //Deixa un espai en blanc.
    }                      //Finalitza el segón if.
    
    if ((n)%2==1){         //Si la operació (variable)%2=1 llegeix el codi.
    Serial.println (" es imparell.");//Escriu el text.
    Serial.println();      //Deixa un espai en blanc.
    }                      //Finalitza el tercer if.
    
    if (Serial.read() == '\n') {    //Comproba el final de línea.
    Serial.println("  Entrar un nou nombre:");
    Serial.println();      //Deixa un espai en blanc.
    }                      //Finalitza el quart if.
   }                       //Finalitza el primer if.
  }                        //Finalitza void loop.


                              
