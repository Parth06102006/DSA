### Hashing
If in a array i need to find the number then finding the list of number from the array if i call the function we as we used to run a for loop hence a loop i srun and then the time complexity would be O(N) times and now suppose the input numbers list to be found out from the array is Q so then the time complexity would become O(Q*N) hence the time complexity has increased and it may prove us bad as for e.g
Q=  10^5
N = 10^5
and O(10^8)  = 1sec 
then O(Q*N) = O(10^10) = 100sec
hence there would be a 100 sec gap to run which is huge like on backend if the i run i call and it does not run quickly then i get annoyed hence then i want to reduce the time complexity in this case so we use hashing in which we 

create an empty array of size Q then we do some pre calculation and each index would then work like represnetaion of the number in the array of size N thenn we wont need to loop in the array again and again we could simply pass on the required input from the hashed array as hash[i] to give the count 

A problem over here that I have here is that in the int main() function the maximum size of the array for int if i say is 10^6 and also it cannot be 10^6+1 and if i declare globally then the size of the array is 10^7 then here the global array has 10^7 characters then the all have the value 0 one more thing FOR GLOBAL ARRAY TO HAVE 0 AS VALUES AT THE INDEX IT IS NOT COMPULSORY TO DEFINE IT

the size of the array can ne increased to 10^7 and 10^8 for main and global array variable for boolean data type 

We can also find the character from hashing since if the character array has "abcdefghijkabdertkje" then if i consider only lower case charaters and to index these values and hash these what would happen is that here the indexes values are character which cannot be taken as index "it can but as ascii which for lower case starts from 65" hence to get the index as 0 reperesenting a and so on we need to subtract the index value of the character array from 'a' during hashing and then store the count as we did in integer array


Hashing has 3 methods ->
Divsion Method
Folding Method -> not req for now
Mid Square Method -> not req for now

if i take divsion methd to explain collision that occurs when i do x%10 to stroe the huge numbers of the array of size 10 to limit the value the n the numbers with same remainders are stored in the index respective to remainders like 1,2,3,4... and if more than one present themn they are stored in sorted order and then there is a case if have to hash array which consists of last digit lets say 8 then all will be stored at index 8 and then to retireve such a large data at a single index causes collision
