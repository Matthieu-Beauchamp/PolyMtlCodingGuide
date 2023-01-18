# Covered features
- 50: pointer and reference alignement
- 60: short ifs should not be on a single line
- 67: tab width = 4
- 68 to 77: brace placements
- 82, 83: try to align most things

38 45, 55, 59 are missing
# Limitations (1 to 42)
- 1: Rights to break the guide
  
## General naming conventions
- 2: All types must have CamelCase
- 3: variables use smallCase
- 4: Macros use SCREAMING_CASE
- 5: functions start with a verb and use smallCase
- 6: namespaces should be a single lowercase word
- 7: generic types should be single letter
- 8: the key word 'typename' should be used in templates (not 'class')
- 9: acronyms should not be put in Caps in variables (exportHtmlSource instead of exportHTMLSource)
- 10: global variables should be accessed with ::var
- 11: private members should end with _
- 12: variables should be named according to their type, either Topic topic or Point startingPoint
- 13: Language must be uniform (all french or all english)
- 14: variable name should be proportionnal to their scope
- 15: method names should not have the class's name in it

## Specific naming conventions
- 16: get/set methods should be prefixed as such
- 17: compute should be a prefix for computationnaly expensive functions
- 18: find should be prefixed for searching functions
- 19: init should be prefixed to intializing methods
- 20: variables of GUI components should have their types suffixed
- 21: collection variables should be plural
- 22: n should be prefixed to quantity variables
- 23: No should be suffixed for representing the number of an entity (or id?)
- 24: use i, j, k for iteration variables, but never l
- 25: boolean variables should be named with 'is', 'has', etc.
- 26: complementary names should be used for complementary methods (begin, end), (create, destroy), etc.
- 27: Abbreviations should be avoided in names
- 28: pointer variables should not have specific naming (ie pType, typePtr)
- 29: bool variables should not have negated semantics (ie isNotDone)
- 30: enum class should be prefered over enums, global enums should be prefixed with their type's name
- 31: exception classes should be suffixed as such
- 32: functions should be named after what they return, or what they do if they return void

## Files
- 33: Souce files must always have description, \file \author \date and creation date
- 34: extensions should be .cpp and .hpp (.h accepted)
- 35: classes should be declared in header and defined in source file (this is irrelevant for templates)
- 36: see 35
- 37: code must never use more than 80 columns
- 38: N/A (Missing from specification)
- 39: lines should be split in a readable way

## Header files
- 40: header files must use #pragma once or header guards
- 41: includes should be grouped and sorted: class.h, std, third parties, our libs
- 42: includes must only be done at the beginning of file

## Declarations
- 43: types local to a single file should be declared in that file (.cpp ?) -> hide from users
- 44: classes should be presented: public, protected, private
- 45: N/A missing from specifications

## Variables
- 46: variables should be initialized at declaration
- 47: variables should have a single meaning/usage
- 48: global variables should be avoided (constants are ok)
- 49: classes should not use public variables
- 51: comparison with 0 should be made explicitly (except for bools)
- 52: variables should have minimal lifetime

## Loops
- 53: ... don't do random stuff in for loop construction
- 54: loop variables should be initialized immidiately before the loop
- 55: N/A missing from specification
- 56: break and continue should be avoided
- 57: while(true) must be used for infinite loops

## Conditionnals
- 58: Use boolean intermediates instead of complex conditions
- 59: N/A missing from specification
- 61: no execution (by function calls) should be done in conditions

## Miscelleanous
- 62: constants should be named (no magic numbers)
- 63: floating point values should always be written with at least one digit on each side of '.'
- 64: nullptr should be used instead of NULL or 0
- 65: global functions should be minimized (use class methods)
- 66: goto should be avoided

## Dispositions
- 78: single line loops and control statements may be written without brackets, on a separate line

## Whitespaces
- 81: logical blocks should be separated by newlines
- 82: method definitions should be separated by 2 empty lines



# Specification
https://moodle.polymtl.ca/mod/resource/view.php?id=419327

# Documentation for clang-format
https://clang.llvm.org/docs/ClangFormatStyleOptions.html
