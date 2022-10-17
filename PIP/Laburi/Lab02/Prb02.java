package Lab02;

class Test{
	@SuppressWarnings("unused")
	private String msg;
	public Test(String t) {
		msg=t;
	}
}
class Ini{
	static Test t1=new Test("t1");
	Test t2 = new Test("t2");
	static Test t4 = new Test("t4");
	Ini(String s){
		new Test(s);
		System.out.println(s);
	}
}


public class Prb02 {

	public static void main(String[] args) {
		Ini x=new Ini("t3");
		Ini y=new Ini("t4");
		

	}

}
