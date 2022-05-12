

public class App {
    public static void main(String[] args) throws Exception {
        System.out.println("Hello, World!");
        Counter cnt = new Counter();
        System.out.println("cnt.actual: " + cnt.actual);
        
        System.out.println("cnt.toString(): " + cnt.toString());
    }
}
