for f in lib/*.hpp
do
    echo $f
    clang-format -i $f
done

for f in lib/*.cpp
do
    echo $f
    clang-format -i $f
done

for f in test/*.cpp
do
    echo $f
    clang-format -i $f
done