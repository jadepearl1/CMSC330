/* Jade Pearl
 * Date Created: 9/6/2023
 * Date Modified: 9/10/2023
 * Project 1
 * This Parallelogram class is a subclass of SolidPolygon that takes the color, upper left and lower right
 * points, and offset from a file. It then creates coordinates to then create the polygon.
 */

import java.awt.*;

class Parallelogram extends SolidPolygon {
    public Parallelogram(Color color, Point upperLeft, Point lowerRight, int xOffset) {
        super(color, 4);
        int[] x_points = {upperLeft.x, lowerRight.x + xOffset, lowerRight.x, upperLeft.x - xOffset};
        int[] y_points = {upperLeft.y, upperLeft.y, lowerRight.y, lowerRight.y};
        createPolygon(x_points, y_points);
    }
}
