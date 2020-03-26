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

Then add `"jsx": "preserve",` to the generated `tsconfig.json`.

```json
// tsconfig.json
{
  "compilerOptions": {
    /* Basic Options */
    "target": "es5",                          /* Specify ECMAScript target version: 'ES3' (default), 'ES5', 'ES2015', 'ES2016', 'ES2017', 'ES2018', 'ES2019', 'ES2020', or 'ESNEXT'. */
    "module": "commonjs",                     /* Specify module code generation: 'none', 'commonjs', 'amd', 'system', 'umd', 'es2015', 'es2020', or 'ESNext'. */
    "lib": ["es2015", "dom", "scripthost"],   /* Specify library files to be included in the compilation. */
    "jsx": "preserve",                     /* Specify JSX code generation: 'preserve', 'react-native', or 'react'. */

    /* Strict Type-Checking Options */
    "strict": true,                           /* Enable all strict type-checking options. */

    /* Module Resolution Options */
    "esModuleInterop": true,                  /* Enables emit interoperability between CommonJS and ES Modules via creation of namespace objects for all imports. Implies 'allowSyntheticDefaultImports'. */
      /* Advanced Options */
    "forceConsistentCasingInFileNames": true  /* Disallow inconsistently-cased references to the same file. */
  }
}

```