cmake_minimum_required(VERSION 3.21)
project(C)

set(CMAKE_CXX_STANDARD 20)

add_executable(C main.cpp DataStructure/String/String.cpp DataStructure/String/String.h DataStructure/String/iterator.cpp DataStructure/String/iterator.h DataStructure/String/ConstIterator.cpp DataStructure/String/ConstIterator.h CCC/CCC_2021/J4.h CCC/CCC_2021/J4.cpp CCC/CCC_2021/S2.h CCC/CCC_2021/S2.cpp CCC/CCC_2020/S2.h CCC/CCC_2020/S2.cpp CCC/CCC_2022/J4S2.cpp CCC/CCC_2022/J4S2.h CCC/CCC_2022/J3.cpp CCC/CCC_2022/J3.h CCC/CCC_2020/J2.cpp CCC/CCC_2020/J2.h CCC/CCC_2020/J3.cpp CCC/CCC_2020/J3.h CCC/CCC_2019/J3.cpp CCC/CCC_2019/J3.h CCC/CCC_2018/J2.cpp CCC/CCC_2018/J2.h CCC/CCC_2018/S3.cpp CCC/CCC_2018/S3.h CCC/CCC_2017/J2.cpp CCC/CCC_2017/J2.h CCC/CCC_2016/J4.cpp CCC/CCC_2016/J4.h CCC/CCC_2010/J2.cpp CCC/CCC_2010/J2.h CCC/CCC_2010/J3.cpp CCC/CCC_2010/J3.h CCC/CCC_2015/J4.cpp CCC/CCC_2015/J4.h CCC/CCC_2015/S2.cpp CCC/CCC_2015/S2.h CCC/CCC_2014/J4.cpp CCC/CCC_2014/J4.h CCC/CCC_2001/J1.cpp CCC/CCC_2001/J1.h CCC/CCC_2013/J4.cpp CCC/CCC_2013/J4.h CCC/CCC_2013/J3.cpp CCC/CCC_2013/J3.h CCC/CCC_2008/J3.cpp CCC/CCC_2008/J3.h CCC/CCC_2007/J1.cpp CCC/CCC_2007/J1.h CCC/CCC_2007/J2.cpp CCC/CCC_2007/J2.h CCC/CCC_2007/J3.cpp CCC/CCC_2007/J3.h CCC/CCC_2008/J2.cpp CCC/CCC_2008/J2.h CCC/CCC_2012/J4.cpp CCC/CCC_2012/J4.h CCC/CCC_2005/J3.cpp CCC/CCC_2005/J3.h CCC/CCC_2006/J2.cpp CCC/CCC_2006/J2.h CCC/CCC_2005/J1.cpp CCC/CCC_2005/J1.h CCC/CCC_2005/J2.cpp CCC/CCC_2005/J2.h CCC/CCC_2004/S1.cpp CCC/CCC_2004/S1.h CCC/CCC_2009/J3.cpp CCC/CCC_2009/J3.h CCC/CCC_2015/J3.cpp CCC/CCC_2015/J3.h CCC/CCC_2014/J3.cpp CCC/CCC_2014/J3.h CCC/CCC_2011/J4.cpp CCC/CCC_2011/J4.h CCC/CCC_2018/J4.cpp CCC/CCC_2018/J4.h CCC/CCC_2017/J4.cpp CCC/CCC_2017/J4.h DataStructure/Node.h CCC/CCC_2010/J4.cpp CCC/CCC_2010/J4.h CCC/CCC_2012/J3.cpp CCC/CCC_2012/J3.h CCC/CCC_2001/J5_S3.cpp CCC/CCC_2001/J5_S3.h DataStructure/Vector/Vector.h DataStructure/Vector/VectorConstIterator.h Basics/4-loops.cpp Basics/4-loops.h CCC/CCC_2009/J4.cpp CCC/CCC_2009/J4.h CCC/CCC_2009/J1.cpp CCC/CCC_2009/J1.h CCC/CCC_2018/J3.cpp CCC/CCC_2018/J3.h CCC/CCC_2013/J2.cpp CCC/CCC_2013/J2.h CCC/CCC_2008/J4.cpp CCC/CCC_2008/J4.h CCC/CCC_2006/J3.cpp CCC/CCC_2006/J3.h CCC/CCC_2007/J4.cpp CCC/CCC_2007/J4.h CCC/CCC_2002/J5S3.cpp CCC/CCC_2002/J5S3.h CCC/CCC_2006/J4.cpp CCC/CCC_2006/J4.h CCC/CCC_2005/S2.cpp CCC/CCC_2005/S2.h CCC/CCC_2006/S2.cpp CCC/CCC_2006/S2.h DataStructure/Heap/BinaryHeap.h DataStructure/Heap/HeapNode.h CCC/CCC_2003/J5S3.cpp CCC/CCC_2003/J5S3.h CCC/CCC_2017/J3.cpp CCC/CCC_2017/J3.h CCC/CCC_2016/J3.cpp CCC/CCC_2016/J3.h CCC/CCC_2016/S3.cpp CCC/CCC_2016/S3.h CCC/CCC_2005/J4.cpp CCC/CCC_2005/J4.h Basics/arrays.cpp Basics/arrays.h CCC/CCC_2004/J1.cpp CCC/CCC_2004/J1.h CCC/CCC_2004/J4.cpp CCC/CCC_2004/J4.h CCC/CCC_2003/J4S2.cpp CCC/CCC_2003/J4S2.h Basics/5-NestedLoops.cpp Basics/5-NestedLoops.h Basics/string1.cpp Basics/string1.h CCC/CCC_2004/S3.cpp CCC/CCC_2004/S3.h Basics/modulo.cpp Basics/modulo.h CCC/CCC_2002/J1.cpp CCC/CCC_2002/J1.h CCC/CCC_2001/J2.cpp CCC/CCC_2001/J2.h CCC/CCC_2002/J3S1.cpp CCC/CCC_2002/J3S1.h BIO/2014/Q1.cpp BIO/2014/Q1.h BIO/1997/Q2.cpp BIO/1997/Q2.h BIO/1998/Q2.cpp BIO/1998/Q2.h BIO/2000/Q1.cpp BIO/2000/Q1.h BIO/2016/Q1.cpp BIO/2016/Q1.h BIO/2017/Q1.cpp BIO/2017/Q1.h BIO/2013/Q1.cpp BIO/2013/Q1.h Basics/maps.cpp Basics/maps.h CCC/CCC_2006/S3.cpp CCC/CCC_2006/S3.h Basics/Recursion.cpp Basics/Recursion.h CCC/CCC_2009/S3.cpp CCC/CCC_2009/S3.h SnakeLadder.cpp SnakeLadder.h CCC/CCC_2018/S3_d.cpp CCC/CCC_2018/S3_d.h Basics/2-maths.cpp Basics/2-maths.h Basics/geometry.cpp Basics/geometry.h
        Basics/1-Print.cpp
        Basics/1-Print.h
        CCC/CCC_2024/J3.cpp
        CCC/CCC_2024/J3.h
        Basics/conditions.cpp
        Basics/conditions.h
        Basics/6-functions.cpp
        Basics/6-functions.h
        CCC/CCC_2024/S3.cpp
        CCC/CCC_2024/S3.h
        Classes/Fraction.cpp
        Classes/Fraction.h
        Classes/1-Circle.cpp
        Classes/1-Circle.h
        Classes/Bank/Chequing.cpp
        Classes/Bank/Chequing.h
        Classes/Bank/iAccount.cpp
        Classes/Bank/iAccount.h
        Classes/Shapes/polygon.cpp
        Classes/Shapes/polygon.h
        Classes/Shapes/Square.cpp
        Classes/Shapes/Square.h
        Classes/Bank/Account.cpp
        Classes/Bank/Account.h
)
