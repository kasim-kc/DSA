// Dynamic Binding..
import java.io.*;
import java.util.*;
abstract class Shape{
    double value1, value2;
    abstract double compute_area();
}

class triangle extends Shape{
     void set_dimension(double base,double height){
        value1 = base;
        value2 = height;
    }
     double compute_area(){
        double area;
        area = 0.5*value1*value2;
        return area;
    }
}

class rectangle extends Shape{
     void set_dimension(double length, double width){
        value1 = length;
        value2 = width;
    }
     double compute_area(){
        double area;
        area=value1 * value2;
        return area;
    }
}


public class DynamicBinding{
    public static void main(String args[]){
        double base,height,length,breadth,area;
        
        triangle t1 = new triangle();
        rectangle r1 = new rectangle();
        
        System.out.print("Enter the base of triangle : ");
        Scanner s1 = new Scanner(System.in);
        base = s1.nextDouble();
        System.out.print("Enter the height of triangle : ");
        height = s1.nextDouble();
        t1.set_dimension(base,height);
        area = t1.compute_area();
        System.out.println("The Area of the Triangle is: "+area);
        System.out.println("Enter the length of rectangle : ");
        length = s1.nextDouble();
        System.out.println("Enter the breadth of rectangle : ");
        breadth = s1.nextDouble();
        r1.set_dimension(length,breadth);
        area = r1.compute_area();
        System.out.println("The area of rectangle is : "+area);
        
    }   
}