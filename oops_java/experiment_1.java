class Student {
    private int rollNo;
    private String name;
    private int age;

    public Student() {
        this.rollNo = 0;
        this.name = "Unknown";
        this.age = 0;
    }

    public Student(int rollNo, String name, int age) {
        this.rollNo = rollNo;
        this.name = name;
        this.age = age;
    }

    public void display() {
        System.out.println("Roll No: " + rollNo);
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }

    public static void main(String[] args) {
        Student s1 = new Student();
        System.out.println("Student 1 details (default constructor):");
        s1.display();

        System.out.println();

        Student s2 = new Student(101, "Krish", 20);
        System.out.println("Student 2 details (parameterized constructor):");
        s2.display();
    }
}
