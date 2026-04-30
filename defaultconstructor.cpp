//default constructor and parameterised constructor



// #include<iostream>
// using namespace std;

// class Node
// {
//     string name;
//     int roll_no;

//     public:
//     Node()
//     {
//        cout<<"constructor called"<<endl;
//     }

//     Node(string s,int r)
//     {
//       name = s;
//       roll_no = r;
//     }
    
//     void display();

// };


// void Node :: display()
// {
//     cout<<"name of the student : "<<name<<endl;
//     cout<<"roll number of the student : "<<roll_no;
// }
// int main()
// {
//     Node obj1;
//     Node obj2("ashish",03);
//     obj2.display();
//     return 0;
// }


//copy consturctor



// #include<iostream>
// using namespace std;

// class Node
// {
//     int roll_no;
//     string name;
//     public:
//     Node(string s,int r)
//     {
//         name=s;
//         roll_no=r;
//     }
//     //copy constructor
//     Node(Node &temp)
//     {
//         name=temp.name;
//         roll_no=temp.roll_no;
//     }
//     void display();

// };

// void Node :: display()
// {
//     cout<<"name of the student : "<<name<<endl;
//     cout<<"roll number of the student : "<<roll_no<<endl;
// }

// int main()
// {
//     Node obj1("ankit",04);
//     obj1.display();
//     Node obj2 = obj1;
//     obj2.display();
//     return 0;
// }




// #include<iostream>
// using  namespace std;

// class Node
// {
//     string name;
//     int roll;
//     public:
//     Node(string name,int roll)
//     {
//       this->name=name;
//       this->roll=roll;
//     }

//     Node(Node &temp)
//     {
//         name=temp.name;
//         roll=temp.roll;
//     }
    
//     void display();
// };

// void Node :: display()
// {
//     cout<<"name of the student : "<<name<<endl;
//     cout<<"roll number of the student : "<<roll<<endl;
// }

// int main()
// {
//     Node obj1("rohit",03);
//     obj1.display();
//     Node obj2=obj1;
//     obj2.display();
//     return 0;
// }




//shallow copy constructor





// #include<iostream>
// using namespace std;

// class Node
// {
//     string name;
//     int roll;
//     int *p;
//     public:
//     Node(string s,int r)
//     {
//        name=s;
//        roll=r;
//        p=new int;
//        *p=10;
//     }

//     Node(Node &temp)
//     {
//         name=temp.name;
//         roll=temp.roll;
//         p=temp.p;
//     }
//     void display();
// };

// void Node:: display()
// {
//     cout<<"name of the student : "<<name<<endl;
//     cout<<"roll number of the student : "<<roll<<endl;
//     cout<<"value the point the pointer : "<<*p<<endl;
// }

// int main()
// {
//     Node obj1("Rohit",03);
//     obj1.display();
//     Node obj2=obj1;
//     obj2.display();
//     return 0;
// }



// #include<iostream>
// using namespace std;

// class Node
// {
//     string name;
//     int roll_no;
   
//     public:
//      int *p;
//     Node(string s,int r)
//     {
//         name = s;
//         roll_no = r;
//         p = new int ;
//         *p = 10;
//     }

//     //shallow copy
//     Node(Node &temp)
//     {
//         name =  temp.name;
//         roll_no = temp.roll_no;
//         p = temp.p;
//     }

//     void display();
// };

// void Node :: display()
// {
//     cout<<"name of the student : "<<name<<endl;
//     cout<<"roll no of the student : "<<roll_no<<endl;
//     cout<<"value to which pointer point  : "<<*p<<endl;
// }

// int main()
// {
//     Node obj1("ankit",04);
//     obj1.display();
//     Node obj2=obj1;
//     obj2.display();
//     *obj2.p=20;
  
//     obj1.display();

// }





//deep copy constructor





// #include<iostream>
// using namespace std;

// class Node
// {
//     string name;
//     int roll;
  

