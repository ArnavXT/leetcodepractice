// Last updated: 7/16/2026, 4:36:52 PM
class Solution {
public:
    typedef long long ll;
    typedef pair<ll, ll> P;
    long long minimumCost(vector<int>& nums, int k, int dist) {
        int n = nums.size();
        set<P> kMinimum;
        set<P> rem;
        ll sum = 0;

        int i=1;
        while(i-dist<1){
            kMinimum.insert({nums[i],i});
            sum+=nums[i];
            if(kMinimum.size()>k-1){
                 P temp = *kMinimum.rbegin();
                sum -= temp.first;
                rem.insert(temp);
                kMinimum.erase(temp);
            }
            i++;
        }

        ll result = LONG_MAX; 
        while(i < n) {
            kMinimum.insert({nums[i], i});
            sum += nums[i];

            if(kMinimum.size() > k-1) {
                P temp = *kMinimum.rbegin();
                sum -= temp.first;
                rem.insert(temp);
                kMinimum.erase(temp);
            }

            result = min(result, sum);

            P remove = {nums[i-dist], i-dist};
            if(kMinimum.count(remove)) {
                kMinimum.erase(remove);
                sum -= remove.first;

                if(!rem.empty()) {
                    P temp = *rem.begin();
                    kMinimum.insert(temp);
                    sum += temp.first;
                    rem.erase(temp);
                }
            } 
            else    rem.erase(remove);

            i++;
        }
        return result+nums[0];
    }
};