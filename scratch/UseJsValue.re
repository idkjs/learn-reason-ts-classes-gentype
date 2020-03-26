[@genType]
let useGetProp = (x: ImportJsValue.AbsoluteValue.t) =>
  x->ImportJsValue.AbsoluteValue.getProp + 1;

[@genType]
let useTypeImportedInOtherModule = (x: ImportJsValue.stringFunction) => x;

let default = "ImportJsValue.default";
Js.log2("default: ", default);
let default = ImportJsValue.default;
Js.log2("default: ", default);