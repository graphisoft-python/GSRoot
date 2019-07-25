# Class Guid

## Inherit

* object


## Methods

```
__init__(self) -> None
__init__(self,unicode) -> None
__eq__(self,Guid) -> bool
__ne__(self,Guid) -> bool
__lt__(self,Guid) -> bool
__gt__(self,Guid) -> bool
__le__(self,Guid) -> bool
__ge__(self,Guid) -> bool

Clear(self) -> None
ToUniString(self) -> unicode
ConvertFromString(self,unicode) -> bool
ConvertFromPrefixString(self,unicode) -> bool
Invert(self) -> Guid
IsEqual(self,Guid) -> bool
IsNull(self) ->bool
Compare(self,Guid) -> int32
HasPrefix(self,uint32) -> bool
GetHashValue(self) -> ushort
GetPrefix(self) -> uint32
SetPrefix(self,uint32) -> None

```