#include <bits/stdc++.h>
using namespace std;
// The interface is implemented by many other
// subclasses that allow for many types of flying
// without effecting Animal, or Flyimg.

// Classes that implement new Flys interface
// subclasses can allow other classes to use
// that code eliminating code duplication

// I'm decoupling : encapsulating the concept that varies
class Flying
{
public:
    virtual string fly() = 0;
};
class CanFly : public Flying
{
public:
    string fly()
    {
        return "can fly";
    }
};
class CantFly : public Flying
{
public:
    string fly()
    {
        return "can't fly";
    }
};
class Animal
{
public:
    // Instead of using an interface in a traditional way
    // we use an instance variable that is a subclass
    // of the Flys interface.

    // Animal doesn't care what flyingType does, it just
    // knows the behavior is available to its subclasses

    // This is known as Composition : Instead of inheriting
    // an ability through inheritance the class is composed
    // with Objects with the right ability

    // Composition allows you to change the capabilities of
    // objects at run time!
    Flying *flyType;
    /* BAD
	* You don't want to add methods to the super class.
	* You need to separate what is different between subclasses
	* and the super class
	public void fly(){
		
		cout<<"I'm flying";
		
	}
	*/
    // Animal pushes off the responsibility for flying to flyingType
    string tryToFly()
    {

        return flyType->fly();
    }

    // If you want to be able to change the flyingType dynamically
    // add the following method
    void setFlyingAbility(Flying *newFlyType)
    {
        flyType = newFlyType;
    }
};
class Dog : public Animal
{
public:
    // We set the Flying interface polymorphically
    // This sets the behavior as a non-flying Animal
    Dog()
    {
        flyType = new CantFly();
    }
    /* BAD
	* You could override the fly method, but we are breaking
	* the rule that we need to abstract what is different to 
	* the subclasses
	* 
	public void fly(){
		
		cout<<"I can't fly";
		
	}
	*/
};
class Birds : public Animal
{
public:
    Birds()
    {
        flyType = new CanFly();
    }
};

int main()
{
    Dog *d = new Dog();
    Birds *b = new Birds();
    cout << "Dog " << d->tryToFly();
    cout << "\n";
    cout << "Birds " << b->tryToFly();
    d->setFlyingAbility(new CanFly);
    cout << "\n";
    cout << "Dog " << d->tryToFly();
    return 0;
}