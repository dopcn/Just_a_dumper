//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UIHomePageBaseCell.h"

@class NSDictionary, NSString, UIButton, UIImageView, UILabel;

@interface UIUserListCell : UIHomePageBaseCell
{
    NSString *_article_id;
    NSString *_article_title;
    NSString *_article_pic;
    NSString *_article_g;
    NSString *_article_f;
    NSString *_article_y;
    NSString *_article_b;
    NSString *_article_level;
    _Bool super_shj;
    _Bool commen_shj;
    _Bool _typeHome;
    NSDictionary *_dictData;
    NSString *_stringTypeCell;
    UILabel *_titleLabel;
    UIImageView *_iconImageView;
    UIButton *_levelButton;
    UIImageView *_levelImageView;
    UILabel *_levelLabel;
    UIImageView *_yellowImageView;
    UILabel *_gLabel;
    UILabel *_fLabel;
    UILabel *_yLabel;
    UILabel *_bLabel;
    UILabel *_gzLabel;
    UILabel *_fsLabel;
    UILabel *_ycLabel;
    UILabel *_blLabel;
}

@property(nonatomic) __weak UILabel *blLabel; // @synthesize blLabel=_blLabel;
@property(nonatomic) __weak UILabel *ycLabel; // @synthesize ycLabel=_ycLabel;
@property(nonatomic) __weak UILabel *fsLabel; // @synthesize fsLabel=_fsLabel;
@property(nonatomic) __weak UILabel *gzLabel; // @synthesize gzLabel=_gzLabel;
@property(nonatomic) __weak UILabel *bLabel; // @synthesize bLabel=_bLabel;
@property(nonatomic) __weak UILabel *yLabel; // @synthesize yLabel=_yLabel;
@property(nonatomic) __weak UILabel *fLabel; // @synthesize fLabel=_fLabel;
@property(nonatomic) __weak UILabel *gLabel; // @synthesize gLabel=_gLabel;
@property(nonatomic) __weak UIImageView *yellowImageView; // @synthesize yellowImageView=_yellowImageView;
@property(nonatomic) __weak UILabel *levelLabel; // @synthesize levelLabel=_levelLabel;
@property(nonatomic) __weak UIImageView *levelImageView; // @synthesize levelImageView=_levelImageView;
@property(nonatomic) __weak UIButton *levelButton; // @synthesize levelButton=_levelButton;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool typeHome; // @synthesize typeHome=_typeHome;
@property(retain, nonatomic) NSString *stringTypeCell; // @synthesize stringTypeCell=_stringTypeCell;
@property(retain, nonatomic) NSDictionary *dictData; // @synthesize dictData=_dictData;
- (void).cxx_destruct;
- (void)setupHasBrowsing;
- (void)isYetBrowse;
- (void)initLabel:(id)arg1;
- (void)commonInit;
- (void)resize;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

