function myMap = test(y)
myMap = containers.Map('KeyType', 'uint64', 'ValueType', 'double');
out = keyHash(y);
myMap(out) = 1;
return
end