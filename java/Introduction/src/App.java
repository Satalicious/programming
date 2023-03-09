

public class App {
    public static void main(String[] args) throws Exception {
        System.out.println("Hello, World!");
        Counter cnt = new Counter(1,1,11);
        //Counter other = new Counter();
        //cnt.setActual(4);
        System.out.println("cnt.actual: " + cnt.getActual());
        System.out.println("cnt.toString(): " + cnt.toString());

        for (int i = 0; i < 25; i++) {
            System.out.println("cnt.actual: " + cnt.getActual());
            cnt.increment(1);
        }
    }
}