//     public:
//     int *p;
//     Node(string name,int roll,int value)
//     {
//         this->name=name;
//         this->roll=roll;
//         p=new int;
//         *p =  value;
//     }

//     //deep cpy constructor
//     Node(Node &temp)
//     {
//         name=temp.name;
//         roll=temp.roll;
//          p=new int;
//         *p=*(temp.p);
//     }
//     void display();
// };

// void Node :: display()
// {
//     cout<<"name of the student : "<<name<<endl;
//     cout<<"roll number of the student : "<<roll<<endl;
//     cout<<"value that pointer point's : "<<*p<<endl;
// }

// int main()
// {
//     Node obj1("rohit",10,4);
//     // obj1.display();
//     Node obj2=obj1;
//     // obj2.display();
//     *obj2.p=20;
//     obj1.display();
//     obj2.display();
//     return 0;
// }




// #include<iostream>
// using namespace std;

// class Node
// {
//     string name;
//     int roll_number;
//     public:
//     int *p;
//     Node(string name,int roll_number)
//     {
//         this->name = name;
//         this->roll_number = roll_number;
//         p = new int;
//         *p = 10;
//     }

//     Node(Node &temp)
//     {
//         name = temp.name;
//         roll_number = temp.roll_number;
//         p=new int;
//         *p=*(temp.p);
//     }

//     void display();

// };

// void Node :: display()
// {
//     cout<<"name of the student : "<<name<<endl;
//     cout<<"roll number of the student : "<<roll_number<<endl;
//     cout<<"value that a pointer points : "<<*p<<endl;
// }

// int main()
// {
//     Node obj1("ashish",03);
//     obj1.display();

//     Node obj2 = obj1;
//     obj2.display();

//     *obj2.p=20;

//     obj1.display();
// }







//static variable in class






// #include<iostream>
// using namespace std;

// class Node
// {

//     static int count;
//     public:
//     Node()
//     {
//         count++;
//         cout<<count;
//     }
  
// };

// int  Node :: count=0;
// int main()
// {
//     Node s1,s2,s3,s4;
//     return 0;
// }




// #include<iostream>
// using namespace std;

// class Node
// {
//   string name;
//   int roll;
//   static int collegeid;
//   public:
//   Node(string name,int roll)
//   {
//     this->name = name;
//     this->roll = roll;
//   }

//   void display();
// };

// int Node :: collegeid = 104;

// void Node :: display()
// {
//     cout<<"name of the student :"<<name<<endl;
//     cout<<"roll number of the student : "<<roll<<endl;
//     cout<<"college id : "<<collegeid;
// }

// int main()
// {
//     Node obj1("ashish",03);
//     obj1.display();
//     Node obj2("ashish",04);
//     obj2.display();
//     return 0;
// }






//operator overloading in class




// #include<iostream>
// using namespace std;

// class Node
// {
//     int a,b;
//     public:
//     Node(int a,int b)
//     {
//         this->a=a;
//         this->b=b;
//     }

//     void operator++();
//     void operator++(int);
//     void display();
// };

// void Node :: operator++()
// {
//     ++a;
// }

// void Node :: operator++(int)
// {
//     b++;
// }

// void Node :: display()
// {
//     cout<<"value of a : "<<a<<endl;
//     cout<<"value of b : "<<b<<endl;
// }

// int main()
// {
//     Node obj1(10,20);
//     obj1++;   //actual meaning=obj1.operator++(int);
//     ++obj1;   //actual meaning=obj1.operator++();
//     obj1.display();
//     return 0;

// }





 
// #include<iostream>
// using namespace std;
// class Node
// {
//     int a,b;
//     public:
//     Node(int a,int b)
//     {
//         this->a = a;
//         this->b = b;
//     }

//     Node operator++();
//     void display();
// };

// Node Node :: operator++()
// {
//     ++a;
//     ++b;
//     return *this;
// }
// void Node ::  display()
// {
//     cout<<a<<" "<<b<<endl;
// }

// int main()
// {
//     Node obj1(10,20);
//     Node obj2 = ++obj1;     //obj2=obj1.operator++();

