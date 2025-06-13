#define TRIG 10
#define ECHO 9

long duration;
int distance;

String notes[] = {"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "A#", "B"};

void setup() {
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  Serial.begin(9600);
}

void loop() {
  // Ultrasonic reading
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  duration = pulseIn(ECHO, HIGH);
  distance = duration * 0.034 / 2;

  if (distance >= 5 && distance <= 50) {
    int noteIndex = map(distance, 5, 50, 11, 0); // invert
    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.print(" cm - Note: ");
    Serial.println(notes[noteIndex]);
  } else {
    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm - Note: none"); // No note played
  }

  delay(50);
}