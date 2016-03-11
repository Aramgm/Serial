/*************************************************************************
**        Calcula el pas de Gygabytes a Megabytes d'una variable.       **
**                          Només ho fa un cop                          **
**                                                                      **  
*************************************************************************/                                                                     

//******  Includes  ******************************************************
long GB = 100; //Variable assignada amb un nombre.
long MB;      //Variable a on es guarda el resultat.
//S'utilitza long perqué sinó el resultat es negatiu, ja que la variable
//int només accepta nombres més petits.
//******  Setup  ********************************************************* 
void setup() {
  Serial.begin(9600);     
  Serial.print("El teu dispositiu es de: ");//Escriu el text
  Serial.print(GB);//Mostra el resultat assignat a la varible
  Serial.println(" GB ");//Escriu el text i salta de línea.

  MB = 1024 * GB; //Multiplica 1024 per la variable GB (5) i la guarda a la 
                  //variable MB

  Serial.print("Tens disponibles ");//Escriu el text
  Serial.print(MB);                 //Mostra el resultat de la variable MB
  Serial.println(" Megabytes!");    //Escriu el text.


}


//******  Loop  ********************************************************** 
void loop() {
                                     //No fa res            
}
