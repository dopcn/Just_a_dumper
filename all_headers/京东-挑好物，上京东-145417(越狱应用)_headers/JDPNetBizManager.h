//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface JDPNetBizManager : NSObject
{
}

+ (_Bool)private_analyseResultCode:(id)arg1 successCodes:(id)arg2;
+ (void)private_successAnalyseWithBizRequest:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (id)sendAsynchronousRequest:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)cancelRequestWithIdentifier:(id)arg1;

@end

