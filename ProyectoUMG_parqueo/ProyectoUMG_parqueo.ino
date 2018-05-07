//salidas de los led de fotoresistencia
//---1
const int ledPinv=15; //led verde
const int ledPinr=14; //led rojo  
const int ldrPing=A0; //foto resistencia
//--2
const int ledPinV2=17; //led verde
const int ledPinV3=16; //led rojo
const int ldrPing2=A1; //foto rsistencia


//estados de parqueos
bool parqueo1= true;
bool parqueo2=true;

//vairable de espacios disponibles
int ParqDisponible=8;

//salidas del display
int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 12;
int t=1000;


void setup() {
  Serial.begin(9600);
  pinMode(ledPinr, OUTPUT);
  pinMode(ledPinv, OUTPUT);
  pinMode(ldrPing, INPUT);

  pinMode(ledPinV2, OUTPUT); //led verde
  pinMode(ledPinV3, OUTPUT); //led rojo
  pinMode(ldrPing2, INPUT); //foto rsistencia


 //display 
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);   
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}
//---------------------------------------
void uno(){
      // UNO 1
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    delay(t);
  }

void dos(){
      // DOS 2
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
    delay(t);
  }
void tres(){
      // TRES 3
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
    delay(t);
  }void cuatro(){
      // CUATRO 4
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    delay(t);
  }
void cinco(){
      // CINCO 5
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    delay(t);
  }
void seis(){
      // SEIS 6
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    delay(t);
  }
void siete(){
      // SIETE 7
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    delay(t);
  }
void ocho(){
      // OCHO 8
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    delay(t);
  }
void nueve(){
      // NUEVE 9
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    delay(t);    
    }

 void cero(){
    //CERO 0
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
    delay(t);

}
//---------------------------------------

void loop() {

   Serial.println(ParqDisponible);
  //mostrar en el display los parqueos desocupados  
  switch(ParqDisponible)
  {
    case 1:
      uno();
      break;
    case 2:
      dos();
      break;
    case 3:
      tres();
      break;
    case 4:
      cuatro();
      break;
    case 5:
      cinco();
      break; 
    case 6:
      seis();
      break;
    case 7:
      siete();
      break;
    case 8:
      ocho();
      break;
        
    default :
      nueve();
      break;     
  }
    
  //verificar que parqueos estan disponibles
  int espacio1=analogRead(ldrPing);
  //---------------------verificamos primer espacio
  if(espacio1<=300)
  {
    //parqueo ocupado
    digitalWrite(ledPinr, HIGH);
    digitalWrite(ledPinv, LOW);
   // Serial.println("LDR, oscuro , led encendido");
    
    if(parqueo1==true)
    {
      parqueo1=false;
      ParqDisponible=ParqDisponible-1;
      Serial.println(ParqDisponible);  
    }
    
  }
  else
  {
    //parqueo desocupado
    digitalWrite(ledPinr, LOW); //luz roja se apaga
    digitalWrite(ledPinv, HIGH);// luz verde encendido
   // Serial.println("------LDR, con luz, led apagado");
   if (parqueo1==false)
   {
     parqueo1=true;
     ParqDisponible=ParqDisponible+1;
    }
    
  }


  //---------------------verificamos segundo espacio
  
  int espacio2=analogRead(ldrPing2);
  if(espacio2<=300)
  {
    //parqueo ocupado
    digitalWrite(ledPinV3, HIGH);
    digitalWrite(ledPinV2, LOW);
   // Serial.println("LDR, oscuro2 , led  rojo encendido");
   if (parqueo2==true)
   {
      parqueo2=false;
     ParqDisponible=ParqDisponible-1; 
   }
   
  }
  else
  {
     //parqueo desocupado
    digitalWrite(ledPinV3, LOW);
    digitalWrite(ledPinV2, HIGH);
   // Serial.println("------LDR, con luz2, led apagado");
    if (parqueo2==false)
    {
     parqueo2=true;
     ParqDisponible=ParqDisponible+1;
    }
    
  }

}






