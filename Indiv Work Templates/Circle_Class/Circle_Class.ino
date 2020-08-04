// Circle Class
class Circle {
   // Private variables that can only be accessed within the class
   // Place private variables here.
  int radius;
   
  // Everything after "public" can be accesed outside of the class (i.e in "setup" or "loop")
  public:
    Circle(int);  
    double area() {
      return radius*radius*3.14;
    }
    // Put a constructor here: What information is needed?
    // Create a function that returns area (use 3.14 for pi)
    // Create a function that allows the user to update the values
};

// Definitions of functions declared above
  Circle :: Circle (int r) {
    radius = r;
  }

void setup() {
  // Instantiates the Circle class
  Circle cir(5);
  // Can only print after serial.begin()
  int area = cir.area();
  Serial.begin(9600);
  Serial.println(area);
  // Calls the area() function within the class

  // Prints area

  // Updates values

  // Prints new areas
  
}

void loop() {
  // put your main code here, to run repeatedly:
}
