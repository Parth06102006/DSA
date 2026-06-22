## Intro

C++ Stl the standard template library helps use to provided the containers,algorithms , functions and iterators to pursue dsa

### Containers

##### Pairs
pair<int,int>p = {1,3};
inplace of int we can also have other data type
we can access the data type from p.first and p.second
int a = 2
to store two variable we can use pair
to store more than two we can use nested pair
a pair within a pair
pair<int,pair<int,int>>p = {1,{3,4}}
cout <<p.first <<" "<< p.second.second<<" "<< p.second.first;
the output for the above line of code would be 
1 4 3
pair<int , int>arr[] = {{1,2},{2,5},{5,1}};
we are storing pairs inside the array
we can access it using indexing
cout<<arr[1].second;
it would give the output as 5 

#### Vectors
Vectors are just ike arrays but they store data dynamically by which i mean to say is that the vectors can store more then the defined length or given set of values like in array we can't add more than the defined elements inside it hence we just can't use it for the problems where it may require when we are unaware of the situation about the array length required
vector<int> v;
v is over here an empty container defined
v.push_back(1)
here it will take the value as v and push it back into the container giving me the output as {1}
v.emplace_back(1,2)
it is also used emplace_back to push the elemets back into the vector however it is fatser than push_back()

##### emplace_back() vs push_back()
if i want to talk about the difference between the two i can say that in the two functions like in emplace_back() is the function then it directly copies the new value given into the object and inserts and increases the length however as for push_back if i consider that then there is also something i would say that when the data is passed to it to be added to the end then it specifies the data at a memory location then copies it usig the copy constructor then pushes that by copying the old content of the object pushes into it and reassigns into the object .

if let's say there is a vector of type pair then:
vector<pair<int,int>>vec; this is how we would the vector for the pairs alright so and using the push_back and the emplace_back we would get the following rersults 
to push a pair using the push_back() then add the value using the push_back({1,2})
Similarly to add a value using emplace_back() we use the add the pair like emplace_back(1,2)

vector<int>v(5,100) -> then this would define a vector with 5 values of 100 in the array
Similarly, vector<int>v(5) it defines a array with 5 values either 0 or any other garbage value
Also if i like need to copy vector then i can define it like vector<int>v1(v);
By defining the size still i can push or add elements to the vector

Now if i want to get a element at a particular index let's say I want to access a value and the index number must be defined within the range of the vector length as out of bounds value cannot be accessed so use v[0] which would give me the 0th index or the first value of the vector or v.at(0) though not used much so stick to v[0] only
Another way to access the elements in the vector is to use the iterator here the iterator
vector<int>::iterator it= v.begin();
so here the it have a memory address of the beginning of the vector then the memory address is assigned to it and then to access the value of the it i would use *() to access the memory stored at that location and then if i would do it++ since the values in a vector as well as array are stored in contiguous memory locations then if we do it++ then it is going to move in the next character value 
if i do vector<int>::iterator it = v.end()
here is a problem that this function though points to a data point the array but not at the end as the name says but it gives the memory address next to the last character and if i like need to access the memory address of the last character then i need it-- to get the last character address

###### Disclaimer::THE FOLLOWING ARE NOT USED OR ASKED MUCH
vector<int>::iterator it = v.rend()
this reverses the array and gives use the memory address at the a postion before then the original array beigining character

afterwars if we need to access a charctaer we do it++

also now vector<int>::iterator it = v.rbegin()
points to the last value memory address and if i would do it++then it would move to the memory address of the element which was defined just before it
######

v.back() it is a function which is used to return the value of the last element

now to access every character in the array we use for loop similarly we can do it in vector by
for(vector<int>::iterator it=v.begin();it!=v.end();it++)
{
    cout<<*(it)<<" ";
}

but here the syntax vector<int>::iterator is so long now to short it we can use keyword auto where using auto we can write it and it decides itself the data type like i do int x=5 using cpp i can also do auto x =5 it is valid
hence,
for(auto it=v.begin();it!=v.end();it++)
{
    cout<<*(it)<<" ";
}

now to remove any value we can use v.erase() function where v is the vector name
so v.erase(v.begin()+1)-> removes the element at index 1 or the 2nd element
then using v.erase(v.begin()+2,v.begin()+4) it is in the form of [start,end) here the starting element is included and the last element is excludeed to remove and the start,end-1 character are removed
vector<int>v(2,100);
v.insert(v.begin(),300)
v.insert(v.begin()+1,2,10) here we add 10 two times hence here at the second index we would add 10 two times

vector<int>copy(2,50);
v.insert(v.begin(),copy.begin(),copy.end()) -< adds all the elements into the vector v as if they were the elements of v only

cout<<v.size() returns me the size of the vector

v.pop_back() remove the last element and returns the value of the element removed

