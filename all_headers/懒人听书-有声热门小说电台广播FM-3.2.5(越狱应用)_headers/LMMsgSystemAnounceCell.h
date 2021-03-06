//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

@interface LMMsgSystemAnounceCell : UITableViewCell
{
    UILabel *_timeL;
    UIView *_anounceBgV;
    UILabel *_titleL;
    UILabel *_contentL;
    UIImageView *_anouncerImg;
    UIView *_showDetailBgV;
    UIView *_seperatorLineV;
    UILabel *_detailL;
    UIImageView *_intoImgV;
}

@property(nonatomic) __weak UIImageView *intoImgV; // @synthesize intoImgV=_intoImgV;
@property(nonatomic) __weak UILabel *detailL; // @synthesize detailL=_detailL;
@property(nonatomic) __weak UIView *seperatorLineV; // @synthesize seperatorLineV=_seperatorLineV;
@property(nonatomic) __weak UIView *showDetailBgV; // @synthesize showDetailBgV=_showDetailBgV;
@property(nonatomic) __weak UIImageView *anouncerImg; // @synthesize anouncerImg=_anouncerImg;
@property(nonatomic) __weak UILabel *contentL; // @synthesize contentL=_contentL;
@property(nonatomic) __weak UILabel *titleL; // @synthesize titleL=_titleL;
@property(nonatomic) __weak UIView *anounceBgV; // @synthesize anounceBgV=_anounceBgV;
@property(nonatomic) __weak UILabel *timeL; // @synthesize timeL=_timeL;
- (void).cxx_destruct;
- (void)hideShowDetail:(_Bool)arg1;
- (void)setCellContentWithNotice:(id)arg1;
- (void)setupConstraints;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

