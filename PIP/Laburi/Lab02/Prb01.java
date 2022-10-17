package Lab02;


public class Prb01 {

	public static void main(String[] args) {
		System.out.println("\n=========================================================\n");
		Student student = new Student(4, Integer.parseInt("10011010111110",2),Integer.toHexString(1001010));
		Student student2= new Student(2, 412421412,Integer.toBinaryString(1414124));
		student.printStudent();
		student2.printStudent();
		Student student3= new Student(student2);
		student2=student;
		student2.printStudent();
		student3.printStudent();
		System.out.println("\n----------------------------------------------------------\nTema:\n");

		//tema
		Grupa grupa = new Grupa();

		System.out.println("----Before ... ---");
		grupa.afisareGrupa();
		System.out.println("----After ... ---");
		grupa.add(student2);
		grupa.afisareGrupa();

	}

}
