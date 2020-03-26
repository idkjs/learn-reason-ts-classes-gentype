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
var AbsoluteValue = /** @class */ (function () {
    function AbsoluteValue() {
    }
    AbsoluteValue.prototype.getProp = function () {
        return this.prop;
    };
    AbsoluteValue.prototype.getAbs = function () {
        return this.prop < 0 ? -this.prop : this.prop;
    };
    AbsoluteValue.prototype.create = function () { return new AbsoluteValue; };
    return AbsoluteValue;
}());
exports.AbsoluteValue = AbsoluteValue;
// tslint:disable-next-line:only-arrow-functions
exports.useColor = function (x) {
    return 0;
};
exports.higherOrder = function (foo) {
    return foo(3, 4);
};
exports.convertVariant = function (x) { return x; };
exports.polymorphic = function (x) { return x; };
exports.default = 34;
