//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBNuxServerContext-Protocol.h"

@class NSArray, NSString;

@interface FBNewAccountNUXInterstitialContext : NSObject <FBNuxServerContext>
{
    NSArray *_steps;
    unsigned long long _currentStepIndex;
}

@property(nonatomic) unsigned long long currentStepIndex; // @synthesize currentStepIndex=_currentStepIndex;
@property(copy, nonatomic) NSArray *steps; // @synthesize steps=_steps;
- (void).cxx_destruct;
- (void)parseParameters:(id)arg1;
- (id)initWithGraphQLData:(id)arg1;
- (id)initWithNuxParameters:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

