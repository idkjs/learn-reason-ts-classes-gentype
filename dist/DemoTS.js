function multiply(a, b) {
    const result = a * b;
    console.log(`The multiplication of ${a}*${b} equals to 
     ${result}`);
    return result;
}
multiply(1, 2);
multiply(2, 2);
multiply(-10, 10);
class AbsoluteValue {
    getProp() {
        return this.prop;
    }
    getAbs() {
        return this.prop < 0 ? -this.prop : this.prop;
    }
}
;
let abs = new AbsoluteValue();
console.log("abs: ", abs);
console.log("abs.prop: ", abs.prop);
let abs2 = abs.prop = 1.1;
abs.prop = 1.1;
console.log("abs.prop: ", abs.prop);
console.log("abs.getProp: ", abs2);
console.log("abs.getProp: ", abs.getProp());
