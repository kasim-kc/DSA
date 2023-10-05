class Student{
    String name;
    int age;
    float cgpa;

    public void printInfo(){
        System.out.println("My Name is "+this.name);
        System.out.println("My age "+this.age);
        System.out.println("I scored "+this.cgpa+" CGPA");
    }
}


public class class_student {
    public static void main(String args[]){
        Student stu_1=new Student();
        stu_1.name="Kasim";
        stu_1.age=16;
        stu_1.cgpa=8;
        stu_1.printInfo();

    }
}
