module AbsoluteValue = {
  [@genType.import ("./MyMath", "AbsoluteValue")]
  type t = {
    . 
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
  let setProp = (x: t,n:int) => {
    let prop = x##prop #= n;
    prop;
  };

};

let useGetProp = (x: AbsoluteValue.t) =>
  x->AbsoluteValue.getProp + 1;
  
let useGetAbs = (x: AbsoluteValue.t) =>
  x->AbsoluteValue.getAbs;
  
let useSetProp = (x: AbsoluteValue.t,n:int) =>
  x->AbsoluteValue.setProp(n);


[@genType.import "./MyMath"] external default: int = "default";