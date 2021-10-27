
[ -d "build"] || mkdir build

pushd build
cmake -GNinja .. && ninja