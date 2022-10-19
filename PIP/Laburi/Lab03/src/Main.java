public class Main {
    public static void main(String[] args) {
    C c =new C();
        String f = "f";
        c.print();

//    C d = new C(f) ;
    }

}

class A{
    A(){
        System.out.println("\n  A");
    }
    A(String str){
        System.out.println(str);
    }
   public void print(){
        System.out.println("yes print from A");
    }
}

class B {
    B(){
        System.out.println("\n  B");
    }
    void print(){
        System.out.println("yes print from B");
    }
}
class C extends A{

    B b = new B();
    String string = "string";
    C(){
        B b2 = new B();
        System.out.println("\n  C");
    }
//    C(String string){
//        A(string);
//    }

}