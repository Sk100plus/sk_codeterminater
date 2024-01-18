/*This is another problem about Indraneel's library. His library has one long shelf. His books are numbered and he identifies the books by their number. Each book has a distinct number.

He has lost many books, since many of his friends borrow his books and never bother to return them. He does not want to lose any more books and has decided to keep a record of all books that he lends to his friends. To make the task of borrowing a book a little difficult, he has given the following instructions to his friends: when they borrow a book, they must record in a register its position from the left among the books currently on the shelf.

Suppose there are 
5
5 books in the library and they are arranged as follows:

26
1
42
15
3
26142153

If someone walks in and borrows the book 
42
42, then he will record 
3
3 in the register because this book is the third from the left on the shelf. Now the shelf looks like this:

26
1
15
3
261153

If the next person borrow the book 
3
3, he writes down 
4
4 in the register since this is currently the fourth book from the left on the shelf, and so on.

Indraneel knows the initial arrangement of the books in his library at the time that he introduced the register system. After a while he examines his register and would like to know which books have been borrowed. Your task is to write a program to help Indraneel solve this problem.
*/

/*INPUT
5
45 2 31 6 7
2
3 
4

OUTPUT
31
7
*/


// SOLUTION

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int t;
	cin>>t;
	 vector<int> v;
	while(t--){
	    int a;
	    cin>>a;
	    v.push_back(a);
	}
	int n;
	cin>>n;
	int p=0;
	while(n--){
	    int a;
	    cin>>a;
	    cout<<v[a-1]<<endl;
	   v.erase(v.begin()+(a-1));
	}
	return 0;
}
