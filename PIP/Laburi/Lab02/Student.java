package Lab02;

class Student{
    private int anStudiu;
    private long numarMatricol;
    private String numeStudent;

    // constructor fara argumente
    public Student() {
        // int
        numarMatricol=0;
        // long
        anStudiu=1;
        // string
        numeStudent=null;
    }
    // constructor cu argumetne
    public Student(int an, long numar, String nume) {
        anStudiu=an;
        numarMatricol=numar;
        numeStudent=nume;
    }
    // constructor de copiere
    // Implementare cu this:
    public Student(Student student) {
        this(
            student.anStudiu,
            student.numarMatricol,
            student.numeStudent);


//        Implementare fara this:
//        numeStudent=student.numeStudent;
//        numarMatricol=student.numarMatricol;
//        anStudiu=student.anStudiu;
    }

    public boolean isValidStudent(){
        // refactoring: no need for ternary operator
        return (
            this.anStudiu == 1 ||
            this.numarMatricol == 0 ||
            this.numeStudent!= null );
    }
    public void printStudent() {
        if(this.isValidStudent())
            System.out.println("Numele studentului: "+numeStudent+"\nNumar matricol: "+numarMatricol+"\nAn de studiu: "+anStudiu+"\n");
        else System.out.println("Studentul nu exista");
    }
}