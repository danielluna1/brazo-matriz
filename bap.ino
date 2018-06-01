  #include <Servo.h>  
  #define pinGarra 13
  #define pinDerecha 10 
  #define pinBase 11
  #define pinIzquierda 12 


     Servo Garra;       
     Servo Derecha;        
     Servo Base;      
     Servo Izquierda;       


char Matriz[4][10]={
{30,36,44,50,56,50,44,36,30},
{-5,-4,-2,-1,0,2,5,8,12,15},
{1,2,4,5,7,10,12,14,15,18},
{25,26,27,28,29,30,31,32,35,40}
};
void setup(){
   Garra.attach(pinGarra);
   Derecha.attach(pinDerecha);  
   Base.attach(pinBase);  
   Izquierda.attach(pinIzquierda);  

  Base.write(30);

  Garra.write(25);

  Izquierda.write(17);
  
  Derecha.write(7);
 


 Base.write(Matriz[0][0]);
  delay(300);
 Base.write(Matriz[0][1]);
  delay(300);
 Base.write(Matriz[0][2]);
  delay(300);
 Base.write(Matriz[0][3]);
  delay(300);
 Base.write(Matriz[0][4]);
  delay(300);

 


   Derecha.write(Matriz[1][0]);
  delay(300);
 Derecha.write(Matriz[1][1]);
  delay(300);
 Derecha.write(Matriz[1][2]);
  delay(300);
 Derecha.write(Matriz[1][3]);
  delay(300);
 Derecha.write(Matriz[1][4]);
  delay(300);
 Derecha.write(Matriz[1][5]);
  delay(300);
 Derecha.write(Matriz[1][6]);
  delay(300);
 Derecha.write(Matriz[1][7]);
  delay(300);
 Derecha.write(Matriz[1][8]);
  delay(300);
 Derecha.write(Matriz[1][9]);
  delay(300);

 Izquierda.write(Matriz[2][0]);
 delay(300);
 Izquierda.write(Matriz[2][1]);
 delay(300);
 Izquierda.write(Matriz[2][2]);
 delay(300);
 Izquierda.write(Matriz[2][3]);
 delay(300);
 Izquierda.write(Matriz[2][4]);
 delay(300);
  Izquierda.write(Matriz[2][5]);
 delay(300);
  Izquierda.write(Matriz[2][6]);
 delay(300);
  Izquierda.write(Matriz[2][7]);
 delay(300);
  Izquierda.write(Matriz[2][8]);
 delay(300);
  Izquierda.write(Matriz[2][9]);
 delay(300);


  
    Garra.write(Matriz[3][0]);
  delay(300);
  Garra.write(Matriz[3][1]);
  delay(300);
  Garra.write(Matriz[3][2]);
  delay(300);
  Garra.write(Matriz[3][3]);
  delay(300);
  Garra.write(Matriz[3][4]);
  delay(300);
   Garra.write(Matriz[3][5]);
  delay(300);
 Garra.write(Matriz[3][6]);
  delay(300);
 Garra.write(Matriz[3][7]);
  delay(300);
 Garra.write(Matriz[3][8]);
  delay(300);
 Garra.write(Matriz[3][9]);
  delay(300);

  Base.write(Matriz[0][5]);
  delay(300);
 Base.write(Matriz[0][6]);
  delay(300);
 Base.write(Matriz[0][7]);
  delay(300);
 Base.write(Matriz[0][8]);
  delay(300);
 Base.write(Matriz[0][9]);
  delay(300);
Garra.write(30);
  delay(300);

}

void loop(){
  
}

