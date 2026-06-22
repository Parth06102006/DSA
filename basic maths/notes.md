if i get the number 7789 and i want to extract the digits then i need all the individual digits so if i want to do
7789 % 10 = 9 the % modue operator gives us remaninder 9 as the nearest number divisible by 10 is 7780 and we will get the next digit as we would divide it by 10 and since we need integer then it will remove decimal and then it we would get 778 and then we would do module oeprator then we will get 8 as the output similarly we will do it until we will get zero and the extraction has been done in reverse order
so we can do while loop till the number does not become zero


#### Euclidean Algorithm

It states that two number a,b have gcd of (a,b) then it is equal to gcd of gcd(a-b,b) where a>b

if there are two numbers 15,20
the gcd is 5 and if i do gcd(5,15) the gcd is 5 only
so gcd(20,15) = gcd(5,15)
if i do it again like that then gcd(5,15) = (10,5) = gcd(5,5) = gcd(0,5)
so other number becomes gcd till the number becomes zero
but if i use gcd(52,10) then i wouldd get (42,10),(32,10),(22,10),(12,10),(10,2),(8,2),(6,2),(4,2),(2,2),(0,2)
so it has increaed the number of steps
if i look at (52,10) and if i do 52%10 then the value is 2 so then i would say that here the value is what 2 so to reduce the number of steps what we can do is use (a%b,b) with a>b given
since here is divison happening logX(min(a,b)) where X is phi the scientific phi represetning large number