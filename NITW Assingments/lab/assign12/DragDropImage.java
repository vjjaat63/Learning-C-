import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class DragDropImage extends JFrame {
    JLabel imageLabel;
    Point initialClick;

    public DragDropImage() {
        // Set up the frame
        setTitle("Drag and Drop Image");
        setSize(600, 400);
        setLayout(null); // No layout manager (absolute positioning)
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // Load the image
        ImageIcon icon = new ImageIcon("your_image.jpg"); // Put your image path here
        imageLabel = new JLabel(icon);
        imageLabel.setBounds(100, 100, icon.getIconWidth(), icon.getIconHeight());

        // Add mouse listener to detect press and drag
        imageLabel.addMouseListener(new MouseAdapter() {
            public void mousePressed(MouseEvent e) {
                initialClick = e.getPoint(); // Get initial click point
            }
        });

        imageLabel.addMouseMotionListener(new MouseMotionAdapter() {
            public void mouseDragged(MouseEvent e) {
                int thisX = imageLabel.getLocation().x;
                int thisY = imageLabel.getLocation().y;

                // Calculate movement
                int xMoved = e.getX() - initialClick.x;
                int yMoved = e.getY() - initialClick.y;

                // Move label to new position
                int newX = thisX + xMoved;
                int newY = thisY + yMoved;
                imageLabel.setLocation(newX, newY);
            }
        });

        add(imageLabel);
        setVisible(true);
    }

    public static void main(String[] args) {
        new DragDropImage();
    }
}
