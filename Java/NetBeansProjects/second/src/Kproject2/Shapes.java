import java.applet.*;
import java.awt.*;
import javax.swing.JOptionPane;
public class Shapes extends Applet
{
 
 //Function to draw and fill shapes
 public void paint(Graphics g)
    {
    setBackground(Color.white);
   //Draw a square
   g.setColor(Color.black);
   g.drawString("Square",75,200);
   int x[]={50,150,150,50};
   int y[]={50,50,150,150};
   g.drawPolygon(x,y,4);
   g.setColor(Color.yellow);
   g.fillPolygon(x,y,4);
   //Draw a pentagon
   g.setColor(Color.black);
   g.drawString("Pentagon",225,200);
   x=new int[]{200,250,300,300,250,200};
   y=new int[]{100,50,100,150,150,100};
   g.drawPolygon(x,y,6);
   g.setColor(Color.yellow);
   g.fillPolygon(x,y,6);
   //Draw a circle
   g.setColor(Color.black);
   g.drawString("Circle",400,200);
   g.drawOval(350,50,125,125);
   g.setColor(Color.yellow);
   g.fillOval(350,50,125,125);
   //Draw an oval
   g.setColor(Color.black);
   g.drawString("Oval",100,380);
   g.drawOval(50,250,150,100);
   g.setColor(Color.yellow);
   g.fillOval(50,250,150,100);
   //Draw a rectangle
   g.setColor(Color.black);
   g.drawString("Rectangle",300,380);
   x=new int[]{250,450,450,250};
   y=new int[]{250,250,350,350};
   g.drawPolygon(x,y,4);
   g.setColor(Color.yellow);
   g.fillPolygon(x,y,4);
//Draw a triangle
g.setColor(Color.black);
g.drawString("Traingle",100,525);
x=new int[]{50,50,200};
y=new int[]{500,400,500};
g.drawPolygon(x,y,3);
g.setColor(Color.yellow);
g.fillPolygon(x,y,3);
 }
 public void destroy()
 {
 JOptionPane.showMessageDialog(null,"Applet : Destroyed"); 
 }
public static void main(String args[])
{
    Shapes m=new Shapes();
    Frame f=new Frame("Shapes");
    f.add(m);
    f.setSize(300,450);
    f.setVisible(true); 
 }
}

