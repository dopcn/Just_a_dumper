//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet;

@interface QNScreenshotter : NSObject
{
    _Bool _isTaking;
    NSMutableSet *_conditions;
    CDUnknownBlockType _completion;
}

+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSMutableSet *conditions; // @synthesize conditions=_conditions;
@property(nonatomic) _Bool isTaking; // @synthesize isTaking=_isTaking;
- (void).cxx_destruct;
- (void)p_do_takeScreenshot;
- (void)ready:(id)arg1;
- (void)wait:(id)arg1;
- (void)takeScreenshot:(CDUnknownBlockType)arg1;
- (id)init;

@end

