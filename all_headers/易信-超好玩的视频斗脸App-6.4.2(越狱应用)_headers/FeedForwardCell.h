//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FeedCell.h"

#import "FeedImageButtonDelegate-Protocol.h"

@class FeedForwardView, NSString, UIView;
@protocol FeedPhotoCellDelegate, SNSFeedProtocol;

@interface FeedForwardCell : FeedCell <FeedImageButtonDelegate>
{
    FeedForwardView *_forwardView;
    UIView *_longPressedView;
    id <FeedPhotoCellDelegate> _imageLoadDelegate;
    id <SNSFeedProtocol> _feed;
}

+ (double)cellHeight:(id)arg1 withWidth:(double)arg2;
@property(retain, nonatomic) id <SNSFeedProtocol> feed; // @synthesize feed=_feed;
@property(nonatomic) __weak id <FeedPhotoCellDelegate> imageLoadDelegate; // @synthesize imageLoadDelegate=_imageLoadDelegate;
- (void).cxx_destruct;
- (void)collect:(id)arg1;
- (void)copyText:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)onLongPressed:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)onPressedOnBK:(id)arg1;
- (void)feedImageButton:(id)arg1 finishLoadImage:(id)arg2;
- (void)reloadData:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

