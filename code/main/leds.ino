int value, value2;
int periode = 20000;

void ledFade () {
  value = 128 + 128 * sin(2 * PI / periode * (time));
  value2 = 128 + 128 * cos(2 * PI / periode * (time));

  analogWrite(ledA1, value2);
  analogWrite(ledB1, value2);
  analogWrite(ledA2, value);
  analogWrite(ledB2, value);
  analogWrite(ledA3, value2);
  analogWrite(ledB3, value2);
  analogWrite(ledA4, value);
  analogWrite(ledB4, value);
}

void randLed () {
  analogWrite(ledA1, random(0, 255));
  analogWrite(ledA2, random(0, 255));
  analogWrite(ledA3, random(0, 255));
  analogWrite(ledA4, random(0, 255));
  analogWrite(ledB1, random(0, 255));
  analogWrite(ledB2, random(0, 255));
  analogWrite(ledB3, random(0, 255));
  analogWrite(ledB4, random(0, 255));
}