//     obj1.display();
//     obj2.display();
//     return 0;

// }




//binary operator  overloading
//other binary operator same code only replace symbol


// #include<iostream>
// using namespace std;

// class Node
// {
//     int data;
//     public:
//     Node(int value)
//     {
//         data=value;
//     }
//     Node()
//     {

//     }

//     Node operator+(Node &k);
//     void display();
// };

// void Node:: display()
// {
//     cout<<data<<endl;
// }

// Node Node ::operator+(Node &k)
// {
//     Node temp;
//     temp.data=data+k.data;
//     return temp;
// }


// int main()
// {
//    Node obj1(20),obj2(30);
//    obj1.display();
//    obj2.display();
//    Node obj3=obj1+obj2;
//    obj3.display();
// }




// #include<iostream>
// using namespace std;

// class Node 
// {
//     int n;
//     public:
//     Node(int n)
//     {
//         this->n=n;
//     }
//     Node()
//     {

//     }

//     Node operator+(int x);
//     void display();
// };

// void Node  :: display()
// {
//     cout<<n<<endl;
// }

// Node Node :: operator+(int x)
// {
//     Node temp;
//     temp.n=n+x;
//     return temp;
// }

// int main()
// {
//     Node obj1(10);
//     obj1.display();
//     Node obj2=obj1+10;
//     obj2.display();
//     return 0;
// }




//string overloading in class



// #include<iostream>
// #include<cstring>
// using namespace std;

// class Node  
// {
//     char str[100];
//     public:
//     Node(const char str[])
//     {
//       strcpy(this->str,str);
//     }

//     Node()
//     {

//     }

//     Node operator+(Node &k);
//     void display();
// };


// void Node :: display()
// {
//     cout<<str<<endl;
// }

// Node Node :: operator+(Node &k)
// {
//    Node temp;
//    strcpy(temp.str,str);
//    strcat(temp.str,k.str);
//    return temp;
// }


// int main()
// {
//     Node obj1("hello");
//     Node obj2("world");
//     obj1.display();
//     obj2.display();
//     Node obj3;
//     obj3=obj1+obj2;
//     obj3.display();
// }



//Relation operator overloading

// #include<iostream>
// using namespace std;

// class Node 
// {
//     int n;
//     public:
//     Node(int n)
//     {
//         this->n=n;
//     }
//     bool operator>(Node &k)
//     {
//     return (n>k.n);
//     }
// };

// int main()
// {
//     Node obj1(4),obj2(2);
//     cout<<(obj1>obj2);     //actual meaning=obj1.operator>(obj2);
//     return 0;
    
// }



//friend function



// #include<iostream>
// using namespace std;

// class Student
// {
//     public:
//     void display();
//     friend void show();
// };

// void Student :: display()
// {
//     cout<<"this is the display"<<endl;
// }


// void show()
// {
//     cout<<"this is the show"<<endl;
// }

// int main()
// {
//     Student obj1;
//     obj1.display();   //calling member function
//     show();           //calling friend function
//     return 0;
// }



// #include<iostream>
// #include<cstring>
// using namespace std;

// class Node
// {
//     int rollno;
//     char str[100];
//     public:
//     Node(int rollno,const char str[])
//     {
//         this->rollno=rollno;
//         strcpy(this->str,str);
//     }
//     void display();
//     friend void show(Node s);
// };

// void Node :: display()
// {
//     cout<<"roll number of the student : "<<rollno<<endl;
//     cout<<"name of the student : "<<str<<endl;
// }

// void show(Node s)
// {
//     cout<<"this details are access by friend function "<<endl;
//     cout<<"roll number of the student  : "<<s.rollno<<endl;
//     cout<<"name of the student : "<<s.str<<endl;
// }


// int main()
// {
//     Node obj1(1,"Ashish");
//     obj1.display();
//     show(obj1);
//     return 0;
// }



//over riding
//same name with same parameter but in different class



