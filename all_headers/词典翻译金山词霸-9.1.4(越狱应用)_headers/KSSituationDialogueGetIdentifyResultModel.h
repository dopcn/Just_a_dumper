//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSSituationalDialogueCanChooseIdentifyModel, NSArray;

@interface KSSituationDialogueGetIdentifyResultModel : NSObject
{
    NSArray *_state0Array;
    NSArray *_state1Array;
    KSSituationalDialogueCanChooseIdentifyModel *_identity;
    long long _appoint;
}

+ (id)mj_objectClassInArray;
+ (id)mj_replacedKeyFromPropertyName;
@property(nonatomic) long long appoint; // @synthesize appoint=_appoint;
@property(retain, nonatomic) KSSituationalDialogueCanChooseIdentifyModel *identity; // @synthesize identity=_identity;
@property(retain, nonatomic) NSArray *state1Array; // @synthesize state1Array=_state1Array;
@property(retain, nonatomic) NSArray *state0Array; // @synthesize state0Array=_state0Array;
- (void).cxx_destruct;

@end

