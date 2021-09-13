# Compiler output - sorting list

## Clang without concepts

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
<source>:7:7: note: in instantiation of function template specialization 'std::sort<std::__list_iterator<int, void *>>' requested here
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
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:576:11: note: candidate template ignored: could not match 'fpos' against '__list_iterator'
streamoff operator-(const fpos<_StateT>& __x, const fpos<_StateT>& __y)
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
<source>:7:7: note: in instantiation of function template specialization 'std::sort<std::__list_iterator<int, void *>>' requested here
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
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:576:11: note: candidate template ignored: could not match 'fpos' against '__list_iterator'
streamoff operator-(const fpos<_StateT>& __x, const fpos<_StateT>& __y)
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
<source>:7:7: note: in instantiation of function template specialization 'std::sort<std::__list_iterator<int, void *>>' requested here
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
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:576:11: note: candidate template ignored: could not match 'fpos' against '__list_iterator'
streamoff operator-(const fpos<_StateT>& __x, const fpos<_StateT>& __y)
          ^
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
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:576:11: note: candidate template ignored: could not match 'fpos' against '__list_iterator'
streamoff operator-(const fpos<_StateT>& __x, const fpos<_StateT>& __y)
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
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string_view:812:6: note: candidate template ignored: could not match 'basic_string_view' against '__list_iterator'
bool operator>=(basic_string_view<_CharT, _Traits> __lhs, basic_string_view<_CharT, _Traits> __rhs) _NOEXCEPT
     ^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string_view:820:6: note: candidate template ignored: could not match 'basic_string_view' against '__list_iterator'
