# Pointer Defination

What is pointer? How it is declared and initialize?

Pointer is a special type of variable that contains the memory address of another

variable.

It is also known as derived data type.

Each pointer can point to specific type of data like integer pointer can point to integer data.

Declaration and initialization of pointer:

int *p://pointer variable

int i; //variable

p-&i //assigning address of i to pointer p

Pointers are not allowed to store address directly but they can store only the address of variable of given type. 

int "ptr=1000 // illegal

Address operator (& ampersand);

The address of a program can be obtained by using & main()
{
int i=5; 
printf("%u %d",&i,i);
{
Note: %u unsigned decimal is used to print the address of variable. 
# Write a program for print the value and address of a variable using pointer. void main()
{
int num, "p:

p=&num; scanf("%d",&num); //5

 printf("%d","p);//5 dereferencing a pointer or value at address 

printf("%d",num); 115 printf("%u",&num);//1000
 printf("%u",p); //1000
}
Dereferencing a pointer (*): refer to the value of the variable to which it point or

value at address. * is also called indirection operator. "(&num)--*p that means the indirection and the address operator are inverse of each other.

Size of pointer:

int *p://store integer variable address

char *p //store character variable address

float "p //store float variable address

All these pointer will occupy the same amount of space in memory that is always 2 byte (int-16 bit machine).

sizeof(p); //all p occupy 2 bytes

Pointer expression:

Condition for arithmetic operation is pointers must be of same type.

1. A pointer variable cannot be added to another pointer variable.

pl+p2 //incorrect but pl+2 //correct //2 shows number of elements Suppose pl=1000 then pl+2-1000+4 byte-1008

2. Subtraction of two pointers is allowed.

P1-p2 count number of element. pl-3 is also allowed. 3. Multiplication of two pointers is not allowed.

pl p2 //illegal pl 2 //illegal

4. Division is also not allowed.

5. Following relational operators are also allowed:

pl>p2

pl==p2

p1!=p2

6. Increment and decrement are also allowed.

"p++; //will increase the value of pointer so that it now point to next

element, and ++ have same precedence but Associativity right to left. i-[3,6,9]: *pi: *p++; 6

(*p)++; //increase the value by 1 at memory location

i=13,6,9]: *pi; (*p)++; >>>4


