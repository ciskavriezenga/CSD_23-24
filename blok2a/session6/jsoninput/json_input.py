import json

# open the json data file
f = open('data.json')

# retrieve dictionary object
data = json.load(f)

# do stuff with dictionary
for key in data["probabilities"]:
    print("\ninstr:", key["instr"], "\n")
    print("\nduo_probs:",key["duo_probs"],  "\n")
    print("\ntrio_probs:",key["trio_probs"],  "\n")


# Closing file
f.close()
