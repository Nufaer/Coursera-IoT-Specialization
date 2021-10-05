int led = 4;
int pr = 10;
int br = 0;

void setup(void)
{
    pinMode(pr, INPUT);
    pinMode(led, OUTPUT);
}

void loop(void)
{
    br = analogRead(pr);
    
    if (br == 0){
        digitalWrite(led, HIGH);
        delay(10);
        digitalWrite(led, LOW);
        delay(10);
    }
    else{
        digitalWrite(led, HIGH);
        delay(500);
        digitalWrite(led, LOW);
        delay(500);
    }    
}