mkdir -p builds
pushd builds
c++ ../sources/$1.cpp -o ./builds/$1 -g
popd