//virtual function=redirect the method 
//over riding is not neccessay if you does make method in derived class as virtual function then it not throw any error





// #include<iostream>
// using namespace std;

// class Base 
// {
//   public:
//   virtual void display()
//   {
//     cout<<"display of the base class"<<endl;
//   }
// };

// class Derived : public Base
// {
// // //     public:
// //     void display()   //over riding
// //     {
// //         cout<<"display of the derived class";
// //     }
// };

// int main()
// {
//     Base *p;
//     Derived d;
//     p = &d;
//     p->display();
//     return 0;
// }




// pure virtual function=overriding neccessary means it is mendatory that derived same method as virtual function has.





// #include<iostream>
// using namespace std;

// class Button
// {
//     public:
//     virtual void click()=0;
// };
// class Color : public Button
// {
//    public:
//    void click()    //over riding
//    {
//     cout<<"color is red"<<endl;
//    } 
// };

// class Image : public Button
// {
//     public:
//     void click()   //over riding
//     {
//         cout<<"my image"<<endl;
//     }
// };

// int main()
// {
//     Button *p;
//     Color c;
//     p = &c;
//     p->click();
//     Image i;
//     p = &i;
//     p->click();
// }



//Aggregation=  Aggregation is a relationship between two classes where one class contains a reference or pointer to another class, and both can exist independently.

#include<iostream>
using namespace std;

class Engine
{
public:
    void show()
    {
        cout << "Engine is working" << endl;
    }
};

class Car
{
public:
    Engine *e;   // Aggregation

    Car(Engine *eng)
    {
        e = eng;
    }

    void display()
    {
        cout << "Car has an engine" << endl;
        e->show();
    }
};

int main()
{
    Engine e1;        // Independent object
    Car c1(&e1);      // Car uses Engine

    c1.display();

    return 0;
}



//to open file there are two  method
//1.constructor
//2.open method



//1.constuctor 
//steps - file creation , read/write/append ,close
// #include<iostream>  
// #include<fstream>
// using namespace std;

// int main()
// {
//     //create and open file ofstream
//     fstream fout("zero.txt",ios::out);  //for write

//     //write data into file
//     fout<<"Amit is a very clever boy by only  in the perspective of the study on behalf of the respect to give to everyone by amit";
//     //close file
//     fout.close();
//     cout<<"file created successfully";
//     return 0;
// }


// #include<iostream>
// #include<fstream>
// using namespace std;

// int main()
// {
//     string name;
//     fstream fout("zero.txt",ios::app); ///append mode
//     cout<<"enter name : ";
//     cin>>name;

//     fout<<name;

//     fout.close();
//     cout<<"data appended successfull";
// }


// for read

// #include<iostream>
// #include<fstream>
// using namespace std;

// int main()
// {
//    char name[50];
//    fstream fin("zero.txt",ios::in);

//    fin>>name;
//    cout<<name;
//    while(fin>>name) //read word by word
//    {
//     cout<<name<<" ";
//    }

//    fin.close();
//    return 0;
// }



//open method

// #include<iostream>
// #include<fstream>
// using namespace std;
// int main()
// {
//     fstream fout;
//     //open first file and write data
//     fout.open("zero.txt",ios::out);   //write
//     fout<<"vishal mishra";
//     fout.close();


//     //open second file and write data
//     fout.open("zer0.txt",ios::out);
//     fout<<"B.tech";
//     fout.close();
//     cout<<"file created and data written successfully";
//     return 0;
// }



// #include<iostream>
// #include<fstream>
// using namespace std;

// int main()
// {
//     fstream fin;
//     string data;
//     //open first file and read it
//     fin.open("zero.txt",ios::in);
//     cout<<"\nzero.txt\n";
//     while(fin>>data)
//     {
//         cout<<data<<" ";
//     }



//     //open  second file for reading
//     fin.open("student.txt",ios::in);
//     cout<<"\nstudent.txt\n";
//     while(fin>>data)
//     {
//         cout<<data<<" ";
//     }

//     fin.close();

//     return 0;
// }







