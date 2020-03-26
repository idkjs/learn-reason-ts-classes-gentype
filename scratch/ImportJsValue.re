[@genType.import "./MyMath"]
type stringFunction;

module AbsoluteValue = {
  [@genType.import ("./MyMath", "AbsoluteValue")]
  type t = {. "getAbs": (. unit) => int};

  /* This is untyped */
  [@bs.send] external getProp: t => int = "getProp";
  [@bs.send] external create: unit => t = "create";
  /* This is also untyped, as we "trust" the type declaration in absoluteVaue */
  let getAbs = (x: t) => {
    let getAbs = x##getAbs;
    getAbs(.);
  };
  
};

[@genType]
let useGetProp = (x: AbsoluteValue.t) => x->AbsoluteValue.getProp + 1;

[@genType]
let useGetAbs = (x: AbsoluteValue.t) => x->AbsoluteValue.getAbs + 1;

[@genType]
let create = () =>AbsoluteValue.create;


[@genType.import "./MyMath"] external default: int = "default";