//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "GJPostDetailCellProtocol-Protocol.h"

@class GJListCellIcon, GJListYunyingIcon, GJStarView, GJTableCellBorderView, NSDictionary, NSString, UIImageView, UILabel;

@interface GJZPListCell : UITableViewCell <GJPostDetailCellProtocol>
{
    UIImageView *_leftImageView;
    UILabel *_left1Label;
    UILabel *_left2Label;
    UILabel *_left3Label;
    UILabel *_left4Label;
    UILabel *_right1Label;
    UILabel *_right2Label;
    UILabel *_right3Label;
    UILabel *_right4Label;
    GJListCellIcon *_iconsView;
    GJListYunyingIcon *_yunyingIconView;
    GJStarView *_starView;
    GJTableCellBorderView *_separatorLine;
    NSDictionary *_content;
    UIImageView *_doumiIcon;
}

+ (double)heightForCell:(long long)arg1 withMajorId:(long long)arg2;
+ (float)postDetailProtocolCellHeightWithDic:(id)arg1;
@property(retain, nonatomic) UIImageView *doumiIcon; // @synthesize doumiIcon=_doumiIcon;
@property(retain, nonatomic) NSDictionary *content; // @synthesize content=_content;
@property(retain, nonatomic) GJTableCellBorderView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) GJStarView *starView; // @synthesize starView=_starView;
@property(retain, nonatomic) GJListYunyingIcon *yunyingIconView; // @synthesize yunyingIconView=_yunyingIconView;
@property(retain, nonatomic) GJListCellIcon *iconsView; // @synthesize iconsView=_iconsView;
@property(retain, nonatomic) UILabel *right4Label; // @synthesize right4Label=_right4Label;
@property(retain, nonatomic) UILabel *right3Label; // @synthesize right3Label=_right3Label;
@property(retain, nonatomic) UILabel *right2Label; // @synthesize right2Label=_right2Label;
@property(retain, nonatomic) UILabel *right1Label; // @synthesize right1Label=_right1Label;
@property(retain, nonatomic) UILabel *left4Label; // @synthesize left4Label=_left4Label;
@property(retain, nonatomic) UILabel *left3Label; // @synthesize left3Label=_left3Label;
@property(retain, nonatomic) UILabel *left2Label; // @synthesize left2Label=_left2Label;
@property(retain, nonatomic) UILabel *left1Label; // @synthesize left1Label=_left1Label;
@property(retain, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
- (void).cxx_destruct;
- (double)yForLabelOfLine3:(id)arg1;
- (double)spaceToBottom:(id)arg1;
- (double)yForLabelOfLine2:(id)arg1;
- (double)spaceToTop:(id)arg1;
- (void)layoutDefaultHasNoImage;
- (void)layoutWifiStyle_YES;
- (_Bool)contentHasYunyingIon:(id)arg1;
- (_Bool)contentHasNormalIcons:(id)arg1;
- (_Bool)showWiFiImageView;
- (double)remainWidthForLeft1Label:(id)arg1;
- (double)widthForLine:(id)arg1;
- (double)widthForImage:(id)arg1;
- (void)relayOutSubviewsForCellEditing;
- (double)widthForLabel:(id)arg1 withText:(id)arg2;
- (void)setSubviewInCell:(id)arg1 rightToSuperWithInset:(double)arg2;
- (void)setBackGround:(id)arg1;
- (void)setSizeToFitMaxWidth:(double)arg1 withFirstView:(id)arg2 withAnotherView:(id)arg3 priorNumber:(int)arg4;
- (void)setLeft3LabelFrameAutoAdaptRight3Label:(id)arg1;
- (void)setColorForText;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)postDetailProtocolConfigureCellWithDic:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

