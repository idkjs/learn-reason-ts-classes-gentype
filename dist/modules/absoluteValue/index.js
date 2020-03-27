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
exports.create = function () {
    return new AbsoluteValue();
};
