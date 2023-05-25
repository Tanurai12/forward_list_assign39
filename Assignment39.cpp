//1. Write a c++ code, to demonstrate the forward list.
/*#include<iostream>
#include<forward_list>
#include<iterator>
using namespace std;
int main()
{
    forward_list<int> fl={1,2,3,4,3,7,5,6,8,2};
    fl.before_begin();
    cout<<"front :"<<fl.front()<<endl;
    cout<<"max size :"<<fl.max_size()<<endl;
    forward_list <int>::iterator it;

    fl.reverse();
    for(it=fl.begin();it!=fl.end();it++)
    cout<<*it<<"  ";
    cout<<endl;
    fl.sort();
    for(it=fl.begin();it!=fl.end();it++)
    cout<<*it<<"  ";
 cout<<endl;
    fl.pop_front();
    for(it=fl.begin();it!=fl.end();it++)
    cout<<*it<<"  ";
 cout<<endl;
    fl.push_front(100);
    for(it=fl.begin();it!=fl.end();it++)
    cout<<*it<<"  ";
 cout<<endl;
    fl.unique();

    for(it=fl.begin();it!=fl.end();it++)
    cout<<*it<<"  ";
 cout<<endl;
    
    return 0;
}*/

//2. Write a c++ code, in which create a forward list and assign values to it at the time of initialization and print it on the console screen.
/*#include<iostream>
#include<forward_list>
#include<iterator>
using namespace std;
int main()
{
    forward_list<int> f1;
    forward_list<int> f2;
    f1.assign({1,2,3,4,5});
    f2.assign(5,10);
    
    cout<<"the element of f1 is: "<<endl;
    for(int x: f1)
    cout<<x<<" ";

    cout<<endl;


    cout<<"the element of f2 is: "<<endl;
    for(int x: f2)
    cout<<x<<" ";
 
    return 0;
}*/

//3. Create a forward list insert elements from 1 to 10 and find the sum of elements.
/*#include<iostream>
#include<forward_list>
#include<iterator>
using namespace std;
int main()
{
    
    
    forward_list<int> f1;
    f1.assign({1,2,3,4,5,6,7,8,9,10});
    int sum=0;
    while(!f1.empty())
    {
           sum=sum+f1.front();
           f1.pop_front();

    }

    cout<<"sum is :"<<sum<<endl;
   
    return 0;
}*/

//4. Write a program to reverse forward list elements.
/*#include<iostream>
#include<forward_list>
#include<iterator>
using namespace std;
int main()
{
    
    
     forward_list<int> f1;
     f1.assign({1,2,3,4,5,6,7,8,9,10});

     cout<<"list element is :"<<endl;
     forward_list <int>::iterator it;
     for(it=f1.begin();it!=f1.end();it++)
     cout<<*it<<"  ";
     cout<<endl;


     f1.reverse();
     cout<<"after reverse list element is :"<<endl;
     for(it=f1.begin();it!=f1.end();it++)
     cout<<*it<<"  ";
     cout<<endl;
     return 0;
}*/

//5. Write a program remove all consecutive duplicate elements from the forward list
/*#include<iostream>
#include<forward_list>
#include<iterator>
using namespace std;
int main()
{
     forward_list<int> fl={1,1,2,3,3,4,4,7,5,6,6,8,8};
     cout<<"with duplicate list element"<<endl;
     forward_list <int>::iterator it;
     for(it=fl.begin();it!=fl.end();it++)
     cout<<*it<<"  ";
     cout<<endl;
    
     fl.unique();
     cout<<"without dupliacte list element"<<endl;
     for(it=fl.begin();it!=fl.end();it++)
     cout<<*it<<"  ";
     cout<<endl;
    
     return 0;
}  */

//6. Create two forward lists of int type, and merge them.
/*#include<iostream>
#include<forward_list>
#include<iterator>
using namespace std;
int main()
{
    forward_list<int> f1;
    forward_list<int> f2;
    f1.assign({1,2,3,4,5});
    cout<<"element of f1"<<endl;
    for(int x:f1)
    cout<<x<<" ";
    cout<<endl;
    f2.assign({6,7,8,9,10});
     cout<<"element of f2"<<endl;
    for(int x:f2)
    cout<<x<<" ";
    cout<<endl;
    f1.merge(f2);
    cout<<"after merge"<<endl;
     forward_list <int>::iterator it;
     for(it=f1.begin();it!=f1.end();it++)
     cout<<*it<<"  ";
     cout<<endl;
    return 0;
} */

//7. Below are two forward lists, first sort them and then merge them.
//forwardlist1={3,2,9}
//forwardlist2={8,1,2}
/*#include<iostream>
#include<forward_list>
#include<iterator>
using namespace std;
int main()
{
    
    
       forward_list<int> f1={3,2,9};
       forward_list<int> f2={8,1,2};

       f1.sort();
       f2.sort();

       f1.merge(f2);
       cout<<"after merge"<<endl;
       forward_list <int>::iterator it;
       for(it=f1.begin();it!=f1.end();it++)
       cout<<*it<<"  ";
       cout<<endl;
       return 0;
} */

//8. Create two forward lists of int type, and swap the elements of both forward lists with each other.
/*#include<iostream>
#include<forward_list>
#include<iterator>
using namespace std;
int main()
{
    
    
       forward_list<int> f1={1,2,3,4,5};
       forward_list<int> f2={2,4,6,8,10};
       
       
       forward_list <int>::iterator it;
       cout<<"before swap f1 is:"<<endl;
       for(it=f1.begin();it!=f1.end();it++)
       cout<<*it<<"  ";
       cout<<endl;
       cout<<"before swap f2 is:"<<endl;
       for(it=f2.begin();it!=f2.end();it++)
       cout<<*it<<"  ";
       cout<<endl;

       f1.swap(f2);

       cout<<"after swap f1 is:"<<endl;
       for(it=f1.begin();it!=f1.end();it++)
       cout<<*it<<"  ";
       cout<<endl;
       cout<<"after swap f2 is:"<<endl;
       for(it=f2.begin();it!=f2.end();it++)
       cout<<*it<<"  ";
       cout<<endl;

       return 0;
}*/

//9. Write a C++ code to demonstrate working of splice_after() in forward list.
/*#include<iostream>
#include<forward_list>
#include<iterator>
using namespace std;
int main()
{
    
    
       forward_list<int> f1={10,20,30,40};
       forward_list<int> f2={2,1,2,1};
       
       
       forward_list <int>::const_iterator it=f2.begin();
       it++;
       f2.splice_after(it,f1,f1.before_begin(),f1.end());

       for(int x: f2)
       cout<<x<<" ";
       return 0;
}*/
//10. Write a program to assign values in forward_list using the values of another list
#include<iostream>
#include<forward_list>
#include<iterator>
using namespace std;
int main()
{
    
    
       forward_list<int> f1={10,20,30,40};
       forward_list<int> f2;
       
       
       f2.assign(f1.begin(),f1.end());
       cout<<"elements of f2 is"<<endl;
       for(int x: f2)
       cout<<x<<" ";
       return 0;
}
