//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TIMInnerRequest : NSObject
{
}

+ (void)avRequest:(id)arg1 body:(id)arg2 timeout:(int)arg3 succ:(CDUnknownBlockType)arg4 fail:(CDUnknownBlockType)arg5;
+ (void)request:(id)arg1 body:(id)arg2 timeout:(int)arg3 succ:(CDUnknownBlockType)arg4 fail:(CDUnknownBlockType)arg5;
+ (void)request:(id)arg1 cmd:(id)arg2 body:(id)arg3 timeout:(int)arg4 succ:(CDUnknownBlockType)arg5 fail:(CDUnknownBlockType)arg6;
+ (void)request:(id)arg1 cmd:(id)arg2 body:(id)arg3 succ:(CDUnknownBlockType)arg4 fail:(CDUnknownBlockType)arg5;
+ (_Bool)checkSSOPermision:(id)arg1 cmd:(id)arg2;

@end

