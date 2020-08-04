class Card {
char suit;
int value;

public:
Card(char, int);
char getSuit(){return suit;}
int getvalue(){return value;}
};
card::Card (char x, int y) {
 suit = x;
 value = y;
}

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

}
