//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class LKPTagTextView, NSArray, NSString;
@protocol LKPTagTextViewDelegate;

@protocol LKPDetailViewProtocol <NSObject>
@property(nonatomic) __weak id <LKPTagTextViewDelegate> tagTextViewDelegate;
@property(retain, nonatomic, getter=getTags, setter=setTags:) NSArray *tags;
@property(retain, nonatomic) LKPTagTextView *tagTextView;
@property(nonatomic, getter=isFullScreen, setter=setFullScreen:) _Bool fullScreen;
@property(nonatomic, setter=setExpired:) _Bool expired;
@property(retain, nonatomic) NSString *itemID;
@property(nonatomic) long long index;
- (void)setBottomLayoutHeight:(double)arg1;
- (void)setTopLayoutHeight:(double)arg1;

@optional
- (double)getTopLayoutHeightConstraint;
- (_Bool)isOriginalDownloadAvailable;
- (void)startAnimation;
- (void)setTagViewMode:(long long)arg1;
- (void)resetLayout:(_Bool)arg1;
@end

