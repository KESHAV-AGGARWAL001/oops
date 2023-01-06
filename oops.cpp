// #include <bits/stdc++.h>
// using namespace std;

// class Employee
// {
// private:
//     int a, b, c;

// public:
//     int d, e;
//     void setdata(int a1, int b1, int c1);
//     void getdata()
//     {
//         cout << "the value of a is " << a << endl;
//         cout << "the value of b is " << b << endl;
//         cout << "the value of c is " << c << endl;
//         cout << "the value of d is " << d << endl;
//         cout << "the value of e is " << e << endl;
//     }
// };

// void Employee ::setdata(int a1, int b1, int c1)
// {
//     a = a1;
//     b = b1;
//     c = c1;
// }

//  in this way we can access the private things

// int main()
// {
//     Employee mathandphysics;
//     mathandphysics.d = 40;
//     mathandphysics.e = 45;
//     mathandphysics.setdata(1, 2, 3);
//     mathandphysics.getdata();
//     return 0;
// }

// --------------------------------------------------------------------------------------

// #include <bits/stdc++.h>
// using namespace std;

// class shop
// {
//     int itemprice[100];
//     int itemId[100];
//     int counter = 0;

// public:
//     void initcounter() { counter = 0; }
//     void getdata(void);
//     void setprice(void);
// };

// void shop ::getdata(void)
// {
//     for (int i = 0; i < counter; i++)
//     {
//         cout << "the price of your " << i + 1 << "item is :" << itemprice[i] << " and the id is :" << itemId[i];
//     }
// }

// void shop ::setprice(void)
// {
//     cout << "enter the id of the item no. :" << counter + 1 << endl;
//     cin >> itemId[counter];
//     cout << "enter the price of the item :" << counter + 1 << endl;
//     cin >> itemprice[counter];
//     counter++;
// }

// int main()
// {
//     shop genralstore;
//     genralstore.initcounter();
//     genralstore.setprice();
//     genralstore.setprice();
//     genralstore.setprice();
//     genralstore.getdata();
//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------//

// static variables are needed to be define outside the class column
// #include <bits/stdc++.h>
// using namespace std;

// class employee
// {
//     int gmailIdnumber ;
//     int number ;
//     static int count ;
// it is by default 0 and this is not a particular stable value which is same for all objects (we are making under this class) ;
// public:
//     void getdata(void);
//     void setdata(void);
//     static void getcount (void);
// };

// int employee::count;

// // we can change the value of count here otherwise it's default value is 0
// void employee:: getdata(void){
//     cout<<"Enter the value of gmailidnumber of employee number:"<<count+1<<"is " <<endl;
//     cin>>gmailIdnumber;
//     count++;
// }
// void employee :: getcount(void){
//     cout<<"The value of count is :"<< count <<endl;
// }
// void employee::setdata(void){
//     cout<<"The value of gmailid number is :"<<gmailIdnumber<<endl;
// }

// int main()
// {
//     employee harsh , vivek , aradhya ;
//     harsh.getdata();
//     harsh.setdata();
//     employee :: getcount(); // writing syntax of any static void function

//     vivek.getdata();
//     vivek.setdata();
//     employee :: getcount();

//     aradhya.getdata();
//     aradhya.setdata();
//     employee :: getcount();
//     /* cout<<harsh.count;
//     this won't work as the number count is private so ..... we can't access it very simply */
//     system("pause>0");
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------

// #include <bits/stdc++.h>
// using namespace std;

// class complexi
// {
// private:
//     int a;
//     int b;

// public:
//     void setdata(int v, int u)
//     {
//         a = v;
//         b = u;
//     }
//     void setdatabysum(complexi o1, complexi o2)
//     {
//         a = o1.a + o2.a;
//         b = o1.b + o2.b;
//     }
//     void printnumber()
//     {
//         cout << "Your complex number is " << a << "+" << b << "i" << endl;
//     }
// };

// int main()
// {

//     complexi c1, c2 , c3;
//     c1.setdata(2, 4);
//     c1.printnumber();

