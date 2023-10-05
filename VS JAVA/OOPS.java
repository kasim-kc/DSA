class Car{
    String color;
    String brand;

    public void drive(){
        System.out.println("Driving the car");
    }
    public void openWindow(){
        System.out.println("Opening Window");
    }
    public void printBrand(){
        System.out.println(this.brand);
    }
}


public class OOPS {
    public static void main(String args[]){
    Car omni = new Car();
    omni.color = "White";
    omni.brand = "Maruti";
    
    omni.printBrand();
    omni.drive();
    omni.openWindow();


    }
}