//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface PasswordMgr : NSObject
{
}

+ (int)getCipherData:(id)arg1 onServerTime:(id)arg2 ifReturnHash:(_Bool)arg3 theKeyId:(id)arg4 getCipherText:(id *)arg5 getHash:(id *)arg6;
+ (void)showMsg:(id)arg1 message:(id)arg2;
+ (id)getCipherData:(id)arg1 keytext:(id)arg2;
+ (id)getCipherData:(id)arg1;
+ (int)CalcKeyStrength:(id)arg1;
+ (int)getAlgID;
- (id)getRandomNumber_P:(int)arg1;

@end

