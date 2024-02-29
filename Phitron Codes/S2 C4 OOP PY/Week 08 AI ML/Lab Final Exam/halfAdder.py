""" Half Adder in digital logic  """

"""  
Week 08: ML 
Lab final exam
261122, Saturday, 07.00 pm 
question 3: 

show truth table of half adder 
implement half adder  <-
create test for the programme 
"""


def half_adder(A, B):
        """ Half Adder """
        
        xor_sum = A ^ B 
        and_carry = A & B 
        return xor_sum, and_carry


A = 1
B = 0

if __name__ == '__main__':
        s, c = half_adder(A, B)
        print(f"Sum: {s} | Carry: {c}")
