//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NLPayFlow.h"

@class NSString;

@interface NLPayAccountResumeFlow : NLPayFlow
{
    long long _passwordVersion;
}

@property(nonatomic) long long passwordVersion; // @synthesize passwordVersion=_passwordVersion;
- (void)didFinish;
- (void)passcodeViewController:(id)arg1 didFinishWithEncryptedPasscode:(id)arg2 rawPasscodeLength:(long long)arg3;
- (void)start:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

