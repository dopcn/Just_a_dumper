//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZDMView.h"

@class NSString, TTTAttributedLabel, UIImageView, UILabel;

@interface ZDMView_kapian_239 : ZDMView
{
    NSString *_thumbnailURL;
    NSString *_title;
    NSString *_subtitle;
    UIImageView *_thumbnailImageView;
    TTTAttributedLabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) TTTAttributedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *thumbnailURL; // @synthesize thumbnailURL=_thumbnailURL;
- (void).cxx_destruct;
- (void)resize;
- (void)zdm_init;
- (void)layoutSubviews;

@end

