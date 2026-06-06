const nums = [2,7,11,15]
const target = 9

const twoSum=(nums,target)=>{
    for(i=0;i<nums.length;i++){
        const currentElem = nums[i]
        const nextElem = nums[i++]
        const finalnum = currentElem + nextElem;
        if(finalnum === target){
         console.log([--i,-i]);
        }
        else{
          console.log([--i,-i]);
        }
    } 
}

twoSum(nums,target)