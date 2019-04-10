/*
 * a message must only contain letters and numbers (including spaces) 
 * before the message starts, quick pulses indicate the length of the message
 * followed by five seconds before the message starts
 * when the message is done, there is an additional five seconds before
 * the length is shown and the message sends again (repeats infinately)
 * 
 * jacob psimos
 */

#include "mcode.h"

void setup() {
  pinMode(A0, OUTPUT);
  digitalWrite(A0, LOW);
}

int verifyMessage(const char *str, const int len){
  if(str == NULL || len <= 0){
    return -1;
  }
  for(int i = 0; i < len; i++){
    if(!isalnum(tolower(str[i])) && str[i] != ' '){
      return 1;
    }
  }
  
  return 0;
}

void loop() {
  char *msg = "we remember";
  int i;
  int j;
  int len = strlen(msg);
  unsigned long unitLength = 1000;
  
  if(verifyMessage(msg, len)){
    msg = "sos"; //invalid messages are changed to 'sos' (help me, I don't know) ^_^
    len = 3;
  }

  //Quick pulses to indicate message length,
  //then wait for five seconds before starting.
  for(i = 0; i < len; i++){
    digitalWrite(A0, HIGH);
    delay(100);
    digitalWrite(A0, LOW);
    delay(100);
  }

  delay(5000);

  for(i = 0; i < len; i++){
    int m = tolower(msg[i]);
    int idx = 0;
    if(m != ' '){
      idx = (m >= 'a' && m <= 'z') ? m - 'a' : (m - '0' + 26);
      const struct mletter *mcode = &codes[idx];
      for(j = 0; j < mcode->num_m; j++){
        //ON
        digitalWrite(A0, HIGH);
        delay(unitLength * (unsigned long)mcode->m[j]);
        //OFF
        digitalWrite(A0, LOW);
        //if(j < mcode->num_m - 1){
          delay(unitLength * (unsigned long)mcode->m[j]);
        //}
      }
      //if(i < len - 1){
        delay(unitLength * 3UL);
      //}
    }else{
      delay(unitLength * 7UL);
    }
  }

  delay(5000);
}