bool operator>=(basic_string_view<_CharT, _Traits> __lhs,
     ^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string_view:828:6: note: candidate template ignored: could not match 'basic_string_view' against '__list_iterator'
bool operator>=(typename common_type<basic_string_view<_CharT, _Traits> >::type __lhs,
     ^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:4232:1: note: candidate template ignored: could not match 'basic_string' against '__list_iterator'
operator>=(const basic_string<_CharT, _Traits, _Allocator>& __lhs,
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:4241:1: note: candidate template ignored: could not match 'basic_string' against '__list_iterator'
operator>=(const basic_string<_CharT, _Traits, _Allocator>& __lhs,
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:4250:1: note: candidate template ignored: could not match 'const _CharT *' against 'std::__list_iterator<int, void *>'
operator>=(const _CharT* __lhs,
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
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/system_error:307:1: note: candidate function not viable: no known conversion from 'std::__list_iterator<int, void *>' to 'const std::error_condition' for 1st argument
operator<(const error_condition& __x, const error_condition& __y) _NOEXCEPT
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/system_error:383:1: note: candidate function not viable: no known conversion from 'std::__list_iterator<int, void *>' to 'const std::error_code' for 1st argument
operator<(const error_code& __x, const error_code& __y) _NOEXCEPT
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
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string_view:737:6: note: candidate template ignored: could not match 'basic_string_view' against '__list_iterator'
bool operator<(basic_string_view<_CharT, _Traits> __lhs, basic_string_view<_CharT, _Traits> __rhs) _NOEXCEPT
     ^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string_view:744:6: note: candidate template ignored: could not match 'basic_string_view' against '__list_iterator'
bool operator<(basic_string_view<_CharT, _Traits> __lhs,
     ^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string_view:752:6: note: candidate template ignored: could not match 'basic_string_view' against '__list_iterator'
bool operator<(typename common_type<basic_string_view<_CharT, _Traits> >::type __lhs,
     ^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:4145:1: note: candidate template ignored: could not match 'basic_string' against '__list_iterator'
operator< (const basic_string<_CharT, _Traits, _Allocator>& __lhs,
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:4154:1: note: candidate template ignored: could not match 'basic_string' against '__list_iterator'
operator< (const basic_string<_CharT, _Traits, _Allocator>& __lhs,
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:4163:1: note: candidate template ignored: could not match 'const _CharT *' against 'std::__list_iterator<int, void *>'
operator< (const _CharT* __lhs,
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
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:4260:1: note: candidate template ignored: could not match 'basic_string' against '__list_iterator'
operator+(const basic_string<_CharT, _Traits, _Allocator>& __lhs,
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:4273:1: note: candidate template ignored: could not match 'const _CharT *' against 'std::__list_iterator<int, void *>'
operator+(const _CharT* __lhs , const basic_string<_CharT,_Traits,_Allocator>& __rhs)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:4285:1: note: candidate template ignored: could not match 'basic_string<type-parameter-0-0, type-parameter-0-1, type-parameter-0-2>' against 'int'
operator+(_CharT __lhs, const basic_string<_CharT,_Traits,_Allocator>& __rhs)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:4297:1: note: candidate template ignored: could not match 'basic_string' against '__list_iterator'
operator+(const basic_string<_CharT, _Traits, _Allocator>& __lhs, const _CharT* __rhs)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:4309:1: note: candidate template ignored: could not match 'basic_string' against '__list_iterator'
operator+(const basic_string<_CharT, _Traits, _Allocator>& __lhs, _CharT __rhs)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:4323:1: note: candidate template ignored: could not match 'basic_string' against '__list_iterator'
operator+(basic_string<_CharT, _Traits, _Allocator>&& __lhs, const basic_string<_CharT, _Traits, _Allocator>& __rhs)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:4331:1: note: candidate template ignored: could not match 'basic_string' against '__list_iterator'
operator+(const basic_string<_CharT, _Traits, _Allocator>& __lhs, basic_string<_CharT, _Traits, _Allocator>&& __rhs)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:4339:1: note: candidate template ignored: could not match 'basic_string' against '__list_iterator'
operator+(basic_string<_CharT, _Traits, _Allocator>&& __lhs, basic_string<_CharT, _Traits, _Allocator>&& __rhs)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:4347:1: note: candidate template ignored: could not match 'const _CharT *' against 'std::__list_iterator<int, void *>'
operator+(const _CharT* __lhs , basic_string<_CharT,_Traits,_Allocator>&& __rhs)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:4355:1: note: candidate template ignored: could not match 'basic_string<type-parameter-0-0, type-parameter-0-1, type-parameter-0-2>' against 'int'
operator+(_CharT __lhs, basic_string<_CharT,_Traits,_Allocator>&& __rhs)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:4364:1: note: candidate template ignored: could not match 'basic_string' against '__list_iterator'
operator+(basic_string<_CharT, _Traits, _Allocator>&& __lhs, const _CharT* __rhs)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:4372:1: note: candidate template ignored: could not match 'basic_string' against '__list_iterator'
operator+(basic_string<_CharT, _Traits, _Allocator>&& __lhs, _CharT __rhs)
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
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:576:11: note: candidate template ignored: could not match 'fpos' against '__list_iterator'
streamoff operator-(const fpos<_StateT>& __x, const fpos<_StateT>& __y)
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
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:576:11: note: candidate template ignored: could not match 'fpos' against '__list_iterator'
streamoff operator-(const fpos<_StateT>& __x, const fpos<_StateT>& __y)
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
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:4260:1: note: candidate template ignored: could not match 'basic_string' against '__list_iterator'
operator+(const basic_string<_CharT, _Traits, _Allocator>& __lhs,
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:4273:1: note: candidate template ignored: could not match 'const _CharT *' against 'std::__list_iterator<int, void *>'
operator+(const _CharT* __lhs , const basic_string<_CharT,_Traits,_Allocator>& __rhs)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:4285:1: note: candidate template ignored: could not match 'basic_string<type-parameter-0-0, type-parameter-0-1, type-parameter-0-2>' against 'int'
operator+(_CharT __lhs, const basic_string<_CharT,_Traits,_Allocator>& __rhs)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:4297:1: note: candidate template ignored: could not match 'basic_string' against '__list_iterator'
operator+(const basic_string<_CharT, _Traits, _Allocator>& __lhs, const _CharT* __rhs)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:4309:1: note: candidate template ignored: could not match 'basic_string' against '__list_iterator'
operator+(const basic_string<_CharT, _Traits, _Allocator>& __lhs, _CharT __rhs)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:4323:1: note: candidate template ignored: could not match 'basic_string' against '__list_iterator'
operator+(basic_string<_CharT, _Traits, _Allocator>&& __lhs, const basic_string<_CharT, _Traits, _Allocator>& __rhs)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:4331:1: note: candidate template ignored: could not match 'basic_string' against '__list_iterator'
operator+(const basic_string<_CharT, _Traits, _Allocator>& __lhs, basic_string<_CharT, _Traits, _Allocator>&& __rhs)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:4339:1: note: candidate template ignored: could not match 'basic_string' against '__list_iterator'
operator+(basic_string<_CharT, _Traits, _Allocator>&& __lhs, basic_string<_CharT, _Traits, _Allocator>&& __rhs)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:4347:1: note: candidate template ignored: could not match 'const _CharT *' against 'std::__list_iterator<int, void *>'
operator+(const _CharT* __lhs , basic_string<_CharT,_Traits,_Allocator>&& __rhs)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:4355:1: note: candidate template ignored: could not match 'basic_string<type-parameter-0-0, type-parameter-0-1, type-parameter-0-2>' against 'int'
operator+(_CharT __lhs, basic_string<_CharT,_Traits,_Allocator>&& __rhs)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:4364:1: note: candidate template ignored: could not match 'basic_string' against '__list_iterator'
operator+(basic_string<_CharT, _Traits, _Allocator>&& __lhs, const _CharT* __rhs)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:4372:1: note: candidate template ignored: could not match 'basic_string' against '__list_iterator'
operator+(basic_string<_CharT, _Traits, _Allocator>&& __lhs, _CharT __rhs)
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
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:4260:1: note: candidate template ignored: could not match 'basic_string' against '__list_iterator'
operator+(const basic_string<_CharT, _Traits, _Allocator>& __lhs,
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:4273:1: note: candidate template ignored: could not match 'const _CharT *' against 'std::__list_iterator<int, void *>'
operator+(const _CharT* __lhs , const basic_string<_CharT,_Traits,_Allocator>& __rhs)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:4285:1: note: candidate template ignored: could not match 'basic_string<type-parameter-0-0, type-parameter-0-1, type-parameter-0-2>' against 'int'
operator+(_CharT __lhs, const basic_string<_CharT,_Traits,_Allocator>& __rhs)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:4297:1: note: candidate template ignored: could not match 'basic_string' against '__list_iterator'
operator+(const basic_string<_CharT, _Traits, _Allocator>& __lhs, const _CharT* __rhs)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:4309:1: note: candidate template ignored: could not match 'basic_string' against '__list_iterator'
operator+(const basic_string<_CharT, _Traits, _Allocator>& __lhs, _CharT __rhs)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:4323:1: note: candidate template ignored: could not match 'basic_string' against '__list_iterator'
operator+(basic_string<_CharT, _Traits, _Allocator>&& __lhs, const basic_string<_CharT, _Traits, _Allocator>& __rhs)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:4331:1: note: candidate template ignored: could not match 'basic_string' against '__list_iterator'
operator+(const basic_string<_CharT, _Traits, _Allocator>& __lhs, basic_string<_CharT, _Traits, _Allocator>&& __rhs)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:4339:1: note: candidate template ignored: could not match 'basic_string' against '__list_iterator'
operator+(basic_string<_CharT, _Traits, _Allocator>&& __lhs, basic_string<_CharT, _Traits, _Allocator>&& __rhs)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:4347:1: note: candidate template ignored: could not match 'const _CharT *' against 'std::__list_iterator<int, void *>'
operator+(const _CharT* __lhs , basic_string<_CharT,_Traits,_Allocator>&& __rhs)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:4355:1: note: candidate template ignored: could not match 'basic_string<type-parameter-0-0, type-parameter-0-1, type-parameter-0-2>' against 'int'
operator+(_CharT __lhs, basic_string<_CharT,_Traits,_Allocator>&& __rhs)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:4364:1: note: candidate template ignored: could not match 'basic_string' against '__list_iterator'
operator+(basic_string<_CharT, _Traits, _Allocator>&& __lhs, const _CharT* __rhs)
^
/opt/compiler-explorer/clang-trunk-20210913/bin/../include/c++/v1/string:4372:1: note: candidate template ignored: could not match 'basic_string' against '__list_iterator'
operator+(basic_string<_CharT, _Traits, _Allocator>&& __lhs, _CharT __rhs)
^
11 errors generated.
Compiler returned: 1
```

## GCC without concepts

```

In file included from /opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/algorithm:61,
                 from <source>:1:
/opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/bits/stl_algo.h: In instantiation of 'constexpr void std::__sort(_RandomAccessIterator, _RandomAccessIterator, _Compare) [with _RandomAccessIterator = std::_List_iterator<int>; _Compare = __gnu_cxx::__ops::_Iter_less_iter]':
/opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/bits/stl_algo.h:4835:18:   required from 'constexpr void std::sort(_RAIter, _RAIter) [with _RAIter = std::_List_iterator<int>]'
<source>:7:11:   required from here
/opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/bits/stl_algo.h:1958:50: error: no match for 'operator-' (operand types are 'std::_List_iterator<int>' and 'std::_List_iterator<int>')
 1958 |                                 std::__lg(__last - __first) * 2,
      |                                           ~~~~~~~^~~~~~~~~
In file included from /opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/bits/stl_algobase.h:67,
                 from /opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/algorithm:60,
                 from <source>:1:
/opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/bits/stl_iterator.h:586:5: note: candidate: 'template<class _IteratorL, class _IteratorR> constexpr decltype ((__y.base() - __x.base())) std::operator-(const std::reverse_iterator<_IteratorL>&, const std::reverse_iterator<_IteratorR>&)'
  586 |     operator-(const reverse_iterator<_IteratorL>& __x,
      |     ^~~~~~~~
/opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/bits/stl_iterator.h:586:5: note:   template argument deduction/substitution failed:
In file included from /opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/algorithm:61,
                 from <source>:1:
/opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/bits/stl_algo.h:1958:50: note:   'std::_List_iterator<int>' is not derived from 'const std::reverse_iterator<_IteratorL>'
 1958 |                                 std::__lg(__last - __first) * 2,
      |                                           ~~~~~~~^~~~~~~~~
In file included from /opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/bits/stl_algobase.h:67,
                 from /opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/algorithm:60,
                 from <source>:1:
/opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/bits/stl_iterator.h:1692:5: note: candidate: 'template<class _IteratorL, class _IteratorR> constexpr decltype ((__x.base() - __y.base())) std::operator-(const std::move_iterator<_IteratorL>&, const std::move_iterator<_IteratorR>&)'
 1692 |     operator-(const move_iterator<_IteratorL>& __x,
      |     ^~~~~~~~
/opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/bits/stl_iterator.h:1692:5: note:   template argument deduction/substitution failed:
In file included from /opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/algorithm:61,
                 from <source>:1:
/opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/bits/stl_algo.h:1958:50: note:   'std::_List_iterator<int>' is not derived from 'const std::move_iterator<_IteratorL>'
 1958 |                                 std::__lg(__last - __first) * 2,
      |                                           ~~~~~~~^~~~~~~~~
Compiler returned: 1
```

## GCC with concepts

```
<source>: In function 'int main()':
<source>:7:26: error: no match for call to '(const std::ranges::__sort_fn) (std::__cxx11::list<int>::iterator, std::__cxx11::list<int>::iterator)'
    7 |         std::ranges::sort(begin(data), end(data));
      |         ~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/algorithm:63,
                 from <source>:1:
/opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/bits/ranges_algo.h:1814:7: note: candidate: 'template<class _Iter, class _Sent, class _Comp, class _Proj>  requires (random_access_iterator<_Iter>) && (sentinel_for<_Sent, _Iter>) && (sortable<_Iter, _Comp, _Proj>) constexpr _Iter std::ranges::__sort_fn::operator()(_Iter, _Sent, _Comp, _Proj) const'
 1814 |       operator()(_Iter __first, _Sent __last,
      |       ^~~~~~~~
/opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/bits/ranges_algo.h:1814:7: note:   template argument deduction/substitution failed:
/opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/bits/ranges_algo.h:1814:7: note: constraints not satisfied
In file included from /opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/compare:39,
                 from /opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/bits/stl_pair.h:65,
                 from /opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/bits/stl_algobase.h:64,
                 from /opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/algorithm:60,
                 from <source>:1:
/opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/concepts: In substitution of 'template<class _Iter, class _Sent, class _Comp, class _Proj>  requires (random_access_iterator<_Iter>) && (sentinel_for<_Sent, _Iter>) && (sortable<_Iter, _Comp, _Proj>) constexpr _Iter std::ranges::__sort_fn::operator()(_Iter, _Sent, _Comp, _Proj) const [with _Iter = std::_List_iterator<int>; _Sent = std::_List_iterator<int>; _Comp = std::ranges::less; _Proj = std::identity]':
<source>:7:19:   required from here
/opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/concepts:67:13:   required for the satisfaction of 'derived_from<typename std::__detail::__iter_concept_impl<_Iter>::type, std::random_access_iterator_tag>' [with _Iter = std::_List_iterator<int>]
/opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/bits/iterator_concepts.h:662:13:   required for the satisfaction of 'random_access_iterator<_Iter>' [with _Iter = std::_List_iterator<int>]
/opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/concepts:67:28: note:   'std::random_access_iterator_tag' is not a base of 'std::bidirectional_iterator_tag'
   67 |     concept derived_from = __is_base_of(_Base, _Derived)
      |                            ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/algorithm:63,
                 from <source>:1:
/opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/bits/ranges_algo.h:1827:7: note: candidate: 'template<class _Range, class _Comp, class _Proj>  requires (random_access_range<_Range>) && (sortable<decltype(std::ranges::__cust_access::__begin((declval<_Container&>)())), _Comp, _Proj>) constexpr std::ranges::borrowed_iterator_t<_Range> std::ranges::__sort_fn::operator()(_Range&&, _Comp, _Proj) const'
 1827 |       operator()(_Range&& __r, _Comp __comp = {}, _Proj __proj = {}) const
      |       ^~~~~~~~
/opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/bits/ranges_algo.h:1827:7: note:   template argument deduction/substitution failed:
/opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/bits/ranges_algo.h:1827:7: note: constraints not satisfied
In file included from /opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/string_view:48,
                 from /opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/bits/basic_string.h:48,
                 from /opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/string:55,
                 from /opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/bits/locale_classes.h:40,
                 from /opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/bits/ios_base.h:41,
                 from /opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/streambuf:41,
                 from /opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/bits/streambuf_iterator.h:35,
                 from /opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/iterator:66,
                 from /opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/bits/ranges_algobase.h:36,
                 from /opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/bits/ranges_algo.h:35,
                 from /opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/algorithm:63,
                 from <source>:1:
/opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/bits/ranges_base.h: In substitution of 'template<class _Range, class _Comp, class _Proj>  requires (random_access_range<_Range>) && (sortable<decltype(std::ranges::__cust_access::__begin((declval<_Container&>)())), _Comp, _Proj>) constexpr std::ranges::borrowed_iterator_t<_Range> std::ranges::__sort_fn::operator()(_Range&&, _Comp, _Proj) const [with _Range = std::_List_iterator<int>; _Comp = std::_List_iterator<int>; _Proj = std::identity]':
<source>:7:19:   required from here
/opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/bits/ranges_base.h:579:13:   required for the satisfaction of 'range<_Tp>' [with _Tp = std::_List_iterator<int>]
/opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/bits/ranges_base.h:638:13:   required for the satisfaction of 'input_range<_Tp>' [with _Tp = std::_List_iterator<int>]
/opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/bits/ranges_base.h:642:13:   required for the satisfaction of 'forward_range<_Tp>' [with _Tp = std::_List_iterator<int>]
/opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/bits/ranges_base.h:647:13:   required for the satisfaction of 'bidirectional_range<_Tp>' [with _Tp = std::_List_iterator<int>]
/opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/bits/ranges_base.h:652:13:   required for the satisfaction of 'random_access_range<_Range>' [with _Range = std::_List_iterator<int>]
/opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/bits/ranges_base.h:579:21:   in requirements with '_Tp& __t' [with _Tp = std::_List_iterator<int>]
/opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/bits/ranges_base.h:581:22: note: the required expression 'std::ranges::__cust::begin(__t)' is invalid
  581 |         ranges::begin(__t);
      |         ~~~~~~~~~~~~~^~~~~
/opt/compiler-explorer/gcc-trunk-20210910/include/c++/12.0.0/bits/ranges_base.h:582:20: note: the required expression 'std::ranges::__cust::end(__t)' is invalid
  582 |         ranges::end(__t);
      |         ~~~~~~~~~~~^~~~~
cc1plus: note: set '-fconcepts-diagnostics-depth=' to at least 2 for more detail
Compiler returned: 1
```
