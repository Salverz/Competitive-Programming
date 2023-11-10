listNumber = 1

while True:
    numberOfAnimals = int(input())

    if numberOfAnimals == 0:
        break

    animals = []
    animalCount = {}

    for i in range(numberOfAnimals):
        animals.append(input().split()[-1].lower())

    for i in range(numberOfAnimals):
        if animals[i] not in animalCount:
            animalCount[animals[i]] = 1
        else:
            animalCount[animals[i]] += 1

    keys = list(animalCount.keys())
    keys.sort()
    sortedAnimals = {i: animalCount[i] for i in keys}

    print(f"List {listNumber}:")
    for animal in sortedAnimals:
        print(f"{animal} | {sortedAnimals[animal]}")
    listNumber += 1