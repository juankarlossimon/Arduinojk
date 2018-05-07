  int LED = 10 ;
     int boton = 6;
 
     void setup()
          {
               pinMode( LED, OUTPUT) ; // LED como salida
               pinMode( boton  , INPUT) ;            //botón  como entrada
          }
   void loop()
         {
             bool valor = digitalRead (boton) ;
             
             if (valor==true)
             {
              digitalWrite(  LED, HIGH) ;
             delay ( 1000) ;
              }
             else
             {
              digitalWrite(  LED, LOW) ;
              delay ( 1000) ; 
              }
             
         }
