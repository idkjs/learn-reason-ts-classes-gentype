"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
exports.round = Math.round;
// tslint:disable-next-line:only-arrow-functions
exports.area = function (point) {
    return point.x * (point.y === undefined ? 1 : point.y);
};
exports.returnMixedArray = function () {
    return [1, 2];
};
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
// tslint:disable-next-line:only-arrow-functions
exports.useColor = function (x) {
    return 0;
};
exports.higherOrder = (foo) => foo(3, 4);
exports.convertVariant = (x) => x;
exports.polymorphic = (x) => x;
exports.default = 34;
