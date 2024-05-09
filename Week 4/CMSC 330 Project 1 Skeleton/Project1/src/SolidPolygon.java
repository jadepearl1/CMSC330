/* Jade Pearl
 * Date Created: 9/6/2023
 * Date Modified: 9/7/2023
 * Project 1
 * The SolidPolygon class is a subclass of Polygon that takes a color and vertex count as arguments in its
 * constructor. It also draws polygons by filling in the drawn polygon, making the finished shape filled with color
 * rather than be a hollow shape with a colored outline like in HollowPolygon
 */

import java.awt.*;

class SolidPolygon extends Polygon_ {

    // Constructor that calls super constructor

    public SolidPolygon(Color color, int vertexCount) {
        super(color, vertexCount);
    }

    // Draws solid polygon
    @Override
    public void drawPolygon(Graphics graphics, Polygon polygon) {
        graphics.fillPolygon(polygon);
    }
}
