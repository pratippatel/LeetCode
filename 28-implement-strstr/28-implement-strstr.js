/**
 * @param {string} haystack
 * @param {string} needle
 * @return {number}
 */
var strStr = function(haystack, needle) {
    
   // console.log(haystack.substring(i,needle.length))
    if(needle.length == 0){
        return 0;
    }
    for(var i = 0; i<haystack.length;i++){
        if(haystack.substring(i,needle.length+i) == needle){
            return i;
        }
       
    }
     return -1;
};