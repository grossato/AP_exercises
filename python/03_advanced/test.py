
# coding: utf-8

# In[ ]:


import unittest

class MyRange():
    def __init__(self, start, stop, step=1):
        self.range=range(start,stop,step)

def myrange(*args):
    if len(args) not in [1,2,3]:
        raise TypeError("wrong argouments number")
    if len(args)==1:
        return MyRange(0,args[0]).range
    if len(args)==2:
        return MyRange(args[0],args[1]).range
    if len(args)==3:
        return MyRange(args[0],args[1],args[2]).range
    

class TestMyModule(unittest.TestCase):
    def test1(self):
        self.assertEqual([i for i in myrange(1,20,2)], [i for i in range(1,20,2)])
      
    def test2(self):
        self.assertEqual([i for i in myrange(1,20)], [i for i in range(1,20)])
    
    
    def test3(self):
        self.assertEqual([i for i in myrange(20)], [i for i in range(20)])
            
    def test4(self):
        self.assertEqual([i for i in myrange(20,1,-1)], [i for i in range(20,1,-1)])
if __name__ == '__main__':
    unittest.main()

