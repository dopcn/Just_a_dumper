//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

@class EssayUpdateModel, NSString, SSImageView, SSThemedTextView, UIButton;

@interface EssayNotificationRichInfoView : SSThemedView
{
    SSThemedTextView *_contentTextView;
    SSImageView *_imageView;
    UIButton *_detailButton;
    NSString *_groupID;
    EssayUpdateModel *_updateModel;
    NSString *_trackEventName;
}

@property(copy, nonatomic) NSString *trackEventName; // @synthesize trackEventName=_trackEventName;
@property(retain, nonatomic) EssayUpdateModel *updateModel; // @synthesize updateModel=_updateModel;
@property(copy, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(retain, nonatomic) UIButton *detailButton; // @synthesize detailButton=_detailButton;
@property(retain, nonatomic) SSImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) SSThemedTextView *contentTextView; // @synthesize contentTextView=_contentTextView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateRichInfo:(id)arg1;
- (void)openCommentDetailWithFirstCommentId:(id)arg1 secondCommentId:(id)arg2;
- (void)openDetail:(id)arg1;
- (_Bool)isReplyCommentWithType:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)urlModel:(id)arg1;

@end