//     c2.setdata(4, 7);
//     c2.printnumber();

//     c3.setdatabysum(c1, c2);
//     c3.printnumber();
//     return 0;
// }

// ----------------------------------------------------------------------------------------------------//

// friends classes
// #include <bits/stdc++.h>
// using namespace std;
// class Complex
// {
//     int a, b;

// public:
//     void setdata(int v, int u)
//     {
//         a = v, b = u;
//     }
//     friend Complex sumcomplex(Complex d , Complex e);
//     this friend classes code is providing us the openness to use the private data which we are writing in the private section
// void printnumber(void)
// {
//     cout << "The complex number is :" << a << " + " << b << "i" << endl;
// }
// };

// the below complex (sumcomplex ) is a function which we can use to get a type of complex class object nd use it further
// Complex sumcomplex(Complex d, Complex e)
// {
//     Complex f;
//     f.setdata(d.a + e.a, d.b + e.b);  // here how can we access the private data in this code , so this can be made errorless by using friend classes
//     return f;
// }

// int main()
// {
//     Complex a1, b1 , c1;
//     a1.setdata(2, 4);
//     a1.printnumber();
//     b1.setdata(5, 8);
//     b1.printnumber();
//     c1 = sumcomplex(a1,b1);
//     c1.printnumber();
//     return 0;
// }

// ----------------------------------------------------------------------------------------
// #include <bits/stdc++.h>
// using namespace std;
// // prdefination of complex class otherwise it will throw an error
// class Complex;

// // /class calculator is defined here
// class Calculator
// {
//     int a, b;

// public:
//     void setdata(int n1, int n2)
//     {
//         a = n1, b = n2;
//     }
//     int sum(int n1 , int n2)
//     {
//         return n1+n2;
//     }
//     int sumofreal(Complex, Complex);
//     int sumofimaginary(Complex, Complex);
// };
// // class complex is defined here
// class Complex
// {
//     int a, b;

// public:

// // individually declaration of friends
//     // friend int Calculator::sumofreal(Complex, Complex);
//     // friend int Calculator::sumofimaginary(Complex, Complex);

//     // now declaring the whole class as your friend
//      friend class Calculator;
//      void setdata(int n1, int n2)
//     {
//         a = n1, b = n2;
//     }
//     void printnumber(void)
//     {
//         cout << "The complex number is :" << a << " + " << b << "i" << endl;
//     }
// };

// int Calculator ::sumofreal(Complex o1, Complex o2)
// {
//     return o1.a + o2.a;
// }
// int Calculator ::sumofimaginary(Complex o1, Complex o2)
// {
//     return o1.b + o2.b;
// }
// int main()
// {
//     Complex o1;
//     Complex o2;
//     o1.setdata(23, 56);
//     o2.setdata(32, 43);
//     o1.printnumber();
//     o2.printnumber();
//     Calculator fastway;
//     fastway.setdata(34, 67);
//     cout<<"the sum of fastway calculator is :"<<fastway.sum(34,67)<<endl;
//     cout << "The complex number  is " << fastway.sumofreal(o1, o2) << "+" << fastway.sumofimaginary(o1, o2) << "i" << endl;

//     return 0;
// }

//---------------------------------------------------------------------------------------------------------------------------------------------------------------
// In this program we are making a function using both classes objects and accessing the private data of both class
// #include <bits/stdc++.h>
// using namespace std;
// class second;
// class first
// {
// private:
//     int data;

// public:
//     void setdata(int number)
//     {
//         data = number;
//     }
//     friend int add(first, second);
// };

// class second
// {
// private:
//     int num;

// public:
//     void setdata(int number)
//     {
//         num = number;
//     }
//     friend int add(first, second);
// };

// int add(first a, second b)
// {
//     cout << "the value of sm of first and second is " << a.data + b.num << endl;
// }
// int main()
// {
//     first fir;
//     second sec;
//     fir.setdata(45);
//     sec.setdata(90);
//     cout<<add(fir,sec);
//     system("pause>0");
//     return 0;
// }
// ------------------------------------------------------------------------------------------------------------------
// this is a program in which we will exchange the value of private data of two different classes ;
// #include <bits/stdc++.h>
// using namespace std;
// class second;
// class first
// {
//     int data;

