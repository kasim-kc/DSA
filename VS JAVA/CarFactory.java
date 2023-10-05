import java.util.Scanner;

abstract class Factory{
    String company, car_name;
    int budget;


    abstract void getprice(double price);
    abstract void detail(String company_name, String car_name);
    abstract void accessories();

    void input(){
        Scanner s2 = new Scanner(System.in);
        System.out.print("Which Company's Car you want - ");
        company = s2.next();
        System.out.print("Car name - ");
        car_name = s2.next();
        System.out.print("Your Budget(in lakhs) - ");
        budget = s2.nextDouble();
    }

    void display(Factory obj1){
        obj1.getprice(budget);
        System.out.println("\n------------");
        obj1.detail(company,car_name);
        System.out.println("\\n-------------");
        obj1.accessories();
        System.out.println("\n----------------");
    }
}

class Sedan extends Factory{
    String Ans;
    public void getprice(double price){
        if(price>6&&price<10){
            Ans = "No";
        }
        else{
            Ans = "Yes";
        }
    }
    public void detail(String company_name, String car_name){
        System.out.println("Company name - "+company_name);
        System.out.println("Car Name - "+car_name);
        System.out.println("Color - Black/White/Red");
        System.out.println("Fuel- Petrol/Deisel");  
        System.out.println("Gears - Auto/Manual");
    }
    public class accessories(){
        System.out.println("Roof Window - " + Ans);
        System.out.println("Alloy Tyres");
        System.out.println("GPS System");
        System.out.println("Auto Driving");
    
    }
}

public class CarFactory {
    public static void main(String args[]){
        Scanner s1 = new Scanner(System.in);
        int ch;
        Factory obj;
        while(true){
            System.out.println("\t1.Sedan Car\n\t2.Hatchback\n\t3.Exit");
            System.out.println("\nWhich car do you want to see:  ")
            System.out.println();
            switch(ch){
                case 1:
                obj = new Sedan();
                obj.input();
                obj.display(obj);
                break;

                
                case 2:
                obj = new Hatchback();
                obj.input();
                obj.display(obj);
                break;

                case 3:
                System.out.println("\n----------------------");
                return;

                default:
                System.out.println("\n-----------INVALID CHOICE-------\n");
                break;
            }

         }    
    }       
}
