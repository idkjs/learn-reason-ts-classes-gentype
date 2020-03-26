
module AbsoluteValue = {
  [@genType.import ("./MyMath", "AbsoluteValue")]
  type t = {. "getAbs": (. unit) => int};

  /* This is untyped */
  [@bs.send] external getProp: t => int = "getProp";
  /* This is also untyped, as we "trust" the type declaration in absoluteVaue */
  let getAbs = (x: t) => {
    let getAbs = x##getAbs;
    getAbs(.);
  };
};
let useGetProp = (x: AbsoluteValue.t) => x->AbsoluteValue.getProp + 1;

let useGetAbs = (x: AbsoluteValue.t) => x->AbsoluteValue.getAbs + 1;


[@genType.import "./MyMath"] external default: int = "default";