v1.swap(v2) it swaps the values of v1 vector with v2 vector
like v1 = {1,2,5} , v2 = {6,7,8}
v1.swap(v2)
v1 = {6,7,8} , v2 = {1,2,5}

v.clear() makes the vector empty gives {}
v.empty()-> it tells whether the vector is empty or not hence returns true or false

#### List
list<int> ls;

all the functions and all it is same as vector but here jsut one difference is that makes it different than vector that here instead of using the operation ike insert here also like vector has the same operation but what i am saying is that here the costly operation of insert is reduiced to 
ls.push_front()
ls.emplace_front() which are the function to push the value at the front of the array


#### deque

void explainDeque()
{
    deque<int>dq;
    dq.push_back()
    dq.emplace_back()
    dq.push_front()
    dq.emplace_front()
    dq.pop_back()
    dq.pop_front()
    dq.back()
    dq.front()
    //rest all the functions are same as vector
}

#### Stack
It based on Lifo which is last in front out hence if i add a value into stack then if i pop then the latest vallue added will be popped first

void explainStack()
{
    stack<int>st;
    st.push(1) -> {1}
    st.push(2) -> {2,1}
    st.push(3) -> {3,2,1}
    st.push(4) -> {4,3,2,1}
    st.emplace(5) -> {5,4,3,2,1}

    cout<<st.top(); //prints the last guy that went in here it is 5 and here we can do indexing that is we can't print st[2] like vector, array , list and deque

    so indexing access is not allowed

    st.pop() -> {4,3,2,1}
    //removes 5 

    cout<<st.size(); gives the output as 4 here 'as i removed 5 earlier'
    cout<<st.empty() //it gives true or false that whether the stack is empty or not in the given example it would be false

    stack<int>st1, st2;
    st1.swap(st2);

    the time complexity in stack is O(1)
}

#### Queues
It is similar to stack but here it follows fifo -> first in first out
void explainQueue(){
    queue<int>q;
    q.push(1) {1}
    q.push(2) {1,2}
    q.push(4) {1,2,4}
    q.back()+=5; {here it will be added to the last element 4 and would give the result as 9}
    cout << q.back() //prints 9
    cout << q.fron() ; //prints 1
    q.pop() // it removes the first element that is 1 here
    cout << q.front() //prints 2 as after 1 was 2 pushed so that is why
    ////////Size , swap and empty operations/functions are same as stack
}

#### Priority Queue
In prioriy queue there we push the element inside the container and the element is pushed as per the value that is the least value will be pushed back and the top most value would be given utmost priority and will be be kept at first position
Also one more thing that it is similar to queue but there is the thing that the values are prioritised first
void explainPQ(){
    priority_queue<int>pq;
    pq.push(5)  ->  {5}
    pq.push(2)  ->  {5,2}
    pq.push(8)  ->  {8,5,2}
    pq.emplace(10)  ->  {10,8,5,2}
    cout<<pq.top() here the output would be as 10
    pq.pop() here the 10 would be popped out -> {8,5,2}
    cout << pq.top() ;
    //here the order where the integers are kept in decreasing order is known as max heap

    to assign the order in ascending we do the following operation that is 
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(5)  ->  {5,8}
    pq.push(2)  ->  {2,5}
    pq.push(8)  ->  {2,5,8}
    pq.emplace(10)  ->  {2,5,8,10}

    cout << pq.top(); //prints 2 here the least value is given top priority
}

#### 
A set is a container where the elements are stored in ascending order and unique values no duplicate values are allowed
void explainSet(){
    set<int>st;
    st.insert(1) {1}
    st.emplace(2) {1,2}
    st.insert(2) {1,2}
    st.insert(4) {1,2,4}
    st.insert(3) {1,2,3,4}
    
    auto it = st.find(3); // returns the address of the element 3

    auto it = st.find(6); //if the element is not present then it gives the address like st.end() which is the address after the last element

    st.erase(5) //removes element 5 //takes logarithmic time

    int cnt = st.count(1); returns the count of element defined in the parenthesis or if not present then returns 0

    auto it = st.find(3)
    cout << st.erase(it) //using the address we can delete the element

    auto it1 = st.find(2)
    auto it2 = st.find(4)
    st.erase(it1,it2) //after erase {1,4} [first,last)

    rest of the function are same as vector

    auto it = st.lower_bound(2);
    lower_bound() it is the function that returns the index of the number defined here and if it is not there like {1,2,3,5,9}
    if i want to use lower bound with value 7 then here in the set there is no 7 so it would return me the immediate next element 9 and if do for 10 then since 10 is the greatest then it would return me the index as 5 despite of the largest index being 4 here since it represents the element next to the nearest largest element if not found in the set

    auto it = st.upper_bound(2)
    upper_bound() it is the function that returns the index of the number just next to it that is just greater than it not the greatest but just next to it which is the greatest defined here and if it is not there like {1,2,3,5,9}
    if i want to use lower bound with value 7 then here in the set there is no 7 so it would return me the immediate next element 9 and if do for 10 then since 10 is the greatest then it would return me the index as 5 despite of the largest index being 4 here since it represents the element next to the nearest largest element if not found in the set

    here in set everything happend in logN time complexity 
}

