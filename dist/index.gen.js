"use strict";
/* TypeScript file generated from index.re by genType. */
/* eslint-disable import/first */
Object.defineProperty(exports, "__esModule", { value: true });
const MyMath_1 = require("./MyMath");
// In case of type error, check the type of 'create' in 'index.re' and './MyMath'.
exports.createTypeChecked = MyMath_1.create;
// Export 'create' early to allow circular import from the '.bs.js' file.
exports.create = exports.createTypeChecked;
