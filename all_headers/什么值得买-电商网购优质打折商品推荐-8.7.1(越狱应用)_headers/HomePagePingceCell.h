//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

@interface HomePagePingceCell : UITableViewCell
{
    UIImageView *_img;
    UILabel *_timeLabel;
    UILabel *_contentLabel;
    UIView *_separatorLine;
    UIImageView *_stickyImg;
    UILabel *_countLabel;
    UIImageView *_img_comment;
}

@property(retain, nonatomic) UIImageView *img_comment; // @synthesize img_comment=_img_comment;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UIImageView *stickyImg; // @synthesize stickyImg=_stickyImg;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIImageView *img; // @synthesize img=_img;
- (void).cxx_destruct;
- (void)drawCellWithDic:(id)arg1 andBOOL:(_Bool)arg2 andType:(long long)arg3;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

