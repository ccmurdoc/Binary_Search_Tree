    //Binary Search Tree Program

#include <iostream>
#include <cstdlib>
#include <queue>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include <BinarySearchTree.h>

using namespace std;


int main()
{
    BinarySearchTree b;
    int ch,tmp,tmp1,a,bb,node;
    int sum=0;
    srand(time(NULL));

    tmp=1;
    cout<<"How Many Nodes ?"<<endl;
    cin>>node;
    cout<<"--------------------------------------"<<endl;
    for(int cont=0; cont<node;cont++)
            {
                cout<<"\n";

                cout<<"Node"<<endl;
                    for(int cont = 0; cont<tmp;cont++)
                        {
                            a  = rand() % 20;
                            bb = rand() % 20;
                            b.insert(a,bb);
                            cout<<bb<<" "<<a<<endl;
                            i++;
                        }
                             for(int cow = 0; cow<tmp;cow++)
                            {
                                sum+=a;
                            }


                    }
    cout<<endl;
    cout<<"--------------------------------------"<<endl;
    cout<<"Printing Tree A Values "<<endl;
    b.print_postorder();


    cout<<"\n-------------------------------------"<<endl;
    cout<<"Total Sum of B Elements "<<endl;
    cout<<sum;

    cout<<endl;



}
