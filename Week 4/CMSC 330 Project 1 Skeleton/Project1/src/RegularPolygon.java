/* Jade Pearl
 * Date Created: 9/6/2023
 * Date Modified: 9/12/2023
 * Project 1
 * RegularPolygon is a subclass of Solid polygon that takes the color, number of sides, center point, and radius
 * of a regular polygon from a file. The class then calls the createPolygon method to create a regular polygon
 */

import java.awt.*;
import java.lang.Math;

class RegularPolygon extends SolidPolygon {
    public RegularPolygon(Color color, int sides, Point center, int radius) {
        super(color, sides);
        int[] x_points = new int[sides];
        int[] y_points = new int[sides];

        for (int i = 0; i < sides; i++) {
            double angle = 2 * Math.PI * i / sides;
            x_points[i] = (int) (center.x + radius * Math.cos(angle));
            y_points[i] = (int) (center.y + radius * Math.sin(angle));
        }

        createPolygon(x_points, y_points);
    }
}
