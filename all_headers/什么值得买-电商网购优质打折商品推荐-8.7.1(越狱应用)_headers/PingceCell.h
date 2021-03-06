//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView, UILabel, UIView;

@interface PingceCell : UITableViewCell
{
    UIImageView *_parallaxImage;
    UIView *_viewImg;
    UIButton *_image_back;
    UIImageView *_userImg;
    UILabel *_userName;
    UILabel *_countLabel;
    UIView *_separatorLine;
    UILabel *_title;
    UIImageView *_img_comment;
    UIImageView *_stickyImg;
    UILabel *_stickyLabel;
}

@property(retain, nonatomic) UILabel *stickyLabel; // @synthesize stickyLabel=_stickyLabel;
@property(retain, nonatomic) UIImageView *stickyImg; // @synthesize stickyImg=_stickyImg;
@property(retain, nonatomic) UIImageView *img_comment; // @synthesize img_comment=_img_comment;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) UIImageView *userImg; // @synthesize userImg=_userImg;
@property(retain, nonatomic) UIButton *image_back; // @synthesize image_back=_image_back;
@property(retain, nonatomic) UIView *viewImg; // @synthesize viewImg=_viewImg;
@property(retain, nonatomic) UIImageView *parallaxImage; // @synthesize parallaxImage=_parallaxImage;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)cellOnTableView:(id)arg1 didScrollOnView:(id)arg2;
- (void)awakeFromNib;
- (void)changeAlphaAndColor;
- (void)drawCellWithDic:(id)arg1 andBOOL:(_Bool)arg2 andIndex:(long long)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

