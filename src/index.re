let default = ImportJsValue.default;
Js.log2("default: ", default);

module AbsoluteValue = {
  [@genType.import ("./MyMath", "AbsoluteValue")]
  type t = {. 
    "getAbs": (. unit) => int,
    "getProp": (. unit) => int,
    [@bs.set] "prop":int
  };

  /* This is untyped */
  [@bs.send] external getProp: t => int = "getProp";
  // [@bs.send] external prop: (t,int) => t = "prop";
  /* This is also untyped, as we "trust" the type declaration in absoluteVaue */
  let getAbs = (x: t) => {
    let getAbs = x##getAbs;
    getAbs(.);
  };
  // this is not handling negative numbers
  let setProp = (x: t,n:int) => {
    let prop = n >= 0 ? x##prop #= n : x##prop #= (-n);
    prop;
  };

};
let useGetProp = (x: AbsoluteValue.t) =>
  x->AbsoluteValue.getProp + 1;
let useGetAbs = (x: AbsoluteValue.t) =>
  x->AbsoluteValue.getAbs;
let useSetProp = (x: AbsoluteValue.t,n:int) =>
  x->AbsoluteValue.setProp(n);

[@genType.import "./MyMath"]
external create: (. unit) => AbsoluteValue.t = "create";
// [@genType]
let value:AbsoluteValue.t = create(.);
Js.log2("new AbsoluteValue should be {}",value)
Js.log2("new AbsoluteValue should have OBJECT type",Js.Json.test(value,Object))
// get the prop value using the class method
let propVal = useGetProp(value);
Js.log2("propVal: useGetProp(value)",propVal)
let setVal = value->useSetProp(1);
Js.log2("setVal:",setVal)
let setProp = value->useSetProp(-3)
Js.log2("setProp -3",setProp)
let propVal = useGetProp(value);
let propAbs = useGetAbs(value);
Js.log2("propVal",propVal)
Js.log2("propAbs",propAbs)

Js.log2("setProp",value)
let setProp = value->useSetProp(3)
Js.log2("setProp",value)
let propAbs = useGetAbs(value);
Js.log2("propAbs",propAbs)
Js.log(value)

Js.log(propVal === 2);

