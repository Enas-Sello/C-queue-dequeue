#include <iostream>

using namespace std;
#define size 4
class queue{
int queue[size];
int front = -1 , rear =-1 ;

public:
//chick if it's empty or not
        bool isEmpty(){
        if (front ==-1 && rear==-1)
            {return true;}

        else {return false;
        }}
        // 3 cond
        bool isFull(){
        if (front == 0 && rear == size - 1)
        {return true ;}
        else if (rear == front -1 || front == rear +1 ){
            return true;
        }
        //it's not full
        else {
            return false;
        }
        }
        //enqueue
        void enqueue(int value){

        if (isFull()) {
            cout << "it's full" <<endl;
        }
        else{
            //rear = front =-1 befor indx 0
                if (isEmpty()){
                   front = rear =  0;
                    queue[rear]= value;
                }
                //rear == size - 1 reach last indx but que not full
                else if (rear == size - 1){
                    rear = 0 ;
                    queue[rear]= value;
                }
               else rear ++ ;
                queue[rear]= value;
        }
        }

        //dequeue
        dequeue(){
            //chck if it's allrdy empty
            if (isEmpty()) {
                cout << "isEmpty" <<endl;
            }
        else{
            // 3 cond
            if (front == rear){
                    //delet last indx make rear and front -1 =empty
                front =rear =-1;
            }
            else if(front == size -1){
                //feond is last indx , back to 0 indx
                front =0;
            }
            else{
                front ++;
            }
        }
         }
        //peek
         int peek (){//check empty so i don't return noting
        if (isEmpty()){
            cout << "empty F peek " <<endl;
            return -1 ;
        }
        //not empty
        else return queue [front];
         }
        void display (){////chek if empty
        if (isEmpty()){
            cout << "empty F display " <<endl;}
            else {
                {

                    if (front <= rear ){
                        for (int i = front ; i<=rear; i++)
                            cout << queue[i]<< "\t";
                    }
                    else{
                        for (int i = front ; i<size; i++)
                            cout << queue[i]<< "\t";

                        for (int i = 0 ; i<=rear; i++)
                            cout << queue[i]<< "\t";}
                            }
                                }
                                    }
        };

int main()

{
    queue q;
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.display();
    q.enqueue(8);

    q.dequeue();
    q.display();

    q.enqueue(8);
    q.display();
    cout << "peek" << q.peek();
    return 0;
}

