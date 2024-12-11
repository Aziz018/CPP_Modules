# Encapsulation

|   Access Specifier	|   Description	|   Example |
| --------------------- | ------------- | --------- |
|   private |	Members are accessible only within the class. They cannot be accessed outside the class or by derived classes.  |	`int myData;` (accessible only in class methods)    |
|   protected   |	Members are accessible within the class and by derived classes but not from outside.    |	`int myData;` (accessible within the class and its subclasses)  |
|   public  |	Members are accessible from anywhere, both inside and outside the class.    |	`int myData;` (accessible from anywhere) |
|   friend  |	Functions declared as `friend` can access the private and protected members of the class.	|   `friend void printData(MyClass& obj);` (can access private data)    |