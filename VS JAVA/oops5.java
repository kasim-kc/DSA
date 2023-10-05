interface Vehicle{
    void gearChange();
    void speedUp();
    void applyBreaks();
}

class Bicycle implements Vehicle{
    public void gearChange(){
        System.out.println("Changing the Gears Of Bicycle");
    }
    public void speedUp(){
        System.out.println("Speeding Up the Bicycle");
    }
    public void applyBreaks(){
        System.out.println("Applying breaks of Bicycle");
    }
}

class Bike implements Vehicle{
    public void gearChange(){
        System.out.println("Changing the Gears Of Bike");
    }
    public void speedUp(){
        System.out.println("Speeding Up the Bike");
    }
    public void applyBreaks(){
        System.out.println("Applying breaks of Bike");
    }
    
}

class Car implements Vehicle{
    public void gearChange(){
        System.out.println("Changing the Gears Of Car");
    }
    public void speedUp(){
        System.out.println("Speeding Up the Car");
    }
    public void applyBreaks(){
        System.out.println("Applying breaks of Car");
    }

}

public class oops5 {
    public static void main(String args[]){
        Bicycle b1 = new Bicycle();
        b1.gearChange();
        b1.speedUp();
        b1.applyBreaks();

    }

}
