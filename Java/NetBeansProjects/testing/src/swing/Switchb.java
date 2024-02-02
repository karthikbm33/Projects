package swing;

import java.awt.*;

public class Switchb extends Component{
    public Switchb()
    {
        
    }

    @Override
    public void paint(Graphics grf) {
        Graphics2D g2=(Graphics2D)grf;
        g2.setRenderingHint(RenderingHints.KEY_ANTIALIASING, RenderingHints.VALUE_ANTIALIAS_ON);
        int width = getWidth();
        int height = getHeight();
        g2.setColor(getBackground());
        g2.fillRoundRect(0, 0, width, height, 25, 25);
   
        super.paint(grf); 
    }
    public static void main(String[] args) {
        
    }
}
