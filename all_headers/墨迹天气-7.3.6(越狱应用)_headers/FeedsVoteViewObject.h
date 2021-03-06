//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString, UIViewController;

@interface FeedsVoteViewObject : NSObject
{
    NSNumber *_feedID;
    NSNumber *_supportsNumber;
    NSNumber *_opponentsNumber;
    NSString *_opponentText;
    NSString *_supportText;
    UIViewController *_parentVC;
    CDUnknownBlockType _updateVoteNumberBlock;
}

@property(copy, nonatomic) CDUnknownBlockType updateVoteNumberBlock; // @synthesize updateVoteNumberBlock=_updateVoteNumberBlock;
@property(nonatomic) __weak UIViewController *parentVC; // @synthesize parentVC=_parentVC;
@property(copy, nonatomic) NSString *supportText; // @synthesize supportText=_supportText;
@property(copy, nonatomic) NSString *opponentText; // @synthesize opponentText=_opponentText;
@property(retain, nonatomic) NSNumber *opponentsNumber; // @synthesize opponentsNumber=_opponentsNumber;
@property(retain, nonatomic) NSNumber *supportsNumber; // @synthesize supportsNumber=_supportsNumber;
@property(retain, nonatomic) NSNumber *feedID; // @synthesize feedID=_feedID;
- (void).cxx_destruct;

@end

