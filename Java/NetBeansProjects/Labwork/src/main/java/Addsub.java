//import java.io.*;
class Operator
{
    int a=20,b=10;
    void cal1()
    {
        System.out.println("a+b = "+(a+b));
        System.out.println("a-b = "+(a-b));
    }
}
class Mul extends Operator
{
    void cal2()
    {
        System.out.println("a*b = "+(a*b));
        System.out.println("a/b = "+(a/b));
    }
}

class Addsub 
{
    public static void main(String[] args) 
    {
       Mul v=new Mul();
       v.cal1();
       v.cal2(); 
    }
}
