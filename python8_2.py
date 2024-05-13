stdus = [
    {'sid':'103','Chinese':90,'Math':95,'English':92},
{'sid':'101','Chinese':80,'Math':85,'English':82},
{'sid':'102','Chinese':70,'Math':75,'English':72}
]

scores = {}

for stud in sorted(stdus,key=lambda x:x['sid']):
    stud_id = stud['sid']
    scores[stud_id] = [stud['Chinese'],stud['Math'],stud['English']]

for stud_id, grades in scores.items():
    print(f'{stud_id}:{grades}')