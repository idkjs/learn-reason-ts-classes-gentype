/* TypeScript file generated from ImportJsValue.re by genType. */
/* eslint-disable import/first */


import {default as defaultNotChecked} from './MyMath';

// In case of type error, check the type of 'default' in 'ImportJsValue.re' and './MyMath'.
export const defaultTypeChecked: number = defaultNotChecked;

// Export '$$default' early to allow circular import from the '.bs.js' file.
export const $$default: unknown = defaultTypeChecked as number;

import {AbsoluteValue as $$AbsoluteValue_t} from './MyMath';

// tslint:disable-next-line:interface-over-type-literal
export type AbsoluteValue_t = $$AbsoluteValue_t;

export default $$default;
