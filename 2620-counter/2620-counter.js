/**
 * @param {number} n
 * @return {Function} counter
 */

var createCounter = function(n) {
    let temp=n-1;
    return function() {
        temp+=1;
        return temp;
    };
};

/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */