/* Jade Pearl
 * Date Created: 9/6/2023
 * Date Modified: 9/12/2023
 * Project 1
 * The Text class is a subclass to Image that takes a color, location point, and string as arguments in its
 * constructor. It has a draw method draws the text using a graphics object, allowing a colored text to be placed
 * in a specified location
 */

import java.awt.*;

class Text extends Image {
    private Point location;
    private String text;

    // Constructor that initializes the text color, location, and text content
    public Text(Color color, Point location, String text) {
        super(color);
        this.location = location;
        this.text = text;
    }

    // Draws the text using the Graphics object
    @Override
    public void draw(Graphics graphics) {
        colorDrawing(graphics); // Set the text color
        graphics.drawString(text, location.x, location.y); // Draw the text at the specified location
    }
}