// public:
//     void setdata(int x)
//     {
//         data = x;
//     }
//     friend void exchangenumbers();
//     friend void exchangenumbers(first &, second &);
//     void display(void)
//     {
//         cout << data << endl;
//     }
// };
// class second
// {
//     int num;

// public:
//     void setdata(int x)
//     {
//         num = x;
//     }
//     friend class first;
//     // we can either use it or not(below)
//     friend void exchangenumbers(first &, second &);
//     void display(void)
//     {
//         cout << num << endl;
//     }
// };

// void exchangenumbers(first &a, second &b)
// {
//     int temp = a.data;
//     a.data = b.num;
//     b.num = temp;
// }
// int main()
// {
//     first fir;
//     second sec;
//     fir.setdata(34);
//     sec.setdata(78);
//     exchangenumbers(fir, sec);
//     fir.display();
//     sec.display();
//     return 0;
// }

// constructors in cpp
// #include <bits/stdc++.h>
// using namespace std;
// class first
// {
// int  a;
// public:
//     first(void );
//     void displaynumber(void){
//         cout<<"the value of a is "<<a<<endl;
//     }
// };
// first::first(void ){
//     a = 10 ;
// }

// int main()
// {
//     first fire ;
//     fire.displaynumber();
//     return 0;
// }

// --------------------------------------------------------------------------------------------------------//

// #include <bits/stdc++.h>
// using namespace std;
// class first
// {
//     int a, b;

// public:
// //  this is a parametrized constructors
//     first(int c, int d)
//     {
//         a = c;
//         b = d;
//     }
//     void displaynumber(void)
//     {
//         cout << "the value of complex is " << a << "+" << b << "i" << endl;
//     }
// };
// // void first::first(int c, int d)
// // {
// //     a = c;
// //     b = d;
// // }

// int main()
// {
//     first fire = first(32,45);
//     fire.displaynumber();
//     return 0;
// }

// I am making a fuction which tells us the distance between two points of different objects

// #include <bits/stdc++.h>
// using namespace std;
// class distinctposition
// {
//     int a, b;
//     friend int distancebetweenpoints(distinctposition , distinctposition );
// public:
//     distinctposition(int x, int y)
//     {
//         a = x, b = y;
//     }
//     void displayposition(void)
//     {
//         cout << "The value of x coordinate is :" << a << "  and the y-coordinate is :" << b << endl;
//     }
//     int distancebetweenpoints(distinctposition o1, distinctposition o2);
// };

// int distinctposition::distancebetweenpoints(distinctposition p, distinctposition q)
// {
//     return sqrt(pow(q.a - p.a, 2) + pow(q.b - p.b, 2));
// }
// int main()
// {
//     distinctposition first(20, 30);
//     distinctposition second(10, 20);
//     first.displayposition();
//     second.displayposition();
//     cout<<distancebetweenpoints(first, second);
//     return 0;
// }.

// ---------------------------------------------------
// #include <bits/stdc++.h>
// using namespace std;
// class Complex
// {
// // private:
//     int a, b;

// public:
//     Complex()
//     {
//         a = 0, b = 0;
//     }
//     Complex(int x, int y)
//     {
//         a = x, b = y;
//     }
//     Complex(int x)
//     {
//         a = x, b = 0;
//     }
//     void displaynumber()
//     {
//         cout << "The complex number is :" << a << "+" << b << "i" << endl;
//     }
// };

// int main()
// {
//     Complex cs(54, 79);
//     Complex ps(89);
//     Complex gs;
//     cs.displaynumber();
//     ps.displaynumber();
//     gs.displaynumber();
//     return 0;
// }

//

