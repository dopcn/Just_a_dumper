//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KTVBaseCollectionCell.h"

@class KTVImageView, UIImageView, UIView, VipNicknameLabel;

@interface KTVPersonalHeaderDressCell : KTVBaseCollectionCell
{
    _Bool _shouldShowUsing;
    UIView *_imageBackView;
    KTVImageView *_headerImageView;
    UIImageView *_isNewIcon;
    UIImageView *_isUsingIcon;
    VipNicknameLabel *_headerNameLabel;
}

@property(nonatomic) __weak VipNicknameLabel *headerNameLabel; // @synthesize headerNameLabel=_headerNameLabel;
@property(nonatomic) __weak UIImageView *isUsingIcon; // @synthesize isUsingIcon=_isUsingIcon;
@property(nonatomic) __weak UIImageView *isNewIcon; // @synthesize isNewIcon=_isNewIcon;
@property(nonatomic) __weak KTVImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(nonatomic) __weak UIView *imageBackView; // @synthesize imageBackView=_imageBackView;
@property(nonatomic) _Bool shouldShowUsing; // @synthesize shouldShowUsing=_shouldShowUsing;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (void)loadWithAnimationOption:(_Bool)arg1;

@end

