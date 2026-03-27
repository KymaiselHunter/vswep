from SumArray import SumArray 
from SumArrayRetrieve import SumArrayRetrieve

def main():
    regular = SumArray([[1,1,1] for i in range(3)])
    test(regular)

    retrievalOptimized = SumArrayRetrieve([[1,1,1] for i in range(3)])
    test(retrievalOptimized)

    print('tests passed')


def test(sumArray):
    for i in range(3):
        for j in range(3):
            assert sumArray.retrieve(i,j) == (i + 1) * (j + 1)
    
    sumArray.set(0,0,2)
    for i in range(3):
        for j in range(3):
            assert sumArray.retrieve(i,j) == (i + 1) * (j + 1) + 1

    sumArray.set(0,0,0)
    for i in range(3):
        for j in range(3):
            assert sumArray.retrieve(i,j) == (i + 1) * (j + 1) - 1

if __name__ == "__main__":
    main()