//1. Classes and Objects
class Person {
public:
    // Attributes
    string name;
    int age;

    // Constructor
    Person(const string& n, int a) : name(n), age(a) {
        cout << "Person Constructor: " << name << endl;
    }

    // Destructor
    ~Person() {
        cout << "Person Destructor: " << name << endl;
    }

    // Member function
    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    // Getter and setter functions for encapsulation
    void setName(const string& newName) {
        name = newName;
    }

    string getName() const {
        return name;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    int getAge() const {
        return age;
    }
};

int main() {
    // Creating a Person object
    Person person("John Doe", 25);

    // Displaying information using the object
    person.display();

    // Destructor will be automatically called when the object goes out of scope
    return 0;
}
