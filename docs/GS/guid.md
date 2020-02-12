# Class GSRoot.Guid

## Inherit

* object

## Methods

```
__init__(self) -> None
__init__(self,unicode) -> None
__eq__(self,GSRoot.Guid) -> bool
__ne__(self,GSRoot.Guid) -> bool
__lt__(self,GSRoot.Guid) -> bool
__gt__(self,GSRoot.Guid) -> bool
__le__(self,GSRoot.Guid) -> bool
__ge__(self,GSRoot.Guid) -> bool
__str__(self) -> unicode

Clear(self) -> None
ToUniString(self) -> unicode
ConvertFromString(self,unicode) -> bool
ConvertFromPrefixString(self,unicode) -> bool
Invert(self) -> GSRoot.Guid
IsEqual(self,GSRoot.Guid) -> bool
IsNull(self) ->bool
Compare(self,GSRoot.Guid) -> int32
HasPrefix(self,int) -> bool
GetHashValue(self) -> int
GetPrefix(self) -> int
SetPrefix(self,int) -> None
```

## Static Property

```
Empty -> GSRoot.Guid
```