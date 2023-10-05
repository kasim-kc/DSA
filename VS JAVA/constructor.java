class Student{
    String name;
    int age;

    public void printInfo(){
        System.out.println(this.name);
        System.out.println(this.age);
    }

    // Constructor is made inside a Class --> It is the constructor of the objects of that class.. 
    // NON - PARAMETERIZED CONSTRUCTOR..
    // Student(){
    //     System.out.println(" ");
    // }

    // // PARAMETERIZED CONSTRUCTOR 
    // Student(String name, int age){
    //     this.name = name;
    //     this.age = age;      // Initialize in Parameter itself
    // }

    // COPY CONSTRUCTOR...
    Student(Student s2){
        this.name = s2.name;
        this.age = s2.age;
    }
    Student(){
    }
}


public class constructor {
    public static void main(String args[]){
        Student s1 = new Student();
        s1.name = "kasim";
        s1.age=20;

        Student s2 = new Student(s1);

        s2.printInfo(); 
    }
}




