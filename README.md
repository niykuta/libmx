# libmx

**libmx** is a utility library for C programming, offering a wide range of functions for string manipulation, memory management, arrays, and data structures.

## Key Features:

- **Utils pack**:
  - `mx_printchar` 
  - `mx_print_unicode`
  - `mx_printstr` 
  - `mx_print_strarr` 
  - `mx_printint` 
  - `mx_pow` 
  - `mx_sqrt`
  - `mx_nbr_to_hex` 
  - `mx_hex_to_nbr` 
  - `mx_itoa`
  - `mx_foreach`
  - `mx_binary_search` 
  - `mx_bubble_sort` 
  - `mx_quicksort` 

- **String pack**:
  - `mx_strlen` 
  - `mx_swap_char` 
  - `mx_str_reverse`
  - `mx_strdel` 
  - `mx_del_strarr` 
  - `mx_get_char_index`
  - `mx_strdup`
  - `mx_strndup` 
  - `mx_strcpy` 
  - `mx_strncpy`
  - `mx_strcmp` 
  - `mx_strcat`
  - `mx_strstr`
  - `mx_get_substr_index` 
  - `mx_count_substr`
  - `mx_count_words`
  - `mx_strnew` 
  - `mx_strtrim`
  - `mx_del_extra_spaces`
  - `mx_strsplit`
  - `mx_strjoin` 
  - `mx_file_to_str`
  - `mx_replace_substr` 
  - `mx_read_line`
  
- **Memory pack**:
  - `mx_memset` 
  - `mx_memcpy` 
  - `mx_memccpy` 
  - `mx_memcmp`
  - `mx_memchr` 
  - `mx_memrchr`
  - `mx_memmem`
  - `mx_memmove` 
  - `mx_realloc`
    
- **List pack**:
  - `mx_create_node` 
  - `mx_push_front` 
  - `mx_push_back` 
  - `mx_pop_front`
  - `mx_pop_back` 
  - `mx_list_size`
  - `mx_sort_list`

- **Extra pack**:
  - `mx_isspace` 
  - `mx_memrcpy` 
  - `mx_strchr` 
  - `mx_strncmp` 
  - `mx_swap_str`
  
## Usage Example:
```c
#include "libmx.h"

int main() {
    mx_printstr("Hello, world!\n");
    return 0;
}
