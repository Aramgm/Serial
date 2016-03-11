/*************************************************************************
**    Intrueix els nobres assignats a cada lletra, calcula i mostra     **
**    els resultats que s'assignen amb una nova variable                **
**                        Només ho fa un cop.                           **  
*************************************************************************/                                                                     

//******  Includes  ******************************************************

int a =3;   //Variables internes, d'assignació. S'assigna a cada lletra un
int b =4;   //nombre que s'introduiex de forma automàtica cada cop que hi 
int h;      //surt.
int resultat1;//On es guarda el primer resultat.
int resultat2;//On es guarda el segon resultat.
int resultat3;//On e guarda el tercer resultat.
//******  Setup  ********************************************************* 
void setup() {        

Serial.begin(9600);    

Serial.println("Calcul de la hipotenusa"); //Escriu el text i salta de línea
Serial.println();                   //Deixa un espai enblanc.
Serial.print("a=");                 //Escriu a=
Serial.println(a);                  //Inserta el valor de a i salta de línea.
Serial.print("b=");                 //Escriu b=
Serial.println(b);                  //Inserta el valor de b i salta de línea.
Serial.println("h=?");              //Escriu h=? i salta de línea
Serial.println();                   //Deixa un espai en blanc i salta de lin.
Serial.println("El primer nombre al quadrat:");//Escriu el text i salta de lin
Serial.println(resultat1=pow(3,2));//Calcula 3 al quadrat i l'insereix a res.1
Serial.println();                   //Deixa un espai en blanc i salta de lin.
Serial.println("El segon nombre al quadrat:");//Escriu el text i salta de lin
Serial.println(resultat2=pow (4,2));//Calcula 4 al quadrat i l'insereix a res.2
Serial.println();                   //Deixa un espai en blanc i salta de lin.
Serial.println("La suma del primer i el segon resultat:");//Escriu text i s.ln.
Serial.println(resultat3=resultat1+resultat2);//Suma els resultats i els inse-
Serial.println();                   //reix a resultat 3 i salta de linea.
Serial.println("Arrel quadrada del tercer resultat:");//Escriu text i s.lin.
Serial.print("h=");                 //Escriu h=
Serial.print(sqrt (resultat3));     // Fa l'arrel quadrada del resultat 3.

}


//******  Loop  ********************************************************** 
void loop() {
                        //No fa res        
}
