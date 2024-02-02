import java.awt.*;
public class FrameDemo
{
    FrameDemo()
    {
        Frame fm = new Frame();
        fm.setTitle("My First Frame");
        Label lb = new Label("Welcome to GUI Programming");
        fm.add(lb);
        fm.setSize(300,300);
        fm.setVisible(true);
    }
    public static void main(String args[])
    {
         FrameDemo ta = new FrameDemo();
    }
}
/*
<applet code="FrameDemo.class" width="300" hieght="300">
</applet>
*/