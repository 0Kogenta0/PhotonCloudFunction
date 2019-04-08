int led1 = D7;
int led2 = D6;
int led3 = D5;

int ledToggle(String command);

void setup() {
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
    Particle.function("led",ledToggle);
}

void loop() {

}

int ledToggle(String command) {

    if (command=="red") {
        digitalWrite(led1,HIGH);
        return 1;
    }
    else if (command=="blue") {
        digitalWrite(led2,HIGH);
        return 1;
    }
    else if (command=="green") {
        digitalWrite(led3,HIGH);
        return 1;
    }
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    return -1;
}