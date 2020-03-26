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