// when a constructor is copied then the syntax should be
// suppose there is a class named Nature and we are making a constructor containing two parameters and if we are going to make it's copy then we can make a function also giving a reference to a object of that class or we can invoke a object itself
//  like this :- )
// Nature z = x;
// or making a function like :-)
// Nature (Nature &obj){
// jo commands deni hai de skte hai
// }

// but ek syntax wrong hota hai agar apn function bhi na banaye and likh rhe hai ki
// Nature z1;
// Nature z1(z);
// here copy constructor will not be invoked as we predefined the object z1 ,
// we can write in this manner :-) Nature z1 = z;

//  -------------------------------code for multiple inheritance ------------------------------------//

// #include <bits/stdc++.h>
// using namespace std;
// class student
// {
// protected:
//     int roll_number;

// public:
//     void get_roll_number();
//     void set_roll_number(int);
// };

// void student::get_roll_number(void)
// {
//     cout << "The roll number of student is :-) " << roll_number << endl;
// }
// void student::set_roll_number(int marks)
// {
//     roll_number = marks;
// }

// class marksinsubj : public student
// {
// protected:
//     float maths;
//     float physics;

// public:
//     void set_numbers(float, float);
//     void get_numbers(void);
// };

// void marksinsubj::get_numbers()
// {
//     cout << "The marks in maths is :-) " << maths << " and the marks in physics is " << physics << endl;
// }

// void marksinsubj::set_numbers(float m, float p)
// {
//     maths = m, physics = p;
// }

// class resultis : public marksinsubj
// {
// protected:
//     float marks;

// public:
//     void get_result()
//     {
//         cout << "The result of the student is :-) " << marks << "%" << endl;
//     }
//     void set_result(int,int);
// };

// void resultis :: set_result(int n , int p){
//     marks = (p+n)/2;
// }
// int main()
// {
//     marksinsubj mathandphysics;
//     int mathsmarks, physicsmarks;
//     cout << "Enter the marks in maths :-) ";
//     cin >> mathsmarks;
//     cout << "Enter the marks in physics :-) ";
//     cin >> physicsmarks;
//     mathandphysics.set_numbers(mathsmarks, physicsmarks);
//     mathandphysics.set_roll_number(4);
//     mathandphysics.get_numbers();
//     mathandphysics.get_roll_number();

//     resultis extra;
//     extra.set_result(physicsmarks, mathsmarks);
//     extra.get_result();
//     return 0;
// }

// /------------------ambiguity in classes ---------------------------------------//

//  suppose if we are creating a fucntion in both calssa nd we are making a deriveed class using those classes containig same classes then there will be an ambiguity in this , what compiler will do if we are calling that function in the derived class  :-)

//  the example will be like this
// #include <bits/stdc++.h>
// using namespace std;

// class base1
// {
// public:
//     void greet()
//     {
//         cout << "Hello , how are you ?" << endl;
//     }
// };
// class base2
// {
// public:
//     void greet()
//     {
//         cout << "Hello , how are you ?" << endl;
//     }
// };

// //  time for derived class
// class derived : public base1, public base2
// {
//     int number;

// public:
// // method to solve the ambiguity in derived classes 😁😁
//     void greet()
//     {
//         base1::greet();
//     }
// };
// int main()
// {
//     derived derived1;
//     derived1.greet(); // now this thing is ambiguous , as here the compiler will be confused what it has to show in output .....

//     return 0;
// }

// -----------------------------------virtual base class _--------------------------//

// and a advanced concept that will help us a lot

// #include <bits/stdc++.h>
// using namespace std;
// class student
// {
// public:
//     student(int x)
//     {
//         cout << "Hey guys , the number 1 is " << x << endl;
//     }
// };

// class professor
// {
// public:
//     professor(int y)
//     {
//         cout << "Hey guys , the number 2 is " << y << endl;
//     }
// };
// //  the order of output can be changed here as if we are writing derived :public professor, virtual public student , so the order of output will be changed here
// class derived : virtual public student, public professor
// {
// public:
//     derived(int a, int b, int c) : student(a), professor(b)
//     {
//         cout << "The value of number 3 is " << c << endl;
//     }
// };

