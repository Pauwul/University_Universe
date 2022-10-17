package Lab02;
import java.util.Arrays;
import java.util.Iterator;
import java.util.stream.Stream;

class Grupa {
    private Student[] listaStudenti = new Student[100];
    // decalaring arrays in a literal way
    // Student[] listaStudenti = new Student[100];


    private int nrStudenti;
    Grupa(){

        listaStudenti[0] = new Student(3, 1251543, "Marina");
        nrStudenti = 1;
//    listaStudenti = {
//            new Student(3,4523523,"Andrei"),
//                new Student(3,5124123,"Gigel"),
//                new Student(3,6124234,"Gheorghita"),
//                new Student(3,4534534,"Mariuca"),
//                new Student(3,4125346,"Costica"),
//                new Student(3,4326453,"Marinel"),
//                new Student(3,4543256,"Eduardo")
//    };
        // listaStudenti[0] = new Student();

    }

    public void afisareGrupa(){
        for( int poz = 0; poz< nrStudenti; poz++){
            listaStudenti[poz].printStudent();
        }

//        Iterator<Student> it = Arrays.stream(listaStudenti).iterator();
// aici voiam sa fac eu o smecherie la afisare cu string-uri
//        // convert to stream:
//        Stream<Student> testStream = Arrays.stream(listaStudenti);
//        //show stream:
//        testStream.forEach(student ->{
//            // aici nu mergea cu ternary ca body-ul unui lambda
//            // function trebuie sa fie un singur statement
//            // ternary-ul cred ca iti creaza cumva mai multe statements
//                if(student.isValidStudent() && student!= null)
//                student.printStudent();
//                else
//                System.out.println("\nStudent null in grupa selectata");
//        });
        // Doar ca da eroare cand e null si daca verific de null imi zice ceva de split iterator

    }
    public void add(Student aux){
        nrStudenti++;
        listaStudenti[nrStudenti-1] = aux;


    }
}
