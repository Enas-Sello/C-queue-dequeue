#include <iostream>

using namespace std;
class queue
{
   int queue[5];
   int front =-1 , rear = -1 ;
   public:
            //enqueue func
            void enqueue (int value){
            if (rear != 5 -1){
                    if (front == -1 && rear ==-1){
                    rear++;
                    front++;
                    queue [rear]= value;
                }
                 else {
                    queue[++rear]=value;
                 }
                }
                else{
                    cout<< "full "<<endl;}
                }
                     //dequeue
                void dequeue(){

                if (front !=-1 && rear != -1 && front <=rear){
                    front++;
                }
                else cout<< "empty "<< endl;
                }
                            //peak

            int peek (){
             if (front !=-1 && rear != -1 && front <=rear){
                    return queue[front];
                }
                else cout<< "empty "<< endl;
                return -1;
            }
            int display (){
            if (front !=-1 && rear != -1 && front <=rear){
               for (int i = front; i<=rear; i++){
                cout<< queue [i]<< "\t";
               }
               cout<<endl;
                }
                else cout<< "empty "<< endl;
            }

};

int main()
{
    queue q ;
            q.enqueue(1);
            q.display();
            q.enqueue(2);
            q.display();
            q.enqueue(3);
            q.display();
            q.dequeue();
            q.display();

        cout<< "peek =" <<q.peek()<<endl;
    return 0;
}
