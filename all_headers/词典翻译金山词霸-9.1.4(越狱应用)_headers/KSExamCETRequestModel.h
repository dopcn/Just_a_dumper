//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface KSExamCETRequestModel : NSObject
{
}

- (void)requestTakeTestWithTestId:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)requestTakeTestParamWithtestId:(id)arg1;
- (void)requestExamListInfoWithTag:(id)arg1 page:(long long)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)examListInfoWithTag:(id)arg1 page:(long long)arg2;
- (id)publicParam;
- (id)examParamWithTestId:(id)arg1;
- (void)requestExamInfoWithTestId:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;

@end

