class MyClass:
    """A simple example class"""
    i = 12345
    def f(self):
        self.i = self.i + 1
        return self.i

print(MyClass().f())
input()