// int main()
// {
//     int num1, num2, num3;
//     cout << "The first , second and third number is :-) ";
//     cin >> num1 >> num2 >> num3;
//     derived displayfirst = derived(num1, num2, num3);
//     return 0;
// }

// ----------------------------initialization concept in classes constructor---------------//

// #include <bits/stdc++.h>
// using namespace std;

// class document
// {
// private:
//     int num1, num2;
// public:
//     // document(int i, int j) : num1(i), num2(j)
//     // document(int i, int j) : num1(i), num2(i+j)
//     // document(int i, int j) : num1(i+j), num2(j)
//     // document(int i, int j) : num1(i), num2(i*j)
//     // document(int i, int j) : num2(i), num1(j+num2) // this will through a garbage value of num1 as it's value is initialized first , so it will ........
//     {
//         cout<<"The value of first number is :- ) "<<num1 <<" and the value of second number is :-) "<<num2<endl;
//     }
// };

// int main()
// {
//     int number1 , number2;
//     document first(int number1 , int number2);
//     return 0;
// }

// -------------------------------------concepts of pointers ------------------------------------//

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// int number  = 56;
// int *ptr = &number;
// cout<<"The address of this continguous block is :-) "<<ptr<<endl;
// cout<<"The value at this block is :-) "<<*(ptr)<<endl;

// new keyword
// int* ptr = new int(54);
// cout<<"The value of this number is "<<*(ptr)<<endl;

// now we are making an array using keyword "new" 😁😁
// int *arr = new int[4];
// arr[0] = 45;
// arr[1] = 41; // ------------>>>  I can write it as *(arr+1) = 41; , it will also work as same as the previous one
// arr[2] = 42;
// delete[] arr;
// // here I can delete this conguous memory of code and can get the garbage values in these positions
// cout << arr[0] << " " << arr[1] << " " << arr[2];

//     return 0;
// }

// --------------pointers in classes and objects ------------------------------------//

// #include <bits/stdc++.h>
// using namespace std;
// class Complex
// {
// private:
//     int real, imaginary;

// public:
//     void setdata(int a, int b)
//     {
//         real = a;
//         imaginary = b;
//     }
//     void getdata()
//     {
//         cout << "The real value of complex number is :-) " << real << " and the imaginary value of this complex is :-) " << imaginary << endl;
//     }
// };
// int main()
// {
// Complex ca;
// Complex *ptr = &ca;
//  we can make a ptr using new operator
// Complex *ptr = new Complex;
// // (*ptr).setdata(45, 56); this is as same as :
// ptr -> setdata(34, 56); // means ye pointer jis object ko point kr rha hota hai uska setdata nd getdata 😁
// // (*ptr).getdata();
// ptr -> getdata();

// Complex *ptr = new Complex[3];
// ptr->setdata(34,45);
// ptr->getdata();
// (ptr+1)->setdata(45, 67);
// (ptr+1)->getdata();
// (ptr+2)->setdata(78, 97);n
// (ptr+2)->getdata();
// (ptr+3)->setdata(89, 62);
// (ptr+3)->getdata();

// -------------extra gyaaaaan ---------------------//
// float *ptr = new float;
// *ptr = 78;
// cout << "the address of this ptr pointing value is " << ptr << endl;
// cout << "the value of this ptr pointing value is " << *ptr << endl;
//     return 0;
// }

// pointer of base class pointing to derived classes

// #include <bits/stdc++.h>
// using namespace std;

// class base_class
// {
// public:
//     int varofbase;
//     void display()
//     {
//         cout << "The value of variable of base class is :-) " << varofbase << endl;
//     }
// };
// class derived_class : public base_class
// {
// public:
//     int varofderived;
//     void display()
//     {
//         cout << "The value of variable of base class is :-) " << varofbase << endl;
//         cout << "The value of variable of derived class is :-) " << varofderived << endl;
//     }
// };

