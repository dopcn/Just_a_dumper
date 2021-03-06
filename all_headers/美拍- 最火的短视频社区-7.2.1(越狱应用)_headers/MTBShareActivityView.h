//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString;

@interface MTBShareActivityView : UIView <UIGestureRecognizerDelegate>
{
    NSArray *_platforms;
    NSMutableArray *_platformCells;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSMutableArray *platformCells; // @synthesize platformCells=_platformCells;
@property(copy, nonatomic) NSArray *platforms; // @synthesize platforms=_platforms;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)selectPlatform:(id)arg1;
- (id)imageName:(long long)arg1;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (void)setupBaseUI;
- (void)setupPlatforms;
- (id)initWithPlatforms:(id)arg1 andCompletion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

