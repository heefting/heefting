// ------------
// Blink an LED
// ------------

int led1 = D0;

int led2 = D7;

void setup() {

  // We are going to tell our device that D0 and D7 (which we named led1 and led2 respectively) are going to be output
  // (That means that we will be sending voltage to them, rather than monitoring voltage that comes from them)
  
  pinMode(led2, OUTPUT);

}


void loop() {
    
    // Blink first name 'Hamish' in morse
    
    int text_to_output[17] = {0,0,0,0, 0,1, 1,1, 0,0, 0,0,0, 0,0,0,0};
    
    toggleMorse(text_to_output,17);
    
    delay(5000);
    
}


int toggleMorse(int array[], int size) {
    for (int i = 0; i < size; i++) {
        delay(500);
        ledBlink(array[i]);
    }
    return 1;
}


int ledBlink(int type) {
    
    // Dot
    if (type==0) {
        digitalWrite(led2,HIGH);
        delay(500);
        digitalWrite(led2,LOW);
        return 1;
    }
    // Dash
    else if (type==1) {
        digitalWrite(led2,HIGH);
        delay(1200);
        digitalWrite(led2,LOW);
        return 0;
    }
    else {
        return -1;
    }
}