#### MultiSet
In multiset we can store multiple same elements unlike set where all the elements are unique but like set it is also stored in order form.

void explainMultiSet()
{
    multiset<int>ms;
    ms.insert(1);  ->  {1}
    ms.insert(1);  ->  {1,1}
    ms.insert(1);  ->  {1,1,1}

    ms.erase(1) //it makes all the occurences of 1 to be removed at once

    ms.erase(find(1)) // using ms.erase(address) we can remove that particular number from it's address 

    ms.erase(find(1),find(1)+2)

    //rest of all the functions are same as set
}

#### Unorder Set

void explainUSet(){
    unordered_set<int> st;
    here all the elements are stored in unordered form then here there is the thing that here 
    ####### Disclaimer
     here lower_bound and upper_bound function DOES NOT WORK rest all the function are same as set
     ######
     here the insert,push like operations all has time complexity as O(1) and the worst case possible is O(n) and that too is the worst case when there is large data then only 
}

#### Map

we store the value in the from {key,value} pair and the key has to be unique and key,value can be anything pair,int,double and every thing is stored in sorted order on the basis of keys

void explainMap(){
    map<int,int> map;
    map<int,pair<int,int>> mpp;
    map<pair<int,int>,int> mpp;

    if i am defining map to this map<int,int> map;
    mpp[1] = 2
    in the map it is stored as {1,2}
    mpp.emplace({3,1}) 
    mpp.insert({2,4}) 

    stores it in the form of odered that is it stores it  in the form of {{1,2},{2,4},{3,1}}

    we can also add mpp{{2,3}} = 10;
    for(auto it : mpp){
        cout << it.first << " " <<it.second<<endl;
    }
    here in the loop we would have for loop print all the values in the map and we can access all the values in the map by it.first which would iterate and give us the it.first key and it.second is the value

    cout << mpp[1] ; prints the value of 2 a i have stored the value of 2 with key 1
    cout << mpp[5]; since this key is not there hence we would have the value as NULL or 0

    auto it = mpp.find(3) //finds the memory address of the pair in this case {3,1}
    so to output the value
    cout << *(it).second;

    auto it = mpp.find(5) it points to mpp.end() which is after the map
    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(3);
    //erase , swap , size , empty are same as above
}   


#### Multimap

void explainMultimap()
{
    we can store duplicate keys but must be sorted
    only map[key] cannot be used here
    rest is same as map
}

#### UnorderedMap

void explainUnorderedMap()
{
    same as set and unordered_Set difference it will have unique keys
    but it would be randomly stored

    it has TIME COMPLEXITY O(1)  for once in a blue moon worst case O(n) and the map has time complexity of logN

    here the keys and values are not fpr pairs and is like limited to int,double,char and likes of it
}


### Algorithms

first is sorting now we need sorting in arrays , vectors
so what we can do is : sort(a,a+n)
for e.g-> x = {2,8,5,6}
sort(x,x+2) then we sort the array at 0 the index to the 2nd index in the ascending order
so we get {2,5,8,6}

then to sort the elements in the descending order we can sort the elements by sort(x,x+n,greater<int>);

pair<int,init> a[] = {{1,2},{2,3},{4,1}};
//if like lets say i am given that i need to sort the pairt array by the ascending order of the second element of the pair and if it is same then i have to sort it in the descending order as per the value of the first element
//we need to do this by out own function which is boolean and it would be taken up by sort to order the pair array as per the given demand

sort(a,a+n,comp)

/////////

boolean comp(pair<int,int>p1 , pair<int,int>p2)
{
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    
    if(p1.first > p2.first) return true;
    return false;
}

/////////

int num = 7;
int cnt = __builtin_popcount() it will return the number of sandbits like if the number is 32 bit then y is stored as 000000.......111 then it will return 3 sandbits

long long num = 165786578687;
int cnt = __builtin_popcountll();
here we have used it for long numbers

string s = "123";
since s can be 213 also and the explaination for which i have goven below then it is must that sort the string
sort(s.begin(),s.end());
do{
    cout<<s<<endl;
}while(next_permutation(s.begin(),s.end()));

here we would have all the permutations that is 123 , 132 , 213 , 231 , 312 , 321 which are all the six permutaion of s = 123
but if s  = 231 then the permutaion that we will have is here 231,312,321
hence we follow here dictionary type structure for permutation 

now if we want maximum element from the array then 
int maxi = max_element(a,a+n); 