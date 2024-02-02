package switchbutton;

import javax.swing.*;
import java.awt.*;

public class BButton extends JFrame
{
    Container c;
    JPanel pan new JPanel();
    SteelCheckBox b1=new SteelCheckBox();
    SteelCheckBox b2=new SteelCheckBox();
    
    public BButton()
    {
        c=getContentPane();
        setSize(300,300);
        
    }
    public static void main(String[] args) {
        BButton frame=new BButton();
        frame.setVisible(true);
    }
}
