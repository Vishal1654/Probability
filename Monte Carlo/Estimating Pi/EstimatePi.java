import java.util.Random;
import java.lang.Math;

public class EstimatePi {
    public static void main(String[] args){
        Random r = new Random(System.currentTimeMillis());
        r.setSeed(12);
        int num_points = 100000000;

        int inside_circle = 0;
        int inside_square = 0;

        int min = -1;
        int max = 1;

        for (int x = 0; x<num_points; x++){
            double new_x = min + (max-min)*r.nextDouble();
            double new_y = min + (max-min)*r.nextDouble();

            double val = Math.sqrt((Math.pow(new_x,2)) + Math.pow(new_y,2));
            if (val <=1){
                inside_circle ++;
            }
            inside_square++;
        }

        System.out.println(4*(double)inside_circle/inside_square);
    }
}