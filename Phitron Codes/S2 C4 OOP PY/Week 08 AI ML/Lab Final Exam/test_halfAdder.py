""" Half Adder Testing """

"""  
Week 08: ML 
Lab final exam
261122, Saturday, 07.00 pm 
question 3: 

show truth table of half adder 
implement half adder
create test for the programme  <-
"""

import unittest
from halfAdder import half_adder

class testHalfAdder(unittest.TestCase):
        """ Test Half Adder """

        def test_halfAdder(self):
        
                self.assertEqual(half_adder(1, 0), (1, 0))
                self.assertEqual(half_adder(0, 1), (1, 0))
                self.assertEqual(half_adder(0, 0), (0, 0))
                self.assertEqual(half_adder(1, 1), (0, 1))

if __name__ == '__main__':
        unittest.main()
