"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
class AbsoluteValue {
    getProp() {
        return this.prop;
    }
    getAbs() {
        return this.prop < 0 ? -this.prop : this.prop;
    }
}
exports.AbsoluteValue = AbsoluteValue;
exports.create = function () { return new AbsoluteValue(); };
let abs = new AbsoluteValue();
console.log("abs: ", abs);
console.log("abs.prop: ", abs.prop);
let abs2 = abs.prop = 1.1;
abs.prop = 1.1;
console.log("abs.prop: ", abs.prop);
console.log("abs.getProp: ", abs2);
console.log("abs.getProp: ", abs.getProp());
