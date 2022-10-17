public class TestPrb {

        public static void main(String[] args) {
          Masina bmwDeBombardier = new Masina();
          String[] test= {new String("mega"), new String("mega"),  new String("super"), new String("utltra")};
          Masina volsvagenBassat = new Masina("volvasgen", 2030, 300, test );
          bmwDeBombardier.printCar();
          volsvagenBassat.printCar();
          // caz null
          System.out.println("\n--------------- Caz nul: --------------------");
          bmwDeBombardier.check(volsvagenBassat);
          // caz identitate
          System.out.println("\n ------- Caz egalitate: -----------------");
          Masina volsvagenBassat2 = new Masina("volvasgen", 2030, 300, test );
          volsvagenBassat2.check(volsvagenBassat);

          // caz-uri aproape identitate
          System.out.println("\n --------------- Caz aproape egalitate: marka, viteza, an ---");
          Masina volsvagenBassat3 = new Masina("volvo",2029,50000, test);
          volsvagenBassat3.check(volsvagenBassat2);

          // caz identitate in afara de Masivus de obiectus
          System.out.println("\n --------------- Caz aproape egalitate: masiv ---------------");

          // subcaz a
          //volvo e identic aproape cu volsvagenBassat3, dar test 2 are cu un camp mai putin
          System.out.println("\n ---------------Caz in care lungimea masivului e diferit---------------");

          String[] test2= {new String("mega"), new String("mega"),  new String("super")};
          Masina volvo = new Masina("volvo",2029,50000, test2);
          volsvagenBassat3.check(volvo);

          //subcaz b
          //volvo2 identi cu volvo3 mai putin ultimul cmap
          System.out.println("\n ---------------Caz in care un element al masivului e diferit---------------");

          String[] test3= {new String("mega"), new String("mega"),  new String("sa fie bine sa nu fie rau")};
          Masina volvo2 = new Masina("volvo",2029,50000, test3);
          volvo2.check(volvo);

        }
}
