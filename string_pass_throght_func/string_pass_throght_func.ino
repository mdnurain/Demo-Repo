char str[] = "Hello World";

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void printfun(char *h)
{
    Serial.println(h);
}

void loop() {
  // put your main code here, to run repeatedly:
  printfun(str);
}
