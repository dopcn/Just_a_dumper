//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class KGThemeLabel, UIImageView, UILabel, YuekuMvListDataItem;

@interface MVListCollectButton : UIButton
{
    UIImageView *_coverShadowImageView;
    UIButton *_playBtn;
    KGThemeLabel *_nameLabel;
    UILabel *_peopleLabel;
    YuekuMvListDataItem *_mvListDataItem;
    UIImageView *_shadow;
    UIImageView *_listenImg;
}

@property(retain, nonatomic) UIImageView *listenImg; // @synthesize listenImg=_listenImg;
@property(retain, nonatomic) UIImageView *shadow; // @synthesize shadow=_shadow;
@property(retain, nonatomic) YuekuMvListDataItem *mvListDataItem; // @synthesize mvListDataItem=_mvListDataItem;
@property(retain, nonatomic) UILabel *peopleLabel; // @synthesize peopleLabel=_peopleLabel;
@property(retain, nonatomic) KGThemeLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIButton *playBtn; // @synthesize playBtn=_playBtn;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)coverShadowImage;
- (void)makeShadow;
- (id)init;

@end

