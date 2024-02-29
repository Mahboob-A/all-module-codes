
"""  
Question link: https://docs.google.com/document/d/1GVEHp_KWY-Jau9ihP_9PtQ-mVZr8DRsHQep3qkjE8Ks/edit
Py week 09: Final Theory Exam 
Exam date: 011222, Thursday
Exam last date: 081222, Thursday
Exam writing start date: 051222, Monday, 07.30 pm
Today date: 051222, Monday, 07.30 pm 

Question 01: print the below data like the output: 
"""


"""  
Output: 
Key:aax Value: 5
Key:aay Value: 6
Key:aaz Value: 7
Key:abx Value: 8
Key:aby Value: 9
Key:abz Value: 10
Key:aaax Value: 11
Key:aaay Value: 12
Key:aaaz Value: 13
Key:aabx Value: 14
Key:aaby Value: 15
Key:aabz Value: 16
Key:bax Value: 17
Key:bay Value: 18
Key:baz Value: 19
Key:bbx Value: 20
Key:bby Value: 21
Key:bbz Value: 22
Key:bbax Value: 23
Key:bbay Value: 24
Key:bbaz Value: 25
Key:bbbx Value: 26
Key:bbby Value: 27
Key:bbbz Value: 28
Key:cax Value: 29
Key:cay Value: 30
Key:caz Value: 31
Key:cbx Value: 32
Key:cby Value: 33
Key:cbz Value: 34
Key:ccax Value: 35
Key:ccay Value: 36
Key:ccaz Value: 37
Key:ccbx Value: 38
Key:ccby Value: 39
Key:ccbz Value: 40

"""


data={
    'a':[{'aa':{'aax':5,'aay':6,'aaz':7}, 'ab':{'abx':8,'aby':9,'abz':10}}, {'aaa':{'aaax':11,'aaay':12,'aaaz':13},'aab':{'aabx':14,'aaby':15,'aabz':16}}],

    'b':[{
        'ba':{'bax':17,'bay':18,'baz':19},
        'bb':{'bbx':20,'bby':21,'bbz':22}
        },
        {
        'bba':{'bbax':23,'bbay':24,'bbaz':25},
        'bbb':{'bbbx':26,'bbby':27,'bbbz':28}
        }],
    'c':[{
        'ca':{'cax':29,'cay':30,'caz':31},
        'cb':{'cbx':32,'cby':33,'cbz':34}
        },
        {
        'cca':{'ccax':35,'ccay':36,'ccaz':37},
        'ccb':{'ccbx':38,'ccby':39,'ccbz':40}
        }]
}

dct = { 'a': [{'aa': {'aax': 5, 'aay': 6, 'aaz': 7}, 'ab': {'abx': 8, 'aby': 9, 'abz': 10}}, {'aaa': {'aaax': 11, 'aaay': 12, 'aaaz': 13}, 'aab': {'aabx': 14, 'aaby': 15, 'aabz': 16}}]}

dt = {'a' : 1, "b": 2, "c" : 3}
# for key, val in data.items():
#         # print(f"Key: {key} | val {val}")
#         for indx in val:
#                 # print(indx)
#                 for k1, v1 in indx.items():
#                         # print(f"Key: {k1}  | val: {v1}")
#                         for k2, v2 in v1.items():
#                                 print(f"Key: {k2} \t Value: {v2}")

for key, val in data.items():
        for indx in val:
                for k1, v1 in indx.items():
                        for k2, v2 in v1.items():
                                print(f"Key: {k2} \t Value: {v2}")

print(dct.keys())