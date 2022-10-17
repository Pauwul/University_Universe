import java.sql.SQLOutput;

public class Masina {
    private String marca;
    private int anFabricatie;
    private int vitezaMaxima;
    private String[] informatiiAditionale = new String[100];


//     ={
//            new String("rosie"),
//            new String("weather"),
//            new String("beautiful"),
//            new String("quite"),
//            new String("yes")
//    };
    Masina(){
        marca = "Bemveu";
        anFabricatie = 1970;
        vitezaMaxima = 9999999;
        informatiiAditionale[0]= null;
    }
    Masina(String mark, int carl, int vroom, String[] informatica){
        marca = mark;
        anFabricatie = carl;
        vitezaMaxima = vroom;
        informatiiAditionale= informatica;
    }
    // am facut-o publica in caz ca vreau sa o folosesc prin main sa verific,
    // pentru contextul mai larg e mai bine privata
    public boolean isValidCar(){

        return (
                this.marca !="Bemveu" ||
                        this.anFabricatie != 1970 ||
                        this.vitezaMaxima!= 9999999 ||
                        this.informatiiAditionale[0] != null);
    }
    public void printCar() {
        if (this.isValidCar())
        {
            System.out.println("Numele marcii: " + marca + "\nAn fabricatie: " + anFabricatie + "\n Vitezium maximum " + vitezaMaxima + "\nInformation Aditionalation:\n");
           // TODO ENHANCED LOOOOOOOOOOOOOOP
            for (String s : informatiiAditionale) {
                System.out.println(s + " ");
            }
            System.out.println("\n");

        }
        else System.out.println("\nError: Kilometrii dati inapoi sau masina e furata, proceed at your own risk\n");
    }

    public void check(Masina m){
        // FIXME
        // am aflat azi ca nu exista suport de limbaj pentru a itera peste proprietatile unui obiect direct
        // voiam sa iau cumva o lista de proprietati ale obiectului si sa iterez peste ele intr-un for,
        // afisand proprietatile care sunt la fel sau care difera (ca sa nu scriu de mana toate conditiile)
        if(this.isValidCar() && m.isValidCar()) {
            // TODO Comparare de string-uri in java !
            if (this.marca.equals(m.marca))
                System.out.println("\nMarca este aceeasi: " + this.marca + "==" + m.marca);
            else {
                System.out.println("\nMarca difera: " + this.marca + " != " + m.marca);
            }
            // an fabricatus
            if (this.anFabricatie == m.anFabricatie) {
                System.out.println("\nAn fabicratie identic: " + this.anFabricatie + "==" +m.anFabricatie);
            } else {
                System.out.println("\nAn fabricatie diferit" + this.anFabricatie + "!=" +m.anFabricatie);
            }
            // vitezus maximus
            if (this.vitezaMaxima == m.vitezaMaxima) {
                System.out.println("\nAceeasi viteazaMaxima" + this.vitezaMaxima + "==" +m.vitezaMaxima);
            } else {
                System.out.println("\nvitezaMaxima diferita" + this.vitezaMaxima + "!=" +m.vitezaMaxima);
            }
            // TODO comparatie de "masive" de String-uri
            if (this.informatiiAditionale.length == m.informatiiAditionale.length){
                // am incercat cu enhanced for loop, dar nu cred ca poti itera peste 2 "masive" simultan
                for (int i = 0; i < this.informatiiAditionale.length;  i++) {
                    if (!this.informatiiAditionale[i].equals(m.informatiiAditionale[i]) ){
                        System.out.println("\nCele doua campuri nu sunt egale:" + this.informatiiAditionale[i] +"!="+ m.informatiiAditionale[i]);
                        break;
                    }
                }
                System.out.println("\nCampurile de informatii sunt egale");
            } else {
                System.out.println("\nLungimile campurilor de informatii difera");
            }
        } else {
            System.out.println("\nO masina e nulla");
        }
    }
}
