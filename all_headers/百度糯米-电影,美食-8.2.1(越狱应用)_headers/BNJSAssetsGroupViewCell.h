//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class ALAssetsGroup, UIImageView, UILabel;

@interface BNJSAssetsGroupViewCell : UITableViewCell
{
    ALAssetsGroup *_assetsGroup;
    UIImageView *_customImageView;
    UILabel *_phoneNameLable;
    UILabel *_phoneCountLable;
}

@property(retain, nonatomic) UILabel *phoneCountLable; // @synthesize phoneCountLable=_phoneCountLable;
@property(retain, nonatomic) UILabel *phoneNameLable; // @synthesize phoneNameLable=_phoneNameLable;
@property(retain, nonatomic) UIImageView *customImageView; // @synthesize customImageView=_customImageView;
@property(retain, nonatomic) ALAssetsGroup *assetsGroup; // @synthesize assetsGroup=_assetsGroup;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)bind:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

