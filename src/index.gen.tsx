/* TypeScript file generated from index.re by genType. */
/* eslint-disable import/first */


import {create as createNotChecked} from './MyMath';

// In case of type error, check the type of 'create' in 'index.re' and './MyMath'.
export const createTypeChecked: () => AbsoluteValue_t = createNotChecked;

// Export 'create' early to allow circular import from the '.bs.js' file.
export const create: unknown = createTypeChecked as () => AbsoluteValue_t;

import {AbsoluteValue as $$AbsoluteValue2_t} from './MyMath';

import {AbsoluteValue as $$AbsoluteValue3_t} from 'modules/absoluteValue';

import {AbsoluteValue as $$AbsoluteValue_t} from './MyMath';

// tslint:disable-next-line:interface-over-type-literal
export type AbsoluteValue3_t = $$AbsoluteValue3_t;

// tslint:disable-next-line:interface-over-type-literal
export type AbsoluteValue2_t = $$AbsoluteValue2_t;

// tslint:disable-next-line:interface-over-type-literal
export type AbsoluteValue_t = $$AbsoluteValue_t;
