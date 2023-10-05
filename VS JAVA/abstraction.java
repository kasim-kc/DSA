abstract class Animal{                            // Cause it's irrelevant for the user to access it..As you aren't creating animal object
    abstract void walk();                           // rather creating sub-class object and using properties of sub-class(though inheritance done).
    Animal(){
        System.out.println("Creating an Animal");
    }
    public void eat(){
        System.out.println("Animal eats");
    }
}


class Horse extends Animal{
    Horse(){
        System.out.println("Created A Horse");       // When we call a constructor from sub-class, first the constructor of base class gets called.
    }
    public void walk(){
        System.out.println("Walks on 4 legs");
    }
}

class Chicken extends Animal{
    public void walk(){
        System.out.println("Walks on 2 legs");
    }
}



public class abstraction {
    public static void main(String args[]){
        Horse horse = new Horse();
        horse.walk();
    }
}
