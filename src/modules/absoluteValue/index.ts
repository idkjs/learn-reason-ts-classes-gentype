export class AbsoluteValue {
  public prop!: number;
  public getProp(): number {
    return this.prop;
  }
  public getAbs(): number {
    return this.prop < 0 ? -this.prop : this.prop;
  }
}
export const create = function() {
  return new AbsoluteValue();
};
