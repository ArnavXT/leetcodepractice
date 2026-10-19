# Last updated: 10/19/2026, 11:24:56 AM
class MyHashSet:

    def __init__(self):
        self.size = 10000
        self.table = [None] * self.size

    def calculate_val(self, key):
        return key % self.size

    def add(self, key: int) -> None:
        hash_value = self.calculate_val(key)

        if self.table[hash_value] == None:
            self.table[hash_value] = [key]
        else:
            self.table[hash_value].append(key)
    def remove(self, key: int) -> None:
        hash_value = self.calculate_val(key)

        if self.table[hash_value] != None:
            while key in self.table[hash_value]:
                self.table[hash_value].remove(key)

    def contains(self, key: int) -> bool:
        hash_value = self.calculate_val(key)

        if self.table[hash_value] != None:
            return key in self.table[hash_value]
        return False


# Your MyHashSet object will be instantiated and called as such:
# obj = MyHashSet()
# obj.add(key)
# obj.remove(key)
# param_3 = obj.contains(key)