void setup()
{
    pinMode(LED_BUILTIN, OUTPUT);
    Serial.begin(9600);
}

int count=0;
void loop()
{
    Serial.print(count);
    Serial.print(" on");
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);

    Serial.println(" off");
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
    count++
}