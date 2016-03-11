/*************************************************************************
**    Intrueix els nobres assignats a cada lletra, calcula i mostra     **
**                 els resultats. Només ho fa un cop.                   **
**                                                                      **  
*************************************************************************/                                                                     

//******  Includes  ******************************************************
int a =5;   //Variables internes, d'assignació. S'assigna a cada lletra un
int b =10;  //nombre que s'introduiex de forma automàtica cada cop que hi 
int c =20;  //surt.
//******  Setup  ********************************************************* 
void setup() {        

Serial.begin(9600);     

Serial.println("Una mica de mates "); //Escriu el text i salta de línea

Serial.print("a = "); //Escriu el text a=
Serial.println(a);    //Escriu el resultat assignat a a (5). Salt de lin.
Serial.print("b = "); //Escriu el text b=
Serial.println(b);    //Escriu el resultat assignat a b (10). Salt de lin.
Serial.print("c = "); //Escriu el text c=
Serial.println(c);    //Escriu el resultat assignat a c (20). Salt de lin.
Serial.println("Suma:");//Escriu suma i salta de línea.
Serial.print("a + b = ");//Escriu el text a+b=      
Serial.println(a + b);   //Fa la suma d'a+b, insreix el reultat i salt de ln
Serial.println("Multiplicacio:");//Escriu multiplicacio i sata de linea.
Serial.print("a * c = ");//Escriu el text a*c=
Serial.println(a * c);  //Fa la multiplicació a·c, insereix resultat i s.ln
Serial.println("Divisio:");//Escriu Divisio i salta de linia.
Serial.print("c / b = ");//Escriu el text c/b=
Serial.println(c / b);  //Fa la divisió c/b, insereix resultat i salt de.ln
Serial.println("Modul:");//Escriu Modul i sata de linea.
Serial.print("c % b = ");//Escriu el text c%b=
Serial.println(c % b);  //Fa el módul de c%b, insereix el resultat i s. ln
Serial.println("Resta");//Escriu resta i salta de linea.
Serial.print("b - c = ");//Escriu b-c=
Serial.println(b - c);  //Fa la resta b-c i insereix el resultat.


}


//******  Loop  ********************************************************** 
void loop() {
                        //No fa res        
}
