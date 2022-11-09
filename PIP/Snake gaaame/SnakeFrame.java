import javax.swing.JFrame;

public class  SnakeFrame extends JFrame {
    SnakeFrame(){
        this.add(new SankePanel());
        this.setTitle("Snake");
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setResizable(false);
        this.pack();
        this.setVisible(true);
        this.setLocationRelativeTo(null);


    }
}