package Java.draw;
import java.awt.Graphics;
import javax.swing.JFrame;

public class DrawFunction extends JFrame {
    public DrawFunction() {
        setTitle("Draw Function");
        setSize(400, 400);
        setVisible(true);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    public void paint(Graphics g) {
        int x, y;
        double wx, wy;
        // 绘制坐标轴
        g.drawLine(150, 10, 150, 350);
        g.drawLine(10, 150, 350, 150);
        // 绘制函数图像
        for (x = -100; x <= 100; x++) {
            wx = x * 3.14 / 180;
            y = (int) (100 * Math.sin(wx));
            wy = y * 3.14 / 180;
            g.drawLine(x + 150, (int) (150 - wy), x + 151, (int) (150 - wy));
        }
    }

    public static void main(String[] args) {
        new DrawFunction();
    }
}