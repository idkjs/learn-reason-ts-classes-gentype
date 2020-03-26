# Using Gentype with Typescript Classes

## Tsconfig.json

This set up works to use `gentype` generated `.tsx` files in this project. We are not using `react`.
You need to set `jsx: preserve` in `tsconfig.json` for `tsc` to compile. It doesnt matter that we are not using `react` in this project. Looks like typescript treats the generated `.tsx` file as regular `js`.

Getting default compiler setup:

```sh
npm i --save-dev typescript
# require `jq` and `moreutils` `brew install jq`,`brew install moreutils`
jq '.scripts += {compile: "tsc"}' package.json | sponge package.json
npm run compile -- --init
```

This is an attempt to understand binding to a `typescript` class using the `AbsoluteValue` example in the [gentype repo](https://github.com/cristianoc/genType/blob/master/examples/typescript-react-example/src/MyMath.ts)

```ts
export class AbsoluteValue {
  public prop!: number;
  public getProp(): number {
    return this.prop;
  }
  public getAbs(): number {
    return this.prop < 0 ? -this.prop : this.prop;
  }
}
```

The `Reason` code is in [`index.re`](./src/index.re)

