//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface LMListenCollectionCommentHeadView : UIView
{
    UIImageView *_coverImage;
    UILabel *_nameLabel;
    UILabel *_authorLabel;
    UILabel *_infoLabel;
}

@property(nonatomic) __weak UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(nonatomic) __weak UILabel *authorLabel; // @synthesize authorLabel=_authorLabel;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak UIImageView *coverImage; // @synthesize coverImage=_coverImage;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setUpDataWithDetailInfo:(id)arg1;

@end

