export declare const round: (_: number) => number;
export declare const area: (point: {
    x: number;
    y?: number | undefined;
}) => number;
export declare type numberOrString = number | string;
export declare const returnMixedArray: () => (string | number)[];
export declare class AbsoluteValue {
    prop: number;
    getProp(): number;
    getAbs(): number;
}
export declare const create: () => AbsoluteValue;
export declare type stringFunction = (_: string) => string;
export declare const useColor: (x: "tomato" | "gray") => number;
export declare const higherOrder: (foo: (_1: number, _2: number) => number) => number;
export declare const convertVariant: (x: any) => any;
export declare const polymorphic: <T>(x: T) => T;
export declare type num = number;
export declare type polyType<T> = {
    x: T;
};
declare const _default: 34;
export default _default;
