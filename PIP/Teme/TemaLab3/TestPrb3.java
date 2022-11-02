public class TestPrb3 extends FinalDemo {
    public static void main( String args[]){
        // TODO ex1 : final ne lasa sa modificam variabila o singura data
        final int finished = 1;
        //Eroare:  finished = 2;
        final String DA;
        // TODO ex2
        // O variabila finala poate fi ediata oriunde ai acces la ea(in functie de specificator)
        // dar doar o data
        DA = "test" ;
        // final se poate asigna o valoare, dar nu se poate schimba odata asignata
        // da = "test2";
        System.out.println(DA);
        //
        final Obiect OBIECT = new Obiect();

        // TODO Ex3 continutul unui obiect merge modificat
        OBIECT.nr = 40;
        OBIECT.nr = 50;
        System.out.println(OBIECT.nr);
        // testam daca mege sa ii egalam
        Obiect obiect1 = new Obiect();

       //  Nu merge =>  obiect = obiect1;

    }
    // o metoda finala nu poate fi suprascrrisa de catre un copil

    // public final void display() {
    //   System.out.println("The final method is overridden.");
    //}

}

class Obiect {
    int nr;

    Obiect(){
        nr = 20;
    }
}

// TODO Ex4

/* Nu merge sa extinzi o clasa finala

class FinalClassChild extends FinalClass{
    public final void display() {
        System.out.println("This is a child of FinalClass.");
    }
}
*/

final class ClasaFinala{
    int nr;
    ClasaFinala(){
        nr = 10;
    }
}
class FinalDemo {
    // create a final method
    public final void display() {
        System.out.println("This is a final method.");
    }
}


class FinalClass{
    public final void display() {
        System.out.println("This is a final class.");
    }
}

/* Nu merge sa extinzi o clasa finala

class FinalClassChild extends FinalClass{
    public final void display() {
        System.out.println("This is a child of FinalClass.");
    }
}
*/
// TODO Ex5
// "final" se pune la o metoda cand nu vrei sa mai fie modificata de altcineva


// TODO Ex6
// Folosim o variabila static si final cand vrem sa stabilim un parametru care apartine
// clasei si pe care nu vrem sa il mai modificam

class Math {
    final static double pi = 3.14112314512515;
}