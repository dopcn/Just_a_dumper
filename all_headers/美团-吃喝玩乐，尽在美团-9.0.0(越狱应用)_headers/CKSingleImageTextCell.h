//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CKTableViewCell.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIImageView, UILabel;

@interface CKSingleImageTextCell : CKTableViewCell <UIGestureRecognizerDelegate>
{
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIImageView *_myImageView;
    UILabel *_readAllLabel;
    UILabel *_lineLabel;
    UIImageView *_arrowImage;
}

+ (struct CGSize)sizeForDetailWithContent:(id)arg1;
+ (struct CGSize)sizeForTitleWithContent:(id)arg1;
+ (double)maxContentWidthForContent;
+ (struct CGSize)bubbleContentSizeForContent:(id)arg1;
+ (double)heightForContent:(id)arg1;
@property(retain, nonatomic) UIImageView *arrowImage; // @synthesize arrowImage=_arrowImage;
@property(retain, nonatomic) UILabel *lineLabel; // @synthesize lineLabel=_lineLabel;
@property(retain, nonatomic) UILabel *readAllLabel; // @synthesize readAllLabel=_readAllLabel;
@property(retain, nonatomic) UIImageView *myImageView; // @synthesize myImageView=_myImageView;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (void)resolve:(long long)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)longPressBubble:(id)arg1;
- (void)tapBubble:(id)arg1;
- (void)layoutSubviews;
- (void)setContent:(id)arg1;
- (id)initWithMessageType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

