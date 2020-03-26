/* TypeScript file generated from index.re by genType. */
/* eslint-disable import/first */


import {create as createNotChecked} from './MyMath';

// In case of type error, check the type of 'create' in 'index.re' and './MyMath'.
export const createTypeChecked: () => AbsoluteValue_t = createNotChecked;

// Export 'create' early to allow circular import from the '.bs.js' file.
export const create: unknown = createTypeChecked as () => AbsoluteValue_t;

import {AbsoluteValue as $$AbsoluteValue_t} from './MyMath';

// tslint:disable-next-line:interface-over-type-literal
export type AbsoluteValue_t = $$AbsoluteValue_t;
