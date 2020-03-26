open ImportJsValue;
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
value##prop #= 1;
Js.log2("value##prop",value##prop)
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
