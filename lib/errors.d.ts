/**
 * Error indicating not support for something.
 */
export declare class UnsupportedError extends Error {
    constructor(message: string);
}
/**
 * Error produced when calling a method in an invalid state.
 */
export declare class InvalidStateError extends Error {
    constructor(message: string);
}
/**
 * Error produced when calling a method that is not implemented for a certain
 * subclass.
 */
export declare class NotImplementedError extends Error {
    constructor(message: string);
}
//# sourceMappingURL=errors.d.ts.map