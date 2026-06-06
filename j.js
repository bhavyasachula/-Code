nums = [2,7,11,15]
target = 9

const twoSum=(nums,target)=>{
    const arr = nums.map((value,index)=>{
       return [value,nums[index]]
    })
    console.log(arr)
}

twoSum(nums,target)