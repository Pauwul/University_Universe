import java.util.*;

public class Main {
    static List<Integer> a = Arrays.asList(9,4,4,7,7,8);

    public static void main(String[] args) {
        System.out.println(hasUniqueValues());
        sortList();
    }

     static boolean hasUniqueValues (){

         // Set e abstract, asadar nu poate fi instantiat, folosim altfel de Set
         Set<Integer> s = new HashSet<Integer>();
         for(Integer i : a){
             s.add(i);
         }
         // O solutie mai eleganta: s.addAll(a);
         System.out.println(a);
         System.out.println(s);
         // returnez daca exista o diferenta intre marimea Set-ului, care nu poate contine
         // dublicate si marimea sirului initial
         return s.size() == a.size();
    }
    static void sortList (){
        // methoda sort a unei liste primeste un parametru comparator care determina felul in care
        // se efectueaza sortarea, am optat pentru "null"
        // pentru a se face o sortare implicita(naturala), conform documentatiei
        // desi si asa merge:
        // a.sort(Comparator.naturalOrder());
        a.sort(null);
        System.out.println("\nTask 2:\n" + a);
        Collections.reverse(a);
        System.out.println("\nSortare inversa:\n" + a);

        // e util termenul de comparator pentru urmatoarea situatie:
        // vreau sa sortez ceva dupa un criteriu de-al meu
        //  testList.stream().sorted(Comparator.comparing(ClassName::getFieldName).reversed()).collect(Collectors.toList());

        // conform documentatiei https://docs.oracle.com/javase/8/docs/api/java/util/Comparator.html


    }
}