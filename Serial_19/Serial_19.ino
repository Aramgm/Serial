/*************************************************************************
**Fa el càlcul de les resistències en sèrie i en paral·lel de dos valors**
**          introduïts de manera manual i enviats a l'Arduino.          **
**           Es poden introduir tants valors coms es vulgui.            **  
*************************************************************************/                                                                     

//******  Includes  ******************************************************
float r1, r2;   // Variables amb coma flotant (punt decimal)per les dades.
float rSerie, rParalel;// Variables amb coma flotant per el resultat.
//******  Setup  *********************************************************   
void setup() { 
Serial.begin(9600);        //Velocitat de càrrega d'escaneig

Serial.println("Entra el valor de R1 i R2 (separats per una coma)");
//Escriu el text i salta de línea.
Serial.println();         //Deixa un espai en blanc.
}

//******  Loop  ********************************************************** 
void loop() {
  
while (Serial.available() > 0) {  // Si la variable es més gran que zero
                                  //càrrega el codi.
    r1 = Serial.parseInt();//Llegeix el primer nómbre sencer de la posició
                           //en la que es troba i el guarda a r1.
    Serial.print("R1=");   //Escriu R1=.
    Serial.println( r1) ;  //Inserta el nombre de la variable r1.
    
    r2 = Serial.parseInt();//Llegeix el primer nómbre sencer de la posició
                           //en la que es troba i el guarda a r2.

    Serial.print("R2=");   //Escriu R2=.
    Serial.println( r2) ;  //Inserta el nombre de la variable r2.
    Serial.println();      //Deixa un espai en blanc.
   
    if (Serial.read() == '\n') { //Comproba el final de línea.
      
    delay(1000);           //Espera 1 segon.
    
    Serial.println("Resistencies en serie:");//Escriu el text i salta de
                           //línea.
    Serial.println();      //Deixa un espai en blanc.
    
    Serial.print("RT = R1 + R2 = ");//Escriu el text.
    Serial.print(r1);      //Escriu la variable r1.
    Serial.print(" + ");   //Escriu +.
    Serial.print(r2);      //Escriu la variable r2.
    Serial.print(" = ");   //Escriu =.
    Serial.print (r1+r2);//Escriu el resultat de la suma de les variables.
    Serial.println("ohms");//Escriu el text i salta de línea.
    Serial.println();      //Deixa un espai en blanc.

    delay(1000);           //Espera 1 segon.
    
    Serial.println ("Resistencies en paral.lel:");//Escriu el text i salta
                           //de línea.
    Serial.println ();     //Deixa un espai en blanc.
    
    Serial.print("RT = 1/(( 1/R1 ) + ( 1/R2)) = 1/( ");//Escriu el 
                           //text.
    Serial.print(1/r1);    //Fa la divisió de 1 entre la variable r1.
    Serial.print(" + ");   //Escriu +.
    Serial.print(1/r2);    //Fa la divisió de 1 entre la variable r2.
    Serial.print(" ) = "); //Escriu ) =.
    Serial.print(" 1/"); //Escriu el text.
    Serial.print(1/r1+1/r2);//Escriu el resultat de la operació.
    Serial.print(" ) = "); //Escriu ) =.
    Serial.print(1/(1/r1+1/r2));
    Serial.println("ohms");//Escriu el text i salta de línea.

    Serial.println ();     //Deixa un espai en blanc.
    delay(3000);           //Espera 3 segons.
    Serial.println("Entra nous valors per R1 i R2");//Escriu el text i s.lin.
    Serial.println ();     //Deixa un espai en blanc.
    }
  }
}
                              
