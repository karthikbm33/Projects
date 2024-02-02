import java.awt.*;
import java.awt.event.*;
import javax.swing.JOptionPane;
import java.awt.Color;
import java.awt.Dimension;
import javax.swing.JButton;
import javax.swing.JFrame;
public class ButtonClickActionEvents extends WindowAdapter
{
 ButtonClickActionEvents()
 {
final JFrame f;
 f=new JFrame("Button Event");
final Label l;
 l=new Label("DETAILS OF PARENTS");
l.setFont(new Font("Calibri",Font.BOLD, 16));
final Label nl=new Label();
final Label dl=new Label();
final Label al=new Label();
l.setBounds(20,20,500,50);
nl.setBounds(20,110,500,30);
dl.setBounds(20,150,500,30);
al.setBounds(20,190,500,30);
JButton mb=new JButton("Mother");
mb.setBounds(20,70,80,30);
mb.addActionListener(new ActionListener(){public void
actionPerformed(ActionEvent e){
nl.setText("NAME:"+" "+"Aishwarya");
dl.setText("DESIGNATION:"+" "+"Professor");
al.setText("AGE:"+" "+"42");
}});
JButton fb=new JButton("Father");
fb.setBounds(110,70,80,30); 
fb.addActionListener(new ActionListener()
{
public void actionPerformed(ActionEvent e)
{
    nl.setText("NAME:"+" "+"Ram");
    dl.setText("DESIGNATION:"+" "+"Manager");
    al.setText("AGE:"+" "+"44");
    }
}
);
JButton cl=new JButton("Close");
cl.setBounds(120,70,50,30);
f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
f.setContentPane(cl);
cl.addActionListener(e ->{
f.dispose();
}
);
//adding elements to the frame
f.add(mb);
f.add(fb);
f.add(l);
f.add(nl);
f.add(dl);
f.add(al);
// setting size,layout, and visibility
f.setSize(550,550);
f.setLayout(null);
f.setVisible(true);
}
public static void main(String args[])
{
new ButtonClickActionEvents(); 
}
}
