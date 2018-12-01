## Lab 3

In order to compile the code write the following in bash:
```bash
g++ bank_account.cxx account_warehouse.cxx main.cxx -o test
```

## About the lab
Again we see a no-use app, which, however, mocks some possible future ultra-secure implementation of a banking system.

## Used Design Patterns

### Private Data Class
The private class data design pattern seeks to reduce exposure of attributes by limiting their visibility. I tried to implement this by introducing the ```AccountData``` class into my program. It is declared in the ```bank_account.h``` header and holds all the data contained in a ```BankAccount``` object. This inderection allows the restriction of access to these members from clients.

### Proxy
The proxy pattern adds another level of inderection to my system by providing a placeholder for ```AccountData``` to be accessed from ```BankAccount``` objects. This pattern is useful in cases of having resource hungry objects which take some time to generate. I supposed that bank accounts my increase in functionality and attributes in time, so I added the ```ProxyBankAccount``` class (declared in ```bank_account.h``` header) to instantiate potentially cumbersome objects only when they are accessed.

### Template Method
The Template Method pattern in my system defines the skeleton of an algorithm in an operation, deferring some steps to client subclasses. Template Method lets subclasses redefine certain steps of an algorithm without changing the algorithm's structure. This pattern is seen in the hierarchy of bank account classes. We can observe in the ```bank_account.h``` header that I have declared ```Regular``` and ```Premium``` bank accounts. Both of them are subclasses of the ```BankAccount``` class and share the same functionality regarding the inderection of data access. However, these classes have different implementations of the ```report()``` function. Thus each class redefines this function, letting untouched the shared functionality.

### Object Pool
Object pooling can offer a significant performance boost; it is most effective in situations where the cost of initializing a class instance is high, the rate of instantiation of a class is high, and the number of instantiations in use at any one time is low. In my program the respective pool is declared in the ```account_warehouse.h``` header file. I supposed that it might appear a concept of lending accounts to users, which might be taken away in case one is suspended etc. As it was stated previously, an account might also have a lot of new functionality, making its generation a long process. In order to avoid this I have created a class ```AccountWarehouse``` which contains a list of user accounts, whether premium or regular, which could be taken from it. Thus we have a pool of reusable ```BankAccount``` objects.