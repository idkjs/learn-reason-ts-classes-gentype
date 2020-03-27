let default = ImportJsValue.default;
Js.log2("default: ", default);

/* AbsoluteValue3, AbsoluteValue2 and AbsoluteValue do the same thing. Two different styles */
module AbsoluteValue3 = {
  [@genType.import ("modules/absoluteValue", "AbsoluteValue")]
  type t = {
      . 
      "getAbs": (. unit) => int,
      "getProp": (. unit) => int,
      [@bs.set] "prop": int,
    };

  /* This is also untyped, as we "trust" the type declaration in absoluteVaue */
  let getAbs = (x: t) => {
    let getAbs = x##getAbs;
    getAbs(.);
  };
  let getProp = (x: t) => {
    let getProp = x##getProp;
    getProp(.);
  };


  let setProp = (x: t,n:int) => {
    Js.log2("new prop",n)
    Js.log2("new prop",x)
    Js.log2("new prop x##prop",x##prop)
    let prop = n >= 0 ? x##prop #= n: x##prop #= (-n);
    Js.log2("new prop",prop)
    prop;
  };

};
// instantiate new AbsoluteValue3 object
[@bs.module "modules/absoluteValue"][@bs.new] external inst: unit => AbsoluteValue3.t = "AbsoluteValue";

let value = inst();
Js.log("--------------------------");
Js.log("ABSOLUTE VALUE 3 BEGIN");
Js.log("--------------------------");
Js.log2("new AbsoluteValue3 should be {}",value)
Js.log2("new AbsoluteValue3 should have OBJECT type",Js.Json.test(value,Object))
let useGetProp = (x: AbsoluteValue3.t) =>
  x->AbsoluteValue3.getProp + 1;
let useGetAbs = (x: AbsoluteValue3.t) =>
  x->AbsoluteValue3.getAbs;
let useSetProp = (x: AbsoluteValue3.t,n:int) =>
  x->AbsoluteValue3.setProp(n);
  // set prop val
  let setVal = value->useSetProp(3);
  
Js.log2("setVal3 == 3:",setVal)
// get the prop value using the class method
let propVal = useGetProp(value);
Js.log2("propVal3: == 1",propVal)

// let useUseProp = value->useSetProp(-9)
// Js.log2("useUseProp -9",useUseProp)
let useUseProp2 = value->useSetProp(-19)
Js.log2("useUseProp2 -19",useUseProp2)
// let useUseProp2 = value->useSetProp(19)
// Js.log2("useUseProp2 19",useUseProp2)
// let setProp = value->useSetProp(-3)
// Js.log2("setProp -3",setProp)
let propVal3 = useGetProp(value);
let propAbs3 = useGetAbs(value);
Js.log2("propVal3",propVal3)
Js.log2("propAbs3",propAbs3)

Js.log2("setProp",value)
let setProp = value->useSetProp(3)
Js.log2("setProp",setProp)
let propAbs = useGetAbs(value);
Js.log2("propAbs",propAbs)
Js.log(value)

Js.log(propVal === 2);
Js.log("--------------------------");
Js.log("ABSOLUTE VALUE 3 END");
Js.log("--------------------------");

/* both AbsoluteValue2 and AbsoluteValue do the same thing. Two different styles */
module AbsoluteValue2 = {
  [@genType.import ("./MyMath", "AbsoluteValue")]
  type t = {
      . 
      "getAbs": (. unit) => int,
    };

  /* This is untyped */
  [@bs.send] external _getAbs: t=> int = "getAbs";
  [@bs.send] external getProp: t => int = "getProp";
  [@bs.set] external prop: (t,int) => t = "prop";
  /* This is also untyped, as we "trust" the type declaration in absoluteVaue */
  let getAbs = (x: t) => {
    let getAbs = x##getAbs;
    getAbs(.);
  };


  let setProp = (x: t,n:int) => {
    let prop = prop(x,n)
    prop;
  };

};
module AbsoluteValue = {
  [@genType.import ("./MyMath", "AbsoluteValue")]
  type t = {. };

  /* This is untyped */
  [@bs.send] external _getAbs: t=> int = "getAbs";
  [@bs.send] external getProp: t => int = "getProp";
  [@bs.set] external prop: (t,int) => t = "prop";
  /* This is also untyped, as we "trust" the type declaration in absoluteVaue. Note that here not using the underscore `_getAbs` instead of `getAbs` confuses the compiler */
  let getAbs = (x: t) => {
    let abs = _getAbs(x);
    abs;
  };


  let setProp = (x: t,n:int) => {
    let prop = prop(x,n)
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


let value:AbsoluteValue.t = create(.);
Js.log2("new AbsoluteValue should be {}",value)
Js.log2("new AbsoluteValue should have OBJECT type",Js.Json.test(value,Object))
// get the prop value using the class method
let propVal = useGetProp(value);
Js.log2("propVal: useGetProp(value)",propVal)
let setVal = value->useSetProp(1);
Js.log2("setVal:",setVal)
let useUseProp = value->useSetProp(-9)
Js.log2("useUseProp -9",useUseProp)
let useUseProp2 = value->useSetProp(-19)
Js.log2("useUseProp2 -19",useUseProp2)
let useUseProp2 = value->useSetProp(19)
Js.log2("useUseProp2 19",useUseProp2)
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