// int main()
// {
//     base_class student;
//     base_class *base_pointer;
//     derived_class professor;
//     base_pointer = &professor;
//     base_pointer->varofbase = 45;
//     // base_pointer->varofderived = 45; // this will through an error
//     base_pointer->display();

//     // now , I am making derived class pointer
//     derived_class *derived_pointer ;
//     derived_pointer = &professor;
//     derived_pointer->varofbase = 67;
//     derived_pointer->varofderived = 90;
//     derived_pointer->display();
//     // base_pointer->display(); // this code is showing that derived class pointer permanently changes the value of base class variable
//     return 0;
// }

// -----------------------------------------------------mast virtual function concept ----------------------------------------------------//
//  now we will see that how a base class pointer runs the functions of derived class
// virtual function
// #include <bits/stdc++.h>
// using namespace std;
// class base_class
// {
// public:
//     int varofbase;
//     virtual void display()
//     {
//         cout << "The value of variable of base class is :-) " << varofbase << endl;
//     }
// };
// class derived_class : public base_class
// {
// public:
//     int varofderived;
//     void display()
//     {
//         cout << "The value of variable of base class is :-) " << varofbase << endl;
//         cout << "The value of variable of derived class is :-) " << varofderived << endl;
//     }
// };
// int main()
// {

//     // here two pointer pointing to the same value i.e. derived_obj
//     base_class *base_class_pointer;
//     base_class obj_base;
//     derived_class derived_obj;
//     derived_class *derived_class_pointer;
//     derived_class_pointer = &derived_obj;
//     derived_class_pointer->varofderived = 78;
//     base_class_pointer = &derived_obj;
//     base_class_pointer->varofbase = 45;
//     // by using the virtual class concept , we can get the display function of derived class object
//     base_class_pointer->display();
//     return 0;
// }

// examle for virtual functions concept in polymorphism

// #include <bits/stdc++.h>
// using namespace std;

// // abstract base class is just made for the purpose that we can make some new classes and use it for our reason
// //  if we are making a virtual  function in the base class and we are going to make some new classes with same name in the derived class then and making the virtual function equals to zero , then we can call it as a pure virtual function in cpp language
// // abstract base class is the class that contain minimum one virtual function in that
// class CWH
// {
// protected:
//     string title;
//     float rating;

// public:
//     CWH(string s, float r)
//     {

//         // strcpy(title, s);
//         s = title;
//         rating = r;
//     }

//     virtual void display()
//     {
//     }
// };

// class CWHvideo : public CWH
// {
// protected:

//     int videolength;
// public:
//     CWHvideo(string s, float r, int vl) : CWH(s, r)
//     {
//         videolength = vl;
//     }

//     void display()
//     {
//         cout << "This is an amazing video with title " << title << endl;
//         cout << "Ratings : " << rating << "out of five stars" << endl;
//         cout << "Length of this video is :" << videolength << "minutes" << endl;
//     }
// };
// class CWHtext : public CWH
// {
// protected:
//     int words;

// public:
//     CWHtext(string s, float r, int wc) : CWH(s, r)
//     {
//         words = wc;
//     }

//     void display()
//     {
//         cout << "This is an amazing video with title " << title << endl;
//         cout << "Ratings : " << rating << "out of five stars" << endl;
//         cout << " the total number of words in this video is :" << words << " minutes" << endl;
//     }
// };

// int main()
// {
//     string title;
//     float rating, vlen;
//     int words;

//     // for any video tutorial
//     title = "Heyy this is Cpp tutorial";
//     vlen = 4.56;
//     rating = 4.9;
//     CWHvideo djvideo(title, rating, vlen);

//     //
//     title = "Heyy this is Cpp tutorial";
//     vlen = 4.56;
//     words = 1000;
//     CWHtext djtext(title, rating, words);

// // here i am taking it as a pointer and display the functions made in the class with the virtual function concept i have learnt
//     CWH * tuts[2];
//     tuts[0] = &djvideo;
//     tuts[1] = &djtext;

//     tuts[0]->display();
//     tuts[1]->display();
//     return 0;
// }