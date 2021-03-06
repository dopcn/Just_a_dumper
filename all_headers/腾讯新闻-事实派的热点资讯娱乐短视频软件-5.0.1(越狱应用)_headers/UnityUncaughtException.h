//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSException.h>

@class NSString;

@interface UnityUncaughtException : NSException
{
    NSString *_category;
    NSString *_orignalStacks;
    NSString *_callStack;
}

+ (id)parseStackTrace:(id)arg1;
+ (id)exceptionWithName:(id)arg1 reason:(id)arg2 callStack:(id)arg3;
@property NSString *callStack; // @synthesize callStack=_callStack;
@property NSString *orignalStacks; // @synthesize orignalStacks=_orignalStacks;
@property NSString *category; // @synthesize category=_category;
- (void)uploadCrash;
- (void)throwException;
@property(readonly, copy) NSString *callStackArray;
- (id)printCallStack;
- (id)printException;

@end

