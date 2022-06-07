
public class Counter {
    private int actual;
    private int lower;
    private int upper;

    public Counter(int actual, int lower, int upper) {  // Konstruktor
        this.actual = actual;
        this.lower = lower;
        this.upper = upper;
    }
    
    public Counter() {  // Konstruktor
    }

    public void setActual(int actual) {
        if (lower <= actual && actual <= upper)
            this.actual = actual;
    }

    public int getActual() {
        return actual;
    }

    public int getLower() {
        return lower;
    }

    public int getUpper() {
        return upper;
    }

    public void increment(int actual) {
        this.actual+=1;
        if (this.actual == upper) {
            this.actual = 1;
        }
    }
    
}