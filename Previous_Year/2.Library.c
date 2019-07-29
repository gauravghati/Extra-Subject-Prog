#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

#define max 50
#define lim 100
#define ll line(92);

void line(int n)
{
	for(int i=0;i<n;i++)
		cout<<"-";
	cout<<endl;
}

class Book
{
	private:char *title, *author, *publisher;
			float *price;
			int *stk;
			static int st,ut;

	public:	Book();
			void addBook();
			void showBook(int);
			void update();
			int search(char sch[max]);
			void purchase();
			void trans();
			void tabHead();
};

int Book::st=0;
int Book::ut=0;

Book::Book()
{
	title = new char[max];
	author = new char[max];
	publisher = new char[max];
	price = new float;
	stk = new int;
}

void Book::addBook()
{
	cin.ignore();
	cout<<"\nBook Title : ";
	cin.getline(title,max);
	cout<<"Author : ";
	cin.getline(author,max);
	cout<<"Publisher : ";
	cin.getline(publisher,max);
	cout<<"Price : ";
	cin>>*price;
	cout<<"Stock Left : ";
	cin>>*stk;
}

void Book::showBook(int i)
{
	cout<<setw(5)<<i+1;
	cout<<setw(25)<<title;
	cout<<setw(20)<<author;
	cout<<setw(15)<<publisher;
	cout<<setw(10)<<*price;
	cout<<setw(15)<<*stk<<endl;
}

void Book::tabHead()
{
	cout<<endl<<setw(7)<<"Sr.No.";
	cout<<setw(25)<<"Title";
	cout<<setw(20)<<"Author";
	cout<<setw(15)<<"Publisher";
	cout<<setw(10)<<"Price";
	cout<<setw(15)<<"Stock Left\n\n";
}

int Book::search(char sch[max])
{
	int h;
	h=strcmp(sch,title);
	if(h==0)
		return 1;
	else
		return 0;
}

void Book::update()
{
	cout<<"\nEnter Updated Price : ";
	cin>>*price;
	cout<<"Enter Updated Stock : ";
	cin>>*stk;
	cout<<"\nUpdated Successfully..!!\n";
}

void Book::purchase()
{
	int num;
	cout<<"\nBook Available.\nEnter no. of copies : ";
	cin>>num;
	if(num<=*stk)
	{
		*stk=*stk-num;
		cout<<"\nTotal Price = "<<*price*num;
		cout<<"\nPurchase Successful..!!\n";
		st++;
	}
	else
	{
		cout<<"\nStock not available..!!";
		cout<<"\nPurchase Unsuccessful..!!\n";
		ut++;
	}
		
}

void Book::trans()
{
	cout<<"\nSuccessful Transactions = "<<st;
	cout<<"\nUnsuccessful Transactions = "<<ut<<endl;
}

int main()
{
	Book *b[lim];
	int i,j,l=0,ch;
	char sch[max];
	
	do
	{
		cout<<"\nMenu :\n1. Add Book\n2. Display\n3. Update\n4. Search a Book\n5. Purchase a Book\n6. Transactions\n7. Exit\nEnter your choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1:	b[l]=new Book;
					b[l]->addBook();
					l++;
					break;
			case 2:	ll
					b[0]->tabHead();
					ll
					for(i=0;i<l;i++)
					{
						b[i]->showBook(i);
					}
					ll
					break;
			case 3: cin.ignore();
					cout<<"\nUPDATE BOOK\nEnter Book Title : ";
					cin.getline(sch,max);
					for(i=0;i<l;i++)
					{
						j=b[i]->search(sch);
						if(j)
						{
							ll
							b[0]->tabHead();
							ll
							b[i]->showBook(i);
							ll
							b[i]->update();
							break;
						}
					}
					if(i==l)
						cout<<"\nBook NOT FOUND..!!\n";
					break;
			case 4: cin.ignore();
					cout<<"\nSEARCH BOOK\nEnter Book Title : ";
					cin.getline(sch,max);
					for(i=0;i<l;i++)
					{
						j=b[i]->search(sch);
						if(j)
						{
							cout<<"\nSearch RESULT.\n";
							ll
							b[0]->tabHead();
							ll
							b[i]->showBook(i);
							ll
							break;
						}
					}
					if(i==l)
						cout<<"\nBook NOT FOUND..!!\n";
					break;
			case 5: cin.ignore();
					cout<<"\nPURCHASE BOOK\nEnter Book Title : ";
					cin.getline(sch,max);
					for(i=0;i<l;i++)
					{
						j=b[i]->search(sch);
						if(j)
						{
							ll
							b[0]->tabHead();
							ll
							b[i]->showBook(i);
							ll
							b[i]->purchase();
							break;
						}
					}
					if(i==l)
						cout<<"\nBook NOT FOUND..!!\n";
					break;
			case 6: b[0]->trans();
					break;
			case 7: return 0;
			default:cout<<"\nEnter VALID Choice..!!\n";
		}
	}while(ch!=7);
	return 0;
}

