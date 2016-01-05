pushd ../build
x86_64-w64-mingw32-g++ ../code/win32_handmade.cpp -luser32 -lgdi32 --std=c++11
popd
