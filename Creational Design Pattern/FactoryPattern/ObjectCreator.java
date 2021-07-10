 public class ObjectCreator{
    public Shape create(int val){
        if(val == 0)
            return null;
        if(val == 1)
            return new Square();
        if(val == 2)
            return new Rectangle();
        return null;
    }
}
