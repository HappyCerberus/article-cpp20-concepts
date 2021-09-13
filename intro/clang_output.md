# Clang error output

```
In file included from <source>:1:
In file included from /opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/algorithm:701:
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__algorithm/make_heap.h:29:34: error: invalid operands to binary expression ('std::__list_iterator<int, void *>' and 'std::__list_iterator<int, void *>')
    difference_type __n = __last - __first;
                          ~~~~~~ ^ ~~~~~~~
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__algorithm/partial_sort.h:32:12: note: in instantiation of function template specialization 'std::__make_heap<std::__less<int> &, std::__list_iterator<int, void *>>' requested here
    _VSTD::__make_heap<_Compare>(__first, __middle, __comp);
           ^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__algorithm/sort.h:506:16: note: in instantiation of function template specialization 'std::__partial_sort<std::__less<int> &, std::__list_iterator<int, void *>>' requested here
        _VSTD::__partial_sort<_Comp_ref>(__first, __last, __last, _Comp_ref(__comp));
               ^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__algorithm/sort.h:517:12: note: in instantiation of function template specialization 'std::sort<std::__list_iterator<int, void *>, std::__less<int>>' requested here
    _VSTD::sort(__first, __last, __less<typename iterator_traits<_RandomAccessIterator>::value_type>());
           ^
<source>:6:7: note: in instantiation of function template specialization 'std::sort<std::__list_iterator<int, void *>>' requested here
        std::sort(begin(data), end(data));
             ^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__iterator/move_iterator.h:151:1: note: candidate template ignored: could not match 'move_iterator' against '__list_iterator'
operator-(const move_iterator<_Iter1>& __x, const move_iterator<_Iter2>& __y)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__iterator/reverse_iterator.h:200:1: note: candidate template ignored: could not match 'reverse_iterator' against '__list_iterator'
operator-(const reverse_iterator<_Iter1>& __x, const reverse_iterator<_Iter2>& __y)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__iterator/wrap_iter.h:259:6: note: candidate template ignored: could not match '__wrap_iter' against '__list_iterator'
auto operator-(const __wrap_iter<_Iter1>& __x, const __wrap_iter<_Iter2>& __y) _NOEXCEPT
     ^
In file included from <source>:1:
In file included from /opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/algorithm:714:
In file included from /opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__algorithm/nth_element.h:15:
In file included from /opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__algorithm/sort.h:16:
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__algorithm/partial_sort.h:33:87: error: invalid operands to binary expression ('std::__list_iterator<int, void *>' and 'std::__list_iterator<int, void *>')
    typename iterator_traits<_RandomAccessIterator>::difference_type __len = __middle - __first;
                                                                             ~~~~~~~~ ^ ~~~~~~~
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__algorithm/sort.h:506:16: note: in instantiation of function template specialization 'std::__partial_sort<std::__less<int> &, std::__list_iterator<int, void *>>' requested here
        _VSTD::__partial_sort<_Comp_ref>(__first, __last, __last, _Comp_ref(__comp));
               ^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__algorithm/sort.h:517:12: note: in instantiation of function template specialization 'std::sort<std::__list_iterator<int, void *>, std::__less<int>>' requested here
    _VSTD::sort(__first, __last, __less<typename iterator_traits<_RandomAccessIterator>::value_type>());
           ^
<source>:6:7: note: in instantiation of function template specialization 'std::sort<std::__list_iterator<int, void *>>' requested here
        std::sort(begin(data), end(data));
             ^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__iterator/move_iterator.h:151:1: note: candidate template ignored: could not match 'move_iterator' against '__list_iterator'
operator-(const move_iterator<_Iter1>& __x, const move_iterator<_Iter2>& __y)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__iterator/reverse_iterator.h:200:1: note: candidate template ignored: could not match 'reverse_iterator' against '__list_iterator'
operator-(const reverse_iterator<_Iter1>& __x, const reverse_iterator<_Iter2>& __y)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__iterator/wrap_iter.h:259:6: note: candidate template ignored: could not match '__wrap_iter' against '__list_iterator'
auto operator-(const __wrap_iter<_Iter1>& __x, const __wrap_iter<_Iter2>& __y) _NOEXCEPT
     ^
In file included from <source>:1:
In file included from /opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/algorithm:714:
In file included from /opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__algorithm/nth_element.h:15:
In file included from /opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__algorithm/sort.h:16:
In file included from /opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__algorithm/partial_sort.h:17:
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__algorithm/sort_heap.h:30:39: error: invalid operands to binary expression ('std::__list_iterator<int, void *>' and 'std::__list_iterator<int, void *>')
    for (difference_type __n = __last - __first; __n > 1; --__last, (void) --__n)
                               ~~~~~~ ^ ~~~~~~~
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__algorithm/partial_sort.h:42:12: note: in instantiation of function template specialization 'std::__sort_heap<std::__less<int> &, std::__list_iterator<int, void *>>' requested here
    _VSTD::__sort_heap<_Compare>(__first, __middle, __comp);
           ^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__algorithm/sort.h:506:16: note: in instantiation of function template specialization 'std::__partial_sort<std::__less<int> &, std::__list_iterator<int, void *>>' requested here
        _VSTD::__partial_sort<_Comp_ref>(__first, __last, __last, _Comp_ref(__comp));
               ^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__algorithm/sort.h:517:12: note: in instantiation of function template specialization 'std::sort<std::__list_iterator<int, void *>, std::__less<int>>' requested here
    _VSTD::sort(__first, __last, __less<typename iterator_traits<_RandomAccessIterator>::value_type>());
           ^
<source>:6:7: note: in instantiation of function template specialization 'std::sort<std::__list_iterator<int, void *>>' requested here
        std::sort(begin(data), end(data));
             ^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__iterator/move_iterator.h:151:1: note: candidate template ignored: could not match 'move_iterator' against '__list_iterator'
operator-(const move_iterator<_Iter1>& __x, const move_iterator<_Iter2>& __y)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__iterator/reverse_iterator.h:200:1: note: candidate template ignored: could not match 'reverse_iterator' against '__list_iterator'
operator-(const reverse_iterator<_Iter1>& __x, const reverse_iterator<_Iter2>& __y)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__iterator/wrap_iter.h:259:6: note: candidate template ignored: could not match '__wrap_iter' against '__list_iterator'
auto operator-(const __wrap_iter<_Iter1>& __x, const __wrap_iter<_Iter2>& __y) _NOEXCEPT
     ^
<source>:9:8: error: no member named 'cout' in namespace 'std'
                std::cout << i << " ";
                ~~~~~^
<source>:12:7: error: no member named 'cout' in namespace 'std'
        std::cout << "\n";
        ~~~~~^
In file included from <source>:1:
In file included from /opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/algorithm:714:
In file included from /opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__algorithm/nth_element.h:15:
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__algorithm/sort.h:275:40: error: invalid operands to binary expression ('std::__list_iterator<int, void *>' and 'std::__list_iterator<int, void *>')
        difference_type __len = __last - __first;
                                ~~~~~~ ^ ~~~~~~~
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__algorithm/sort.h:508:16: note: in instantiation of function template specialization 'std::__sort<std::__less<int> &, std::__list_iterator<int, void *>>' requested here
        _VSTD::__sort<_Comp_ref>(_VSTD::__unwrap_iter(__first), _VSTD::__unwrap_iter(__last), _Comp_ref(__comp));
               ^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__iterator/move_iterator.h:151:1: note: candidate template ignored: could not match 'move_iterator' against '__list_iterator'
operator-(const move_iterator<_Iter1>& __x, const move_iterator<_Iter2>& __y)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__iterator/reverse_iterator.h:200:1: note: candidate template ignored: could not match 'reverse_iterator' against '__list_iterator'
operator-(const reverse_iterator<_Iter1>& __x, const reverse_iterator<_Iter2>& __y)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__iterator/wrap_iter.h:259:6: note: candidate template ignored: could not match '__wrap_iter' against '__list_iterator'
auto operator-(const __wrap_iter<_Iter1>& __x, const __wrap_iter<_Iter2>& __y) _NOEXCEPT
     ^
In file included from <source>:1:
In file included from /opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/algorithm:714:
In file included from /opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__algorithm/nth_element.h:15:
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__algorithm/sort.h:366:33: error: invalid operands to binary expression ('std::__list_iterator<int, void *>' and 'std::__list_iterator<int, void *>')
                        if (__i >= __j)
                            ~~~ ^  ~~~
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__variant/monostate.h:37:16: note: candidate function not viable: no known conversion from 'std::__list_iterator<int, void *>' to 'std::monostate' for 1st argument
constexpr bool operator>=(monostate, monostate) noexcept { return true; }
               ^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__utility/pair.h:346:1: note: candidate template ignored: could not match 'pair' against '__list_iterator'
operator>=(const pair<_T1,_T2>& __x, const pair<_T1,_T2>& __y)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/tuple:1358:1: note: candidate template ignored: could not match 'tuple' against '__list_iterator'
operator>=(const tuple<_Tp...>& __x, const tuple<_Up...>& __y)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__memory/unique_ptr.h:600:1: note: candidate template ignored: could not match 'unique_ptr' against '__list_iterator'
operator>=(const unique_ptr<_T1, _D1>& __x, const unique_ptr<_T2, _D2>& __y) {return !(__x < __y);}
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__memory/unique_ptr.h:687:1: note: candidate template ignored: could not match 'unique_ptr' against '__list_iterator'
operator>=(const unique_ptr<_T1, _D1>& __x, nullptr_t)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__memory/unique_ptr.h:695:1: note: candidate template ignored: could not match 'unique_ptr' against '__list_iterator'
operator>=(nullptr_t, const unique_ptr<_T1, _D1>& __x)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__memory/shared_ptr.h:1164:1: note: candidate template ignored: could not match 'shared_ptr' against '__list_iterator'
operator>=(const shared_ptr<_Tp>& __x, const shared_ptr<_Up>& __y) _NOEXCEPT
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__memory/shared_ptr.h:1252:1: note: candidate template ignored: could not match 'shared_ptr' against '__list_iterator'
operator>=(const shared_ptr<_Tp>& __x, nullptr_t) _NOEXCEPT
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__memory/shared_ptr.h:1260:1: note: candidate template ignored: could not match 'shared_ptr' against '__list_iterator'
operator>=(nullptr_t, const shared_ptr<_Tp>& __x) _NOEXCEPT
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/variant:1668:16: note: candidate template ignored: could not match 'variant' against '__list_iterator'
constexpr bool operator>=(const variant<_Types...>& __lhs,
               ^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__iterator/move_iterator.h:134:1: note: candidate template ignored: could not match 'move_iterator' against '__list_iterator'
operator>=(const move_iterator<_Iter1>& __x, const move_iterator<_Iter2>& __y)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__iterator/reverse_iterator.h:183:1: note: candidate template ignored: could not match 'reverse_iterator' against '__list_iterator'
operator>=(const reverse_iterator<_Iter1>& __x, const reverse_iterator<_Iter2>& __y)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__iterator/wrap_iter.h:230:6: note: candidate template ignored: could not match '__wrap_iter' against '__list_iterator'
bool operator>=(const __wrap_iter<_Iter1>& __x, const __wrap_iter<_Iter1>& __y) _NOEXCEPT
     ^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__iterator/wrap_iter.h:237:6: note: candidate template ignored: could not match '__wrap_iter' against '__list_iterator'
bool operator>=(const __wrap_iter<_Iter1>& __x, const __wrap_iter<_Iter2>& __y) _NOEXCEPT
     ^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/list:2454:1: note: candidate template ignored: could not match 'list' against '__list_iterator'
operator>=(const list<_Tp, _Alloc>& __x, const list<_Tp, _Alloc>& __y)
^
In file included from <source>:1:
In file included from /opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/algorithm:714:
In file included from /opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__algorithm/nth_element.h:15:
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__algorithm/sort.h:390:17: error: invalid operands to binary expression ('std::__list_iterator<int, void *>' and 'std::__list_iterator<int, void *>')
        if (__i < __j)
            ~~~ ^ ~~~
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__variant/monostate.h:28:16: note: candidate function not viable: no known conversion from 'std::__list_iterator<int, void *>' to 'std::monostate' for 1st argument
constexpr bool operator<(monostate, monostate) noexcept { return false; }
               ^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__utility/pair.h:330:1: note: candidate template ignored: could not match 'pair' against '__list_iterator'
operator< (const pair<_T1,_T2>& __x, const pair<_T1,_T2>& __y)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/tuple:1341:1: note: candidate template ignored: could not match 'tuple' against '__list_iterator'
operator<(const tuple<_Tp...>& __x, const tuple<_Up...>& __y)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__memory/unique_ptr.h:579:1: note: candidate template ignored: could not match 'unique_ptr' against '__list_iterator'
operator< (const unique_ptr<_T1, _D1>& __x, const unique_ptr<_T2, _D2>& __y)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__memory/unique_ptr.h:637:1: note: candidate template ignored: could not match 'unique_ptr' against '__list_iterator'
operator<(const unique_ptr<_T1, _D1>& __x, nullptr_t)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__memory/unique_ptr.h:646:1: note: candidate template ignored: could not match 'unique_ptr' against '__list_iterator'
operator<(nullptr_t, const unique_ptr<_T1, _D1>& __x)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__memory/shared_ptr.h:1134:1: note: candidate template ignored: could not match 'shared_ptr' against '__list_iterator'
operator<(const shared_ptr<_Tp>& __x, const shared_ptr<_Up>& __y) _NOEXCEPT
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__memory/shared_ptr.h:1204:1: note: candidate template ignored: could not match 'shared_ptr' against '__list_iterator'
operator<(const shared_ptr<_Tp>& __x, nullptr_t) _NOEXCEPT
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__memory/shared_ptr.h:1212:1: note: candidate template ignored: could not match 'shared_ptr' against '__list_iterator'
operator<(nullptr_t, const shared_ptr<_Tp>& __x) _NOEXCEPT
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/variant:1631:16: note: candidate template ignored: could not match 'variant' against '__list_iterator'
constexpr bool operator<(const variant<_Types...>& __lhs,
               ^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__iterator/move_iterator.h:110:1: note: candidate template ignored: could not match 'move_iterator' against '__list_iterator'
operator<(const move_iterator<_Iter1>& __x, const move_iterator<_Iter2>& __y)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__iterator/reverse_iterator.h:159:1: note: candidate template ignored: could not match 'reverse_iterator' against '__list_iterator'
operator<(const reverse_iterator<_Iter1>& __x, const reverse_iterator<_Iter2>& __y)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__iterator/wrap_iter.h:180:6: note: candidate template ignored: could not match '__wrap_iter' against '__list_iterator'
bool operator<(const __wrap_iter<_Iter1>& __x, const __wrap_iter<_Iter1>& __y) _NOEXCEPT
     ^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__iterator/wrap_iter.h:191:6: note: candidate template ignored: could not match '__wrap_iter' against '__list_iterator'
bool operator<(const __wrap_iter<_Iter1>& __x, const __wrap_iter<_Iter2>& __y) _NOEXCEPT
     ^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/list:2430:1: note: candidate template ignored: could not match 'list' against '__list_iterator'
operator< (const list<_Tp, _Alloc>& __x, const list<_Tp, _Alloc>& __y)
^
In file included from <source>:1:
In file included from /opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/algorithm:714:
In file included from /opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__algorithm/nth_element.h:15:
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__algorithm/sort.h:424:65: error: invalid operands to binary expression ('std::__list_iterator<int, void *>' and 'int')
            if (_VSTD::__insertion_sort_incomplete<_Compare>(__i+1, __last, __comp))
                                                             ~~~^~
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__iterator/move_iterator.h:169:1: note: candidate template ignored: could not match 'move_iterator<type-parameter-0-0>' against 'int'
operator+(typename move_iterator<_Iter>::difference_type __n, const move_iterator<_Iter>& __x)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__iterator/reverse_iterator.h:218:1: note: candidate template ignored: could not match 'reverse_iterator<type-parameter-0-0>' against 'int'
operator+(typename reverse_iterator<_Iter>::difference_type __n, const reverse_iterator<_Iter>& __x)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__iterator/wrap_iter.h:275:21: note: candidate template ignored: could not match '__wrap_iter<type-parameter-0-0>' against 'int'
__wrap_iter<_Iter1> operator+(typename __wrap_iter<_Iter1>::difference_type __n, __wrap_iter<_Iter1> __x) _NOEXCEPT
                    ^
In file included from <source>:1:
In file included from /opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/algorithm:714:
In file included from /opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__algorithm/nth_element.h:15:
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__algorithm/sort.h:441:17: error: invalid operands to binary expression ('std::__list_iterator<int, void *>' and 'std::__list_iterator<int, void *>')
        if (__i - __first < __last - __i)
            ~~~ ^ ~~~~~~~
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__iterator/move_iterator.h:151:1: note: candidate template ignored: could not match 'move_iterator' against '__list_iterator'
operator-(const move_iterator<_Iter1>& __x, const move_iterator<_Iter2>& __y)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__iterator/reverse_iterator.h:200:1: note: candidate template ignored: could not match 'reverse_iterator' against '__list_iterator'
operator-(const reverse_iterator<_Iter1>& __x, const reverse_iterator<_Iter2>& __y)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__iterator/wrap_iter.h:259:6: note: candidate template ignored: could not match '__wrap_iter' against '__list_iterator'
auto operator-(const __wrap_iter<_Iter1>& __x, const __wrap_iter<_Iter2>& __y) _NOEXCEPT
     ^
In file included from <source>:1:
In file included from /opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/algorithm:714:
In file included from /opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__algorithm/nth_element.h:15:
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__algorithm/sort.h:184:20: error: invalid operands to binary expression ('std::__list_iterator<int, void *>' and 'std::__list_iterator<int, void *>')
    switch (__last - __first)
            ~~~~~~ ^ ~~~~~~~
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__algorithm/sort.h:423:32: note: in instantiation of function template specialization 'std::__insertion_sort_incomplete<std::__less<int> &, std::__list_iterator<int, void *>>' requested here
            bool __fs = _VSTD::__insertion_sort_incomplete<_Compare>(__first, __i, __comp);
                               ^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__algorithm/sort.h:508:16: note: in instantiation of function template specialization 'std::__sort<std::__less<int> &, std::__list_iterator<int, void *>>' requested here
        _VSTD::__sort<_Comp_ref>(_VSTD::__unwrap_iter(__first), _VSTD::__unwrap_iter(__last), _Comp_ref(__comp));
               ^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__iterator/move_iterator.h:151:1: note: candidate template ignored: could not match 'move_iterator' against '__list_iterator'
operator-(const move_iterator<_Iter1>& __x, const move_iterator<_Iter2>& __y)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__iterator/reverse_iterator.h:200:1: note: candidate template ignored: could not match 'reverse_iterator' against '__list_iterator'
operator-(const reverse_iterator<_Iter1>& __x, const reverse_iterator<_Iter2>& __y)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__iterator/wrap_iter.h:259:6: note: candidate template ignored: could not match '__wrap_iter' against '__list_iterator'
auto operator-(const __wrap_iter<_Iter1>& __x, const __wrap_iter<_Iter2>& __y) _NOEXCEPT
     ^
In file included from <source>:1:
In file included from /opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/algorithm:714:
In file included from /opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__algorithm/nth_element.h:15:
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__algorithm/sort.h:204:40: error: invalid operands to binary expression ('std::__list_iterator<int, void *>' and 'int')
    _RandomAccessIterator __j = __first+2;
                                ~~~~~~~^~
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__iterator/move_iterator.h:169:1: note: candidate template ignored: could not match 'move_iterator<type-parameter-0-0>' against 'int'
operator+(typename move_iterator<_Iter>::difference_type __n, const move_iterator<_Iter>& __x)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__iterator/reverse_iterator.h:218:1: note: candidate template ignored: could not match 'reverse_iterator<type-parameter-0-0>' against 'int'
operator+(typename reverse_iterator<_Iter>::difference_type __n, const reverse_iterator<_Iter>& __x)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__iterator/wrap_iter.h:275:21: note: candidate template ignored: could not match '__wrap_iter<type-parameter-0-0>' against 'int'
__wrap_iter<_Iter1> operator+(typename __wrap_iter<_Iter1>::difference_type __n, __wrap_iter<_Iter1> __x) _NOEXCEPT
                    ^
In file included from <source>:1:
In file included from /opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/algorithm:714:
In file included from /opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__algorithm/nth_element.h:15:
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__algorithm/sort.h:205:46: error: invalid operands to binary expression ('std::__list_iterator<int, void *>' and 'int')
    _VSTD::__sort3<_Compare>(__first, __first+1, __j, __comp);
                                      ~~~~~~~^~
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__iterator/move_iterator.h:169:1: note: candidate template ignored: could not match 'move_iterator<type-parameter-0-0>' against 'int'
operator+(typename move_iterator<_Iter>::difference_type __n, const move_iterator<_Iter>& __x)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__iterator/reverse_iterator.h:218:1: note: candidate template ignored: could not match 'reverse_iterator<type-parameter-0-0>' against 'int'
operator+(typename reverse_iterator<_Iter>::difference_type __n, const reverse_iterator<_Iter>& __x)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/__iterator/wrap_iter.h:275:21: note: candidate template ignored: could not match '__wrap_iter<type-parameter-0-0>' against 'int'
__wrap_iter<_Iter1> operator+(typename __wrap_iter<_Iter1>::difference_type __n, __wrap_iter<_Iter1> __x) _NOEXCEPT
                    ^
13 errors generated.
Compiler returned: 1
```
