



//MUSIC Pin Definitions

int Main_Power = 2;
int Starting_Sound = 7;        // Pin connected to MUSIC 7
int self_introduction = 8;     // Pin connected to MUSIC 8
int play_Song = 9;             // Pin connected to MUSIC 9
int Emergency_Alarm = 10;      // Pin connected to MUSIC 10
int play_Quran = 11;           // Pin connected to MUSIC 11
int exit_alarm = 12;           // Pin connected to MUSIC 12 (Song No 0010.mp3)

void setup() {
  Serial.begin(9600);
  pinMode(Main_Power,OUTPUT);
  pinMode(Starting_Sound,OUTPUT);
  pinMode(self_introduction,OUTPUT);
  pinMode(play_Song,OUTPUT);
  pinMode(Emergency_Alarm,OUTPUT);
  pinMode(exit_alarm,OUTPUT);

}



char c;
String voice;

void loop() {
  if (Serial.available()>0)
  {
    voice="";
    voice=Serial.readString();
    Serial.print(voice+'\n');
  }

  if(voice=="power on")
  {
    digitalWrite(Starting_Sound, HIGH);
    digitalWrite(Main_Power, HIGH);
    delay(10);
    digitalWrite(Starting_Sound,LOW);
    digitalWrite(Main_Power,LOW);
  } else if(voice=="power off")
  {
    digitalWrite(Main_Power,LOW);
  }


    if(voice=="give self introduction")
  {
    digitalWrite(self_introduction, HIGH);
    delay(10);
    digitalWrite(self_introduction, LOW);
    delay(1500);                                 //self_introduction Audio time in ms
    
  }


    if(voice=="play song")
  {
    digitalWrite(play_Song,HIGH);
    delay(10);
    digitalWrite(play_Song,LOW);
    delay(1500);                                 //play_Song Audio time in ms
  }


  if(voice=="emergency alarm on")
  {
    digitalWrite(Emergency_Alarm,HIGH);
    delay(10);
    digitalWrite(Emergency_Alarm,LOW);
    delay(1500);                                 //Emergency_Alarm Audio time in ms
  }


    if(voice=="play Quran")
  {
    digitalWrite(play_Quran, HIGH);
    delay(10);
    digitalWrite(play_Quran, LOW);
    delay(1500);                                 //play_Quran Audio time in ms
  }


    if(voice=="exit alarm")
  {
    digitalWrite(exit_alarm, LOW);
    delay(10);
    digitalWrite(exit_alarm, HIGH);
    delay(1500);                                 //exit_alarm Audio time in ms
  }



}


