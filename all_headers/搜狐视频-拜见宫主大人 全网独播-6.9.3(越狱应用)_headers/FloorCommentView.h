//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class CommentPicImageView, SingleCommentModel, UILabel;

@interface FloorCommentView : UIButton
{
    UILabel *_userName;
    UILabel *_commentLabel;
    UILabel *_commentTime;
    UILabel *_sortNum;
    SingleCommentModel *_model;
    CommentPicImageView *_commentImage;
    UILabel *_commentImageBadge;
}

@property(retain, nonatomic) UILabel *commentImageBadge; // @synthesize commentImageBadge=_commentImageBadge;
@property(retain, nonatomic) CommentPicImageView *commentImage; // @synthesize commentImage=_commentImage;
@property(retain, nonatomic) SingleCommentModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *sortNum; // @synthesize sortNum=_sortNum;
@property(retain, nonatomic) UILabel *commentTime; // @synthesize commentTime=_commentTime;
@property(retain, nonatomic) UILabel *commentLabel; // @synthesize commentLabel=_commentLabel;
@property(retain, nonatomic) UILabel *userName; // @synthesize userName=_userName;
- (void).cxx_destruct;
- (id)timeIntervalSince1970:(double)arg1;
- (void)configWithModel:(id)arg1;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

