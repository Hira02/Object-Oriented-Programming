/*
In Factory pattern, we create object without exposing the creation logic to the client and refer to newly created object using a common interface.
*/
public class Main
{
 public static void main(String arg[]){
        ObjectCreator obj = new ObjectCreator();
        Shape shape1 = obj.create(1);
        Shape shape2 = obj.create(2);
        shape1.draw();
        shape2.draw();
    }
}
