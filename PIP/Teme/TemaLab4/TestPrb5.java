public class TestPrb5 {
    public static void main(String[] args) {
        ClasaExterioara cx = new ClasaExterioara();
        // ne trebuie un obiect de tipul clasei exterioare pentru a construi o clasa interioara
        ClasaExterioara.ClasaIn ci = cx.new ClasaIn();
        ci.metoda3();
        ClasaExterioara.ClasaInStatica cis = new ClasaExterioara.ClasaInStatica();
        cis.metoda1();
        // ClasaExterioara.ClasaInStatica.metoda1();
        // asa ar fi mai curat, intrucat e o metoda statica, nu ne trebuie obiectul neaparat
        // (ar fi mai usor de inteles pentru un viitor programator ca se apeleaza o metoda statica)

    }
}

class ClasaExterioara{
    ClasaExterioara(){
        System.out.println("\n Constructor clasa exterioara");
    }
    static class ClasaInStatica{
        ClasaInStatica(){
            System.out.println("\n Constructor clasa interioara statica");
        }
        // metode
        static void metoda1(){
            System.out.println("\n Apel metoda1");
        }
        void metoda2() {
            System.out.println("\n Apel metoda2");
        }
    }
    // cred ca deobicei e mai bine sa facem clasele interioare statice, vad ca imi da warning-uri
    class ClasaIn{
        ClasaIn(){
            System.out.println("\n Constructor clasa interioara (non statica)");
        }
        // metode
        void metoda3() {
            System.out.println("\n Apel metoda3");
        }

    }
}