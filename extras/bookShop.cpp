#include<iostream>
#include<vector>
using namespace std;

class Book{
public:
    string title,author;
    int cost,stock;
    Book(string title, string author, int stock, int cost){
        this->title=title;
        this->author=author;
        this->stock=stock;
        this->cost=cost;
    }
    void showStat(){
        cout<<title<<" "<<author<<" stock: "<<stock<<" price: "<<cost<<endl;
    }

};

vector<Book>booklist;

int find_Book(string title, string author){
    int n=booklist.size();

    for(int i=0;i<n;i++){
        if(booklist[i].title==title && booklist[i].author==author)return i;
    }

    return -1;

}

bool sales(int quantity,int pos){
    if(booklist[pos].stock>=quantity){
        cout<<"Total Cost: "<<booklist[pos].cost*quantity<<endl;
        cout<<"1: Confirm"<<endl<<"0: Cancel"<<endl;
        int confirm;
        cin>>confirm;
        if(confirm==1){
            cout<<booklist[pos].title<<" sold "<<quantity<<" copies "<<endl;
            booklist[pos].stock-=quantity;
            return true;
        }else cout<<"Sale canceled"<<endl;
    }else{
        cout<<"Insufficient Stock"<<endl;
    }
    return false;
}

void add_Book(string title, string author, int stock, int cost){
    int found=find_Book(title,author);

    if(found==-1){
        Book newBook(title,author,stock,cost);
        booklist.push_back(newBook);
        cout<<"Successfully added book"<<endl;
    }else{
        booklist[found].stock+=stock;
        booklist[found].cost=cost;
        cout<<"Successfully updated book"<<endl;
    }
}

void menu(){
    cout<<"1: Sales"<<endl;
    cout<<"2: Add Book"<<endl;
    cout<<"3: find Book"<<endl;
    cout<<"0: close"<<endl;

}




int main(){

    menu();
    int input,quantity,cost;
    cin>>input;
    string title,author;

    while(input){
        if(input==1){
            cout<<"Enter title & author"<<endl;
            cin>>title>>author;

            int found=find_Book(title,author);
            if(found==-1){
                cout<<"Book not found"<<endl;

            }else{
                cout<<"Book found"<<endl<<"Enter quantity"<<endl;
                cin>>quantity;
                sales(quantity,found);

            }
        }else if(input==2){
            cout<<"Enter title , author, quantity & cost"<<endl;
            cin>>title>>author>>quantity>>cost;
            add_Book(title,author,quantity,cost);

        }else{
            cout<<"Enter title & author"<<endl;
            cin>>title>>author;
            int found=find_Book(title,author);
            if(found==-1){
                cout<<"Book not found"<<endl;

            }else{
                booklist[found].showStat();
            }
        }
        menu();
        cin>>input;
    }
    cout<<"Shop closed"<<endl;

}
