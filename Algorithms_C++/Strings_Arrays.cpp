#include "pch.h"
#include <vector>

using namespace std;

//Given a sorted array nums, remove the duplicates in - place such that each element appear only once and return the new length.
//Do not allocate extra space for another array, you must do this by modifying the input array in - place with O(1) extra memory.
inline int remove_Duplicates(vector<int>& nums) {
	int current = nums.size() + 1;
	int solution = 0;
	for (int i = 0; i < nums.size(); i++) {
		if (current != nums[i]) {
			nums[solution] = nums[i];
			solution++;
		}
		current = nums[i];
	}
	return solution;
}