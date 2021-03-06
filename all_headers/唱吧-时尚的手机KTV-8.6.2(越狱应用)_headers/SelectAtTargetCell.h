//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class KTVImageView, KTVUserbase, UIImageView, VipNicknameLabel;

@interface SelectAtTargetCell : UITableViewCell
{
    KTVImageView *_headPhotoImageView;
    VipNicknameLabel *_nickNameLabel;
    UIImageView *_genderImageView;
    KTVUserbase *_user;
}

@property(retain, nonatomic) KTVUserbase *user; // @synthesize user=_user;
@property(nonatomic) __weak UIImageView *genderImageView; // @synthesize genderImageView=_genderImageView;
@property(nonatomic) __weak VipNicknameLabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(nonatomic) __weak KTVImageView *headPhotoImageView; // @synthesize headPhotoImageView=_headPhotoImageView;
- (void).cxx_destruct;
- (void)refresh;
- (void)awakeFromNib;

@end

