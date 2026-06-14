
// const target = 9

// const twoSum=(nums,target)=>{
//     for(i=0;i<nums.length;i++){
//       let sum = 0
//       sum = sum + nums[i]
       
//        }
//     } 


// twoSum(nums,target)

const nums = [1,2,3,4,5,6,7];
const nums2 = [-1, -100, 3, 99];


const rotateArray = (nums,k)=>{
const arr = nums.map((value,index)=>{
    // index starts from  1
        return nums[((index-k)%nums.length+nums.length)%nums.length]
    })
    console.log(arr)
}

rotateArray(nums,k=3)
rotateArray(nums2,k=2)
