//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PADataCenterBase.h"

@interface PDGatherUserInfoDataCenter : PADataCenterBase
{
}

+ (id)tagsFromString:(id)arg1;
+ (id)stringTagFromUserTags:(id)arg1;
+ (id)sharedInstance;
- (id)saveUserTagsWithTags:(id)arg1 priority:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)getTagsWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)submitGatherUserInfoWithInfo:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)validateFillCodeWithCode:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)init;

@end

