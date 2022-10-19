package work;

import javax.sound.midi.Soundbank;

public class TestPrb1 {
    public static void main(String[] args)
    {
        System.out.println("\nMain TestPrb1 Apelat");
        Sistem sistem = new Sistem();
        Adauga adauga = new Adauga(sistem);
        // smecherie care merge pentru ca returnez this
        adauga
            .add(new Piesa()).add(new Piesa()).add(new Piesa())
            .add(new Agregat()).add(new Agregat())
            .add(new Subsistem());
    }
}



class Sistem{
    Piesa[] mPiesa = new Piesa[10];
    Agregat[] mAgregat = new Agregat[10];
    Subsistem[] mSubsistem = new Subsistem[10];
    Sistem(){
        System.out.println("\nSistem");
    }



}

// clase pentru compunere
class Adauga{
    Sistem sistem;
    Adauga(Sistem sistemAdauga){
        sistem = sistemAdauga;
        System.out.println("\nAdauga");
    }
    Adauga add(Piesa piesa){
        sistem.mPiesa[0] = piesa;
        return this;
    }
    Adauga add(Agregat agregat){
        sistem.mAgregat[0] = agregat;
        return this;
    }
    Adauga add(Subsistem subsistem){
        sistem.mSubsistem[0] = subsistem;
        return this;
    }

}

class Subsistem{
    Subsistem(){
        System.out.println("\nSubsistem");
    }
}
class Piesa{
    Piesa(){
        System.out.println("\nPiesa");
    }
}
class Agregat{
    Agregat(){
        System.out.println("\nAgregat");
    }
}