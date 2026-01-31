class Shape {
    public double area(double side) {
        return side * side;
    }

    public double area(double length, double breadth) {
        return length * breadth;
    }

    public double area(float radius) {
        return 3.14159f * radius * radius;
    }

    public static void main(String[] args) {
        Shape s = new Shape();

        System.out.println("Area of square: " + s.area(5.0));
        System.out.println("Area of rectangle: " + s.area(4.0, 6.0));
        System.out.println("Area of circle: " + s.area(3.0f));
    }
}
