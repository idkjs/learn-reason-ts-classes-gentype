// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE
'use strict';

var ImportJsValueGen = require("./ImportJsValue.gen");

function getAbs(x) {
  return x.getAbs();
}

function setProp(x, n) {
  x.prop = n;
  return /* () */0;
}

var AbsoluteValue = {
  getAbs: getAbs,
  setProp: setProp
};

function useGetProp(x) {
  return x.getProp() + 1 | 0;
}

function useGetAbs(x) {
  return x.getAbs();
}

function useSetProp(x, n) {
  x.prop = n;
  return /* () */0;
}

var $$default = ImportJsValueGen.default;

exports.AbsoluteValue = AbsoluteValue;
exports.useGetProp = useGetProp;
exports.useGetAbs = useGetAbs;
exports.useSetProp = useSetProp;
exports.$$default = $$default;
exports.default = $$default;
exports.__esModule = true;
/* default Not a pure module */
