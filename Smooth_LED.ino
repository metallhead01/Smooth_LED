#define LED_PIN_6 6 // задаем имя для Pin6
#define LED_PIN_9 9 // задаем имя для Pin9
#define LED_PIN_11 11 // задаем имя для Pin11

unsigned long last_time;
int a;
int b;
int c;
int d;
int e;
int f;

void setup() // процедура setup
{
  Serial.begin(9600);

  pinMode(LED_PIN_9, OUTPUT); // инициализируем Pin9 как выход
  pinMode(LED_PIN_11, OUTPUT);
  pinMode(LED_PIN_6, OUTPUT);
}
//
void loop() // процедура loop
{
  while (a <= 50)
  {
    if (millis() - last_time > 60)
    {
      analogWrite(LED_PIN_9, a);
      last_time = millis();
      a = a + 1;
      Serial.print("a: "); Serial.println(a);
    }
  }
  while (a <= 200)
  {
    if (millis() - last_time > 45)
    {
      analogWrite(LED_PIN_9, a);
      last_time = millis();
      a = a + 1;
      Serial.print("a: "); Serial.println(a);
    }
  }
  while (a >= 60)
  {
    if (millis() - last_time > 30)
    {
      analogWrite(LED_PIN_9, a);
      last_time = millis();
      a = a - 2;
      Serial.print("a: "); Serial.println(a);
    }
  }
  while (a >= 10)
  {
    if (millis() - last_time > 80)
    {
      analogWrite(LED_PIN_9, a);
      last_time = millis();
      a = a - 1;
      Serial.print("a: "); Serial.println(a);
    }
  }
  while (b <= 50)
  {
    if (millis() - last_time > 60)
    {
      analogWrite(LED_PIN_11, b);
      last_time = millis();
      b = b + 1;
      Serial.print("b: "); Serial.println(b);
    }
  }
  while (b <= 200)
  {
    if (millis() - last_time > 45)
    {
      analogWrite(LED_PIN_11, b);
      last_time = millis();
      b = b + 1;
      Serial.print("b: "); Serial.println(b);
    }
  }
  while (b >= 60)
  {
    if (millis() - last_time > 30)
    {
      analogWrite(LED_PIN_11, b);
      last_time = millis();
      b = b - 2;
      Serial.print("b: "); Serial.println(b);
    }
  }
  while (b >= 10)
  {
    if (millis() - last_time > 80)
    {
      analogWrite(LED_PIN_11, b);
      last_time = millis();
      b = b - 1;
      Serial.print("b: "); Serial.println(b);
    }
  }
  while (c <= 50)
  {
    if (millis() - last_time > 60)
    {
      analogWrite(LED_PIN_6, c);
      last_time = millis();
      c = c + 1;
      Serial.print("c: "); Serial.println(c);
    }
  }
  while (c <= 200)
  {
    if (millis() - last_time > 45)
    {
      analogWrite(LED_PIN_6, c);
      last_time = millis();
      c = c + 1;
      Serial.print("c: "); Serial.println(c);
    }
  }
  while (c >= 60)
  {
    if (millis() - last_time > 30)
    {
      analogWrite(LED_PIN_6, c);
      last_time = millis();
      c = c - 2;
      Serial.print("c: "); Serial.println(c);
    }
  }
  while (c >= 10)
  {
    if (millis() - last_time > 80)
    {
      analogWrite(LED_PIN_6, c);
      last_time = millis();
      c = c - 1;
      Serial.print("c: "); Serial.println(c);
    }
  }